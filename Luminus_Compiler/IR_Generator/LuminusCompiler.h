//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include "Definitions.h"

#include <unordered_map>
#include <utility>

using namespace llvm;

class ScopedVariableManager {
private:
    std::vector<std::unordered_map<std::string, Value *>> names;
public:
    void addScope() {
        names.emplace_back();
    }

    void removeScope() {
        names.pop_back();
    }

    Value *getVariable(std::string varName) {
        for (int i = 0; i < names.size(); i++) {
            try {
                return names[i][varName];
            } catch (std::exception &a) {}
        }
        return nullptr;
    }

    void addVariable(std::string varName, Value *typeOfVariable) {
        this->names[names.size() - 1][varName] = typeOfVariable;
    }
};

class LuminusCompiler : public LuminusVisitor {

    ScopedVariableManager svm;

    CmpInst::Predicate textToCmpOp(std::string text, Type *t) {
        if (t == INT32_TYPE) {
            if (text == "==") {
                return CmpInst::ICMP_EQ;
            } else if (text == ">") {
                return CmpInst::ICMP_SGT;
            } else if (text == "<") {
                return CmpInst::ICMP_SLT;
            } else if (text == ">=") {
                return CmpInst::ICMP_SGE;
            } else if (text == "<=") {
                return CmpInst::ICMP_SLE;
            } else if (text == "!=") {
                return CmpInst::ICMP_NE;
            }
        } else if (t == FLOAT_TYPE) {
            if (text == "==") {
                return CmpInst::FCMP_OEQ;
            } else if (text == ">") {
                return CmpInst::FCMP_OGT;
            } else if (text == "<") {
                return CmpInst::FCMP_OLT;
            } else if (text == ">=") {
                return CmpInst::FCMP_OGE;
            } else if (text == "<=") {
                return CmpInst::FCMP_OLE;
            } else if (text == "!=") {
                return CmpInst::FCMP_ONE;
            }
        }
        return CmpInst::ICMP_UGT;
    }

    llvm::Type *textToType(std::string text) {
        if (text == "int") {
            return INT32_TYPE;
        } else if (text == "double") {
            return FLOAT_TYPE;
        } else if (text == "bool") {
            return BOOL_TYPE;
        } else if (text == "string") {
//            return Type::getInt8PtrTy(*TheContext);
            return Type::getInt8PtrTy(*TheContext);
        } else {
            if (text.find('*') != std::string::npos) {
                Type *t;
                return PointerType::get(textToType(text.substr(0, text.size() - 1)), 0);
            }
            return INT32_TYPE;
        }
    }

    llvm::Type *textToPtrType(std::string text) {
        if (text == "int") {
            return INT32_PTR_TYPE;
        } else if (text == "double") {
            return FLOAT_PTR_TYPE;
        } else if (text == "bool") {
            return BOOL_PTR_TYPE;
        } else if (text == "string") {
            return INT8_PTR_TYPE;
        } else {
            return INT32_TYPE;
        }
    }

    static std::string ReplaceAll(std::string str, const std::string &from, const std::string &to) {
        size_t start_pos = 0;
        while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
        }
        return str;
    }

    static std::string removeAllStars(std::string text) {
        return ReplaceAll(std::move(text), "*", "");
    }

    static std::string removeAllAmpsAndStars(std::string text) {
        return ReplaceAll(ReplaceAll(std::move(text), "*", ""), "&", "");
    }

    static std::string fixBackslashes(std::string text) {
        return ReplaceAll(ReplaceAll(ReplaceAll(text, "\\n", "\n"), "\\t", "\t"), "\\\"", "\"");
    }

