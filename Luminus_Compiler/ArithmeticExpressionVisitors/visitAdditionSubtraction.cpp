//
// Created by shynn on 5/14/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitAdditionExpression(LuminusParser::AdditionExpressionContext *context) {
    Value * lhs = visit(context->left).as<Value*>();
    Value * rhs = visit(context->right).as<Value*>();

    // If Left Hand Side is a variable
    if (lhs->getType()->isPointerTy() && !lhs->getType()->getContainedType(0)->isStructTy()){
        lhs = Builder->CreateLoad(lhs->getType()->getContainedType(0), lhs);
    }

    if (rhs->getType()->isPointerTy() && !rhs->getType()->getContainedType(0)->isStructTy()){
        rhs = Builder->CreateLoad(rhs->getType()->getContainedType(0), rhs);
    }

    if (rhs->getType() != lhs->getType()){
        std::cout << "LHS type of " + typeToString(lhs->getType()) + " != RHS type of " + typeToString(rhs->getType());
        exit(-1);
    }

    if (lhs->getType() == getType("int")){
        return Builder->CreateAdd(lhs, rhs);
    } else if (lhs->getType() == getType("double")) {
        return Builder->CreateFAdd(lhs, rhs);
    } else if (lhs->getType()->isStructTy()){
        auto a = this->cm.getInnerClass(lhs->getType()->getStructName().str());
        if (a->getFunction("add") == nullptr){
            std::cout << "No override in " << a->className << " for addition operation" << std::endl;
            exit(-1);
        } else {
            this->createFunctionCall(rhs, nullptr, a->getFunction("add"));
        }
    }

}