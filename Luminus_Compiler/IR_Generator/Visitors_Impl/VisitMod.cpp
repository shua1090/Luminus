//
// Created by shynn on 4/10/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitModulus(LuminusParser::ModulusContext *context) {
    auto LHS = this->visit(context->left).as<Value *>();
    auto RHS = this->visit(context->right).as<Value *>();

    if (LHS->getType()->isPointerTy()) {
        LHS = Builder->CreateLoad(LHS->getType()->getContainedType(0), LHS, "LoadVarL");
    }
    if (RHS->getType()->isPointerTy()) {
        RHS = Builder->CreateLoad(RHS->getType()->getContainedType(0), RHS, "LoadVarR");
    }
    if (RHS->getType() != LHS->getType()) {
        throw std::exception("Type Mismatch Error!");
    } else {
        if (LHS->getType() == INT32_TYPE) {
            return Builder->CreateSRem(LHS, RHS, "modulusi");
        } else if (LHS->getType() == FLOAT_TYPE) {
            return Builder->CreateFRem(LHS, RHS, "modulusf");
        } else {
            throw std::exception("Modulus Error Type Mismatch");
        }
    }

}