public:
    std::unique_ptr<LLVMContext> TheContext = std::make_unique<LLVMContext>();
    std::unique_ptr<Module> TheModule = std::make_unique<Module>("Compiled_Lang", *TheContext);
    std::unique_ptr<IRBuilder<>> Builder = std::make_unique<IRBuilder<>>(*TheContext);

    antlrcpp::Any visitDereferenceExpression(LuminusParser::DereferenceExpressionContext *context) override {
        std::string inpName = context->getText();
        size_t dereferenceCount = count(inpName.begin(), inpName.end(), '&');
        auto a = svm.getVariable(inpName.substr(inpName.find_last_of('&') + 1));
        if (a == nullptr) {
            // TODO: THROW EXCEPTION
            std::cout << "Visit Dereference Failure" << std::endl;
        }
        return a;
    }

    antlrcpp::Any visitValueOfPointerExpression(LuminusParser::ValueOfPointerExpressionContext *context) override {
        std::string inpName = context->getText();
        size_t ptrCount = count(inpName.begin(), inpName.end(), '*');
        auto a = svm.getVariable(inpName.substr(inpName.find_last_of('*') + 1));
        if (a == nullptr) {
            // TODO: THROW EXCEPTION
            std::cout << "Visit Ptr Failure" << std::endl;
        }
        for (int i = 0; i < ptrCount; i++) {
            a = Builder->CreateLoad(a->getType()->getContainedType(0), a);
        }
        return a;
    }

    antlrcpp::Any visitIndexing(LuminusParser::IndexingContext *context) override {
        return antlrcpp::Any();
    }

    Function *curFunction;

    void dump() {
        this->TheModule->dump();
    }

    void setupPrintFunction() {
        FunctionType *FT = FunctionType::get(INT32_TYPE,
                                             INT8_PTR_TYPE, false);

        Function *F = Function::Create(FT, Function::ExternalLinkage, "puts", *TheModule);

        FunctionType *printft = FunctionType::get(INT32_TYPE,
                                                  INT8_PTR_TYPE, true);

        Function *printffunc = Function::Create(printft, Function::ExternalLinkage, "printf", *TheModule);
    }

    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {

        setupPrintFunction();


        this->visitChildren(context);
        return NULL;
    }

    antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *context) override {
        if (context->getText() == "true") {
            return static_cast<Value *>( Builder->getInt1(1));
        } else {
            return static_cast<Value *> (Builder->getInt1(0));
        }
    }

    antlrcpp::Any visitParantheses(LuminusParser::ParanthesesContext *context) override {
        return this->visit(context->inner);
    }

    antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) override;

    antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) override;

    antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *context) override {
        std::cout << "Visit Unary Negate" << std::endl;
        Value *val = this->visit(context->inner).as<Value *>();
        if (val->getType() == INT32_TYPE) {
            return Builder->CreateSub(
                    ConstantInt::get(INT32_TYPE, "0", 10),
                    val
            );

        } else if (val->getType() == FLOAT_TYPE) {
            return Builder->CreateFSub(
                    ConstantFP::get(FLOAT_TYPE, "0.0"),
                    val
            );

        } else {
            std::cout << "Unary Negate on an invalid var/const" << std::endl;
        }
        return nullptr;
    }

    antlrcpp::Any visitStringConst(LuminusParser::StringConstContext *context) override {
        std::string text = context->getText();
        text = text.substr(1, text.length() - 2);
        text = fixBackslashes(text);

        return Builder->CreateBitCast(
                static_cast<Value *> ( Builder->CreateGlobalString(text)),
                INT8_PTR_TYPE
        );
    }

    antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) override {
        svm.addScope();
        this->visitChildren(context);
        svm.removeScope();
        return antlrcpp::Any();
    }

    antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) override;

    antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) override {
        return static_cast<Value *>(
                ConstantFP::get(
                        *TheContext, APFloat(std::stod(context->getText()))
                )
        );
    }

    antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) override {
        return static_cast<Value *>( Builder->getInt32(std::stoi(context->getText())));
    }

    antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) override;

    antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) override;

    antlrcpp::Any visitCompExpression(LuminusParser::CompExpressionContext *context) override {
        Value *LHS = this->visit(context->left).as<Value *>();
        Value *RHS = this->visit(context->right).as<Value *>();
        if (LHS == nullptr || RHS == nullptr) {
            std::cout << "ERR! - Visit Comp Exiression" << std::endl;
            // TODO: ERROR HANDLING
            return nullptr;
        } else if (LHS->getType() != RHS->getType()) {
            std::cout << "ERR! - TYPE MISMATCH" << std::endl;
            // TODO: ERROR HANDLING
            return nullptr;
        } else {
            return Builder->CreateCmp(textToCmpOp(context->op->getText(), LHS->getType()), LHS, RHS);
        }
    }

    antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) override;

    antlrcpp::Any visitInitialization(LuminusParser::InitializationContext *context) override;

    antlrcpp::Any visitDeclaration(LuminusParser::DeclarationContext *context) override;

    antlrcpp::Any visitReinitialization(LuminusParser::ReinitializationContext *context) override;

    antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) override {
        return this->visitChildren(context);
    }


    antlrcpp::Any visitCastToType(LuminusParser::CastToTypeContext *context) override;

    antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *context) override;

    Function *specialMainDeclaration(LuminusParser::FunctionDeclarationContext *context);

    antlrcpp::Any visitIf_statement(LuminusParser::If_statementContext *context) override { return NULL; }

    antlrcpp::Any visitElse_statement(LuminusParser::Else_statementContext *context) override { return NULL; }

    antlrcpp::Any visitElif_statement(LuminusParser::Elif_statementContext *context) override { return NULL; }

    antlrcpp::Any visitConditional_statement(LuminusParser::Conditional_statementContext *context) override;

    BasicBlock *curReturnBlock;
    Value *curReturnValue;
    bool returns = false;
};

#endif //LUMINUS_LUMVISITOR_H
