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

using namespace llvm;

class LuminusCompiler : public LuminusVisitor {
    std::unique_ptr<LLVMContext> TheContext = std::make_unique<LLVMContext>();
    std::unique_ptr<Module> TheModule = std::make_unique<Module>("Compiled_Lang", *TheContext);
    std::unique_ptr<IRBuilder<>> Builder = std::make_unique<IRBuilder<>>(*TheContext);

    FunctionManager fm;
    VariableManager vm;

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
        }
        return nullptr;
    }

    void dump(std::string filename) {
        std::error_code ec;
        raw_fd_ostream fd(filename, ec);
        fd << *TheModule;
        fd.close();
    }

    antlrcpp::Any visitStart(LuminusParser::StartContext *context) override {
        std::cout << "Here" << std::endl;
        vm.addScope();
        return this->visitChildren(context);
    }

    antlrcpp::Any visitInit_stmt(LuminusParser::Init_stmtContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitReinit_stmt(LuminusParser::Reinit_stmtContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitDecl_stmt(LuminusParser::Decl_stmtContext *context) override;

    antlrcpp::Any visitVar_set_stmts(LuminusParser::Var_set_stmtsContext *context) override {
        return this->visitChildren(context);
    }

    antlrcpp::Any visitAdditionExpression(LuminusParser::AdditionExpressionContext *context) override {
        return antlrcpp::Any();
    }

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
        return antlrcpp::Any();
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

    antlrcpp::Any visitClass_definition(LuminusParser::Class_definitionContext *context) override {
        return antlrcpp::Any();
    }

    antlrcpp::Any visitStatement(LuminusParser::StatementContext *context) override {
        return this->visitChildren(context);
    }

    antlrcpp::Any visitBlockExpression(LuminusParser::BlockExpressionContext *context) override {
        this->vm.addScope();
        this->visitChildren(context);
        this->vm.removeScope();
        std::cout << "Here1" << std::endl;
        return nullptr;
    }
};

#endif