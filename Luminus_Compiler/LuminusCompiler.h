#ifndef LUMINUS_COMPILER
#define LUMINUS_COMPILER

#include "LuminusVisitor.h"
#include <vector>
#include <string>
#include <iostream>

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Value.h"
#include "llvm/IR/Function.h"

#include "FunctionManager.h"
#include "VariableManager.h"
#include "ClassManager.h"

using namespace llvm;

class LuminusCompiler : public LuminusVisitor {
    std::unique_ptr<LLVMContext> TheContext = std::make_unique<LLVMContext>();
    std::unique_ptr<Module> TheModule = std::make_unique<Module>("Compiled_Lang", *TheContext);
    std::unique_ptr<IRBuilder<>> Builder = std::make_unique<IRBuilder<>>(*TheContext);

    FunctionManager fm;
    VariableManager vm;
    ClassManager cm;

    // For late parsing (after other things)
    std::vector<LuminusParser::Function_definitionContext *> classFunctions;
    InnerClass* currentClass = nullptr;

public:

    Type *getType(std::string type) {
        if (type == "int") {
            return Type::getInt32Ty(*TheContext);
        } else if (type == "double") {
            return Type::getDoubleTy(*TheContext);
        } else if (type == "char") {
            return Type::getInt8Ty(*TheContext);
        } else if (type == "bool") {
            return Type::getInt1Ty(*TheContext);
        } else if (type == "void") {
            return Type::getVoidTy(*TheContext);
        } else {
            auto a = StructType::getTypeByName(*TheContext, type);
            if (a == nullptr) {
                return nullptr;
            } else return a;
        }
        return nullptr;
    }

    Value *createFunctionCall(Value *precursor, LuminusParser::Func_Call_ExpressionContext *ctx, Function *f);

    std::string LuminusCompiler::typeToString(Type *t) {
        std::string type_str;
        llvm::raw_string_ostream rso(type_str);
        t->print(rso);
        return rso.str();
    }

    void dump(std::string filename) {
        std::error_code ec;
        raw_fd_ostream fd(filename, ec);
        fd << *TheModule;
        fd.close();
    }

    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {
        vm.addScope();
        this->visitChildren(context);
        return nullptr;
    }

    antlrcpp::Any visitInit_stmt(LuminusParser::Init_stmtContext *context) override;

    antlrcpp::Any visitReinit_stmt(LuminusParser::Reinit_stmtContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitDecl_stmt(LuminusParser::Decl_stmtContext *context) override;

    antlrcpp::Any visitVar_set_stmts(LuminusParser::Var_set_stmtsContext *context) override {
        return this->visitChildren(context);
    }

    antlrcpp::Any visitAdditionExpression(LuminusParser::AdditionExpressionContext *context) override;

    antlrcpp::Any visitModulusExpression(LuminusParser::ModulusExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFloatConstant(LuminusParser::FloatConstantContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitUnaryNegateExpression(LuminusParser::UnaryNegateExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitMultiplyExpression(LuminusParser::MultiplyExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitExplicitCastExpression(LuminusParser::ExplicitCastExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitNotExpression(LuminusParser::NotExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitParanthesesExpression(LuminusParser::ParanthesesExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitIntegerConstant(LuminusParser::IntegerConstantContext *context) override {
        return static_cast<Value *>( Builder->getInt32(std::stoi(context->getText())));
    }

    antlrcpp::Any visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitSubtractionExpression(LuminusParser::SubtractionExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitComparisonExpression(LuminusParser::ComparisonExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitLogicalExpression(LuminusParser::LogicalExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitDivideExpression(LuminusParser::DivideExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitIncrementOperator(LuminusParser::IncrementOperatorContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitBooleanConstant(LuminusParser::BooleanConstantContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitDecrementOperator(LuminusParser::DecrementOperatorContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitStringConstant(LuminusParser::StringConstantContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitArgument(LuminusParser::ArgumentContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunction_definition(LuminusParser::Function_definitionContext *context) override;

    bool classPreparse = false;
    std::vector < Type*> classTypes;

    antlrcpp::Any visitClass_definition(LuminusParser::Class_definitionContext *context) override {
        std::string className = context->class_name->getText();
        this->currentClass = new InnerClass;
        this->currentClass->className = className;

        // Skip Functions in initial pass
        this->currentClass->type = StructType::create(*TheContext, className);
        std::cout << "Type is :" << this->currentClass->type->isOpaque() << std::endl;
        this->classPreparse = true;
        this->visitChildren(context);

        this->currentClass->type->setBody(this->classTypes);

        this->classPreparse = false;

        for (int i = 0; i  <  this->classFunctions.size(); i++) {
            this->visit(this->classFunctions[i]);
        }
        cm.addInnerClass(className, this->currentClass);

        this->classFunctions.clear();
        this->classTypes.clear();
        // Stuff before class parse
        // this->classFunctions
        // this->classTypes

        this->currentClass = nullptr;


        return nullptr;
    }



    antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) override {
        return this->visitChildren(context);
    }

    antlrcpp::Any visitMemberAccessExpression(LuminusParser::MemberAccessExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunc_Call_Expression(LuminusParser::Func_Call_ExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitMethodAccessExpression(LuminusParser::MethodAccessExpressionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitFunc_call(LuminusParser::Func_callContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) override {
        this->vm.addScope();
        this->visitChildren(context);
        this->vm.removeScope();
        return nullptr;
    }

    antlrcpp::Any makeFunction(LuminusParser::Function_definitionContext *context);
};
#endif