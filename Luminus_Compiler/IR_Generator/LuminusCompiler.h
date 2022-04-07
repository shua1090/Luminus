//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include "Definitions.h"

#include <unordered_map>

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
            } catch (std::out_of_range &r) {}
        }
        return nullptr;
    }

    void addVariable(std::string varName, Value *typeOfVariable) {
        this->names[names.size() - 1][varName] = typeOfVariable;
    }
};

class LuminusCompiler : public LuminusVisitor {

    ScopedVariableManager svm;

    llvm::Type *textToType(std::string text) {
        if (text == "int") {
            return INT32_TYPE;
        } else if (text == "double") {
            return FLOAT_TYPE;
        } else if (text == "string") {
//            return Type::getInt8PtrTy(*TheContext);
            return Type::getInt8PtrTy(*TheContext);
        } else {
            return INT32_TYPE;
        }
    }

    llvm::Type *textToPtrType(std::string text) {
        if (text == "int") {
            return INT32_PTR_TYPE;
        } else if (text == "double") {
            return FLOAT_PTR_TYPE;
        } else if (text == "string") {
            return INT8_PTR_TYPE;
        } else {
            return INT32_TYPE;
        }
    }

public:
    std::unique_ptr<LLVMContext> TheContext = std::make_unique<LLVMContext>();
    std::unique_ptr<Module> TheModule = std::make_unique<Module>("Compiled_Lang", *TheContext);
    std::unique_ptr<IRBuilder<>> Builder = std::make_unique<IRBuilder<>>(*TheContext);

    void dump() {
        this->TheModule->dump();
    }

    void setupPrintFunction() {
        FunctionType *FT = FunctionType::get(INT32_TYPE,
                                             INT8_PTR_TYPE, false);

        Function *F = Function::Create(FT, Function::ExternalLinkage, "puts", *TheModule);
    }

    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {

        setupPrintFunction();


        this->visitChildren(context);
        return NULL;
    }

    antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *context) override {
        return antlrcpp::Any();
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

        }
        return nullptr;
    }

    antlrcpp::Any visitStringConst(LuminusParser::StringConstContext *context) override {
        std::string text = context->getText();
        text = text.substr(1, text.length() - 1);
        return Builder->CreateBitCast(
                static_cast<Value *> ( Builder->CreateGlobalString(text)),
                INT8_PTR_TYPE
        );
    }

    antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) override {
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

    antlrcpp::Any visitBoolExpression(LuminusParser::BoolExpressionContext *context) override {
        return antlrcpp::Any();
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
};

#endif //LUMINUS_LUMVISITOR_H
