//
// Created by shynn on 3/27/2022.
//

#ifndef LUMINUS_LUMVISITOR_H
#define LUMINUS_LUMVISITOR_H

#include "LuminusVisitor.h"
#include "Definitions.h"
#include "Compiler_Errors/CompileException.hpp"
#include "Compiler_Errors/CompilerLogger.h"
#include <unordered_map>
#include <utility>

using namespace llvm;

class ScopedVariableManager {
private:
    std::vector<std::unordered_map<std::string, Value *>> names;
public:

    std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
        std::stringstream ss(s + ' ');
        std::string item;
        while (std::getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }

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
            } catch (std::runtime_error &a) {}
        }
        return nullptr;
    }

    void addVariable(std::string varName, Value *typeOfVariable) {
        this->names[names.size() - 1][varName] = typeOfVariable;
    }
};

struct Structure {
    Type *typeOfStruct;
    std::vector<std::string> argsAsStrings;
};

class StructDeclarationManager {
private:
    std::unordered_map<std::string, Structure *> struct_decls;
public:

    Structure *getVariable(std::string varName) {
        try {
            return struct_decls[varName];
        } catch (std::runtime_error &a) {}
        return nullptr;
    }

    void addStruct(std::string structName, Structure *structType) {
        this->struct_decls[structName] = structType;
    }

    ~StructDeclarationManager() {
        for (auto kv: struct_decls) {
            delete struct_decls[kv.first];
        }

    }
};

class LuminusCompiler : public LuminusVisitor {
public:
    std::unique_ptr<LLVMContext> TheContext = std::make_unique<LLVMContext>();
    std::unique_ptr<Module> TheModule = std::make_unique<Module>("Compiled_Lang", *TheContext);
    std::unique_ptr<IRBuilder<>> Builder = std::make_unique<IRBuilder<>>(*TheContext);


    ScopedVariableManager svm;
    StructDeclarationManager sdm;
    CompilerErrorHandler *ceh;
    CompilerLogger logger;

    LuminusCompiler(std::string filename) {
        ceh = new CompilerErrorHandler(filename);
        TheModule->setModuleIdentifier(filename.substr(filename.find_last_of('/') + 1, filename.find_last_of('.')));
        TheModule->setSourceFileName(filename.substr(filename.find_last_of('/') + 1, filename.find_last_of('.')));
    }

    ~LuminusCompiler() {
        delete ceh;
    }

private:

    CmpInst::Predicate textToCmpOp(std::string text, Type *t) {
        text = trim(text);
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
        text = trim(text);
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
                return PointerType::get(textToType(text.substr(0, text.size() - 1)), 0);
            }
            if (this->sdm.getVariable(text) != nullptr) {
                return this->sdm.getVariable(text)->typeOfStruct;
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

    void dumpToFile(const std::string &fileName) const {
        std::error_code ec;
        raw_fd_ostream fd(fileName, ec);
        fd << *TheModule;
        fd.close();
    }

    antlrcpp::Any visitDereferenceExpression(LuminusParser::DereferenceExpressionContext *context) override {
        logger.addLog("Visiting Dereference Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        std::string inpName = context->getText();
        logger.addSpecificLog("Found expression name: " + inpName);
        size_t dereferenceCount = count(inpName.begin(), inpName.end(), '&');
        logger.addSpecificLog(&"Found dereference count: "[dereferenceCount]);
        auto a = svm.getVariable(inpName.substr(inpName.find_last_of('&') + 1));
        logger.addSpecificLog("Dereferencing Variable resulted in a type of " + typeToString(a->getType()));
        if (a == nullptr) {
            // TODO: THROW EXCEPTION
            logger.addLog("DEREFERENCING FAILURE; HALTING;");
        }
        return a;
    }

    antlrcpp::Any visitValueOfPointerExpression(LuminusParser::ValueOfPointerExpressionContext *context) override {
        logger.addLog("Visiting ValueOf Pointer Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        std::string inpName = context->getText();
        logger.addSpecificLog("Found expression name: " + inpName);
        size_t ptrCount = count(inpName.begin(), inpName.end(), '*');
        logger.addSpecificLog(&"Found pointer count: "[ptrCount]);
//        auto val = this->visit(context->id).as<Value *>();
        auto a = svm.getVariable(inpName.substr(inpName.find_last_of('*') + 1));
        logger.addSpecificLog("Found Value with Type: " + typeToString(a->getType()));

        if (a == nullptr) {
            // TODO: THROW EXCEPTION
            std::cout << "Visit Ptr Failure" << std::endl;
            logger.addLog("Visit Pointer Failure!");
        }
        for (int i = 0; i < ptrCount; i++) {
            a = Builder->CreateLoad(a->getType()->getContainedType(0), a);
        }
        return a;
    }

    antlrcpp::Any visitIndexing(LuminusParser::IndexingContext *context) override {
//        Value *varVal = svm.getVariable(context->id->getText());
        logger.addLog("Visiting Indexing Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));

        Value *varVal = this->visit(context->id).as<Value *>();
        logger.addSpecificLog("Visiting ID returned a value with type " + typeToString(varVal->getType()));
        if (varVal == nullptr) {
            logger.addLog("Variable " + context->id->getText() + " DNE!");
            throw std::runtime_error("Var DNE");
        }

        Value *index = this->visit(context->index).as<Value *>();
        logger.addSpecificLog("Visited Index val, received type " + typeToString(index->getType()));

        if (index->getType()->isPointerTy()) {
            logger.addSpecificLog("Aforementioned Index Value was a pointer, getting the value pointed to it...");
            index = Builder->CreateLoad(index->getType()->getContainedType(0), index);
        }

        if (index->getType() != INT32_TYPE) {
            logger.addLog("Index is not an integer type!");
            throw std::runtime_error("Invalid Index Type!");
        }
        if (varVal->getType()->isPointerTy() && varVal->getType()->getContainedType(0)->isPointerTy()) {
            varVal = Builder->CreateLoad(varVal->getType()->getContainedType(0), varVal);
            logger.addSpecificLog("Load operation returned a value with type " + typeToString(varVal->getType()));
            logger.addSpecificLog("Creating GEP operation with result of load operation and index");
            return Builder->CreateGEP(varVal->getType()->getContainedType(0),
                                      varVal,
                                      {index}
            );
        }
        logger.addSpecificLog(
                "Creating GEP operation with a value that has a type of " + typeToString(varVal->getType()));
        return Builder->CreateGEP(varVal->getType()->getContainedType(0),
                                  varVal,
                                  {ConstantInt::get(INT32_TYPE, 0),
                                   index
                                  }
        );

        return antlrcpp::Any();
    }

    Function *curFunction;

    void setupPrintFunction() {

        FunctionType *printft = FunctionType::get(INT32_TYPE,
                                                  INT8_PTR_TYPE, true);

        Function *printffunc = Function::Create(printft, Function::ExternalLinkage, "printf", *TheModule);

        FunctionType *scanft = FunctionType::get(INT32_TYPE,
                                                 INT8_PTR_TYPE, true);

        Function *scanff = Function::Create(scanft, Function::ExternalLinkage, "scanf", *TheModule);
    }

    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {
        logger.addLog(std::string("Visiting Start at ") + __FILE__ + " on " + std::to_string(__LINE__));
        setupPrintFunction();
        this->visitChildren(context);
        logger.addSpecificLog("Exited Visiting Start");
        return NULL;
    }

    antlrcpp::Any visitStruct_declaration(LuminusParser::Struct_declarationContext *context) override;

    antlrcpp::Any visitAccessInternal(LuminusParser::AccessInternalContext *context) override;

    antlrcpp::Any visitBool_Const(LuminusParser::Bool_ConstContext *context) override {
        logger.addLog("Visiting Bool_Const Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));

        if (context->getText() == "true") {
            return static_cast<Value *>( Builder->getInt1(true));
        } else {
            return static_cast<Value *> (Builder->getInt1(false));
        }
    }

    antlrcpp::Any visitParantheses(LuminusParser::ParanthesesContext *context) override {
        logger.addLog("Visiting Parantheses Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        return this->visit(context->inner);
    }

    antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) override;

    antlrcpp::Any visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) override;

    antlrcpp::Any visitUnary_Negate(LuminusParser::Unary_NegateContext *context) override {
        logger.addLog("Visiting Unary Negate Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        Value *val = this->visit(context->inner).as<Value *>();
        if (val->getType() == INT32_TYPE) {
            logger.addSpecificLog("Unary Negate proceeding on Int32 Type");
            return Builder->CreateSub(
                    ConstantInt::get(INT32_TYPE, "0", 10),
                    val
            );

        } else if (val->getType() == FLOAT_TYPE) {
            logger.addSpecificLog("Unary Negate proceeding on Float Type");
            return Builder->CreateFSub(
                    ConstantFP::get(FLOAT_TYPE, "0.0"),
                    val
            );

        } else {
            logger.addLog("Unary Negate attempted on an invalid type, which is " + typeToString(val->getType()));
        }
        return nullptr;
    }

    antlrcpp::Any visitStringConst(LuminusParser::StringConstContext *context) override {
        logger.addLog("Visiting String Constant (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        std::string text = context->getText();
        text = text.substr(1, text.length() - 2);
        text = fixBackslashes(text);
        logger.addSpecificLog("Text after modifications: " + text);
        logger.addSpecificLog("Creating Global String Constant");

        return Builder->CreateBitCast(
                static_cast<Value *> ( Builder->CreateGlobalString(text)),
                INT8_PTR_TYPE
        );
    }

    antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) override {
        logger.addSpecificLog("Visiting Block Expression");
        svm.addScope();
        this->visitChildren(context);
        svm.removeScope();
        logger.addSpecificLog("Exiting the visit of Block Expression");
        return antlrcpp::Any();
    }

    antlrcpp::Any visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) override;

    antlrcpp::Any visitFloatExpression(LuminusParser::FloatExpressionContext *context) override {
        logger.addLog("Visiting Float Constant (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        return static_cast<Value *>(
                ConstantFP::get(
                        *TheContext, APFloat(std::stod(context->getText()))
                )
        );
    }

    antlrcpp::Any visitIntegerExpression(LuminusParser::IntegerExpressionContext *context) override {
        logger.addLog("Visiting Integer Constant (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        return static_cast<Value *>( Builder->getInt32(std::stoi(context->getText())));
    }

    antlrcpp::Any visitFunctionCall(LuminusParser::FunctionCallContext *context) override;

    antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) override;

    antlrcpp::Any visitCompExpression(LuminusParser::CompExpressionContext *context) override {
        logger.addLog("Visiting Comparison Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        Value *LHS = this->visit(context->left).as<Value *>();
        logger.addSpecificLog(
                "Left Hand Side of Comp Expression visited, returned value with type: " + typeToString(LHS->getType()));
        Value *RHS = this->visit(context->right).as<Value *>();
        logger.addSpecificLog("Right Hand Side of Comp Expression visited, returned value with type: " +
                              typeToString(RHS->getType()));
        if (LHS == nullptr || RHS == nullptr) {
            logger.addLog("ERROR, LHS or RHS of comp expression are null!");
            return nullptr;
        } else {
            if (LHS->getType()->isPointerTy()) {
                logger.addSpecificLog("Loading LHS, because it is a pointer");
                LHS = Builder->CreateLoad(LHS->getType()->getContainedType(0), LHS);
            }
            if (RHS->getType()->isPointerTy()) {
                logger.addSpecificLog("Loading RHS, because it is a pointer");
                RHS = Builder->CreateLoad(RHS->getType()->getContainedType(0), RHS);
            }
            if (LHS->getType() != RHS->getType()) {
                // TODO: ERROR HANDLING
                logger.addLog("LHS and RHS are not the same type at Comparison!");
                return nullptr;
            }
            logger.addSpecificLog("Finished Comparison Build");
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

    antlrcpp::Any visitWhile_statement(LuminusParser::While_statementContext *context) override;

    antlrcpp::Any visitCastToType(LuminusParser::CastToTypeContext *context) override;

    antlrcpp::Any visitReturnStatement(LuminusParser::ReturnStatementContext *context) override;

    antlrcpp::Any visitIf_statement(LuminusParser::If_statementContext *context) override { return NULL; }

    antlrcpp::Any visitElse_statement(LuminusParser::Else_statementContext *context) override { return NULL; }

    antlrcpp::Any visitElif_statement(LuminusParser::Elif_statementContext *context) override { return NULL; }

    antlrcpp::Any visitConditional_statement(LuminusParser::Conditional_statementContext *context) override;

    antlrcpp::Any visitModulus(LuminusParser::ModulusContext *context) override;

    antlrcpp::Any visitLogicalExpression(LuminusParser::LogicalExpressionContext *context) override {
        logger.addLog(
                "Visiting Logical Expression Pointer Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                std::to_string(__LINE__));
        auto lhs = this->visit(context->left).as<Value *>();
        logger.addSpecificLog("Visited LHS of logical expression, has type " + typeToString(lhs->getType()));
        auto rhs = this->visit(context->right).as<Value *>();
        logger.addSpecificLog("Visited RHS of logical expression, has type " + typeToString(rhs->getType()));
        if (lhs->getType()->isPointerTy()) {
            logger.addSpecificLog("Loading LHS, because it is a pointer");
            lhs = Builder->CreateLoad(lhs->getType()->getContainedType(0), lhs);
        }
        if (rhs->getType()->isPointerTy()) {
            logger.addSpecificLog("Loading RHS, because it is a pointer");
            rhs = Builder->CreateLoad(rhs->getType()->getContainedType(0), rhs);
        }

        std::string op = trim(context->log_op->getText());
        if (op == "and") {
            logger.addSpecificLog("Created Logical And Expression");
            return Builder->CreateLogicalAnd(lhs, rhs, "logical_and");
        } else {
            logger.addSpecificLog("Created Logical Or Expression");
            return Builder->CreateLogicalOr(lhs, rhs, "logical_or");
        }
    }

    antlrcpp::Any visitNotExpression(LuminusParser::NotExpressionContext *context) override {
        logger.addLog("Visiting Logical Not Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                      std::to_string(__LINE__));
        Value *val = this->visit(context->exp).as<Value *>();
        logger.addSpecificLog("Value being not'd has a type of " + typeToString(val->getType()));
        if (val->getType()->isPointerTy()) {
            logger.addSpecificLog("Value being not'd will be loaded, because it is a pointer");
            val = Builder->CreateLoad(val->getType()->getContainedType(0), val);
        }
        //TODO: Add Nullptr checks
        logger.addSpecificLog("Leaving Not Expression");
        return Builder->CreateNot(val, "not_expr");
    }

    BasicBlock *curReturnBlock;
    Value *curReturnValue;
    bool returns = false;

    // STRING_UTILS STUFF
    static std::string &ltrim(std::string &s);

    static std::string &rtrim(std::string &s);

    static std::string trim(std::string text);

    void autoCast(Value *a, Value *b);

    static std::string typeToString(Type *t);
};

#endif //LUMINUS_LUMVISITOR_H
