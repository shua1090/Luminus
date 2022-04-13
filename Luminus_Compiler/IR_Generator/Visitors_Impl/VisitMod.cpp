//
// Created by shynn on 4/10/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitModulus(LuminusParser::ModulusContext *context) {
    logger.addLog("Visiting Modulus Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    auto LHS = this->visit(context->left).as<Value *>();
    auto RHS = this->visit(context->right).as<Value *>();
    logger.addSpecificLog("LHS of Mod expression has type " + typeToString(LHS->getType()));
    logger.addSpecificLog("RHS of Mod expression has type " + typeToString(RHS->getType()));

    if (LHS->getType()->isPointerTy()) {
        logger.addSpecificLog("LHS is pointer, loading");
        LHS = Builder->CreateLoad(LHS->getType()->getContainedType(0), LHS, "LoadVarL");
    }
    if (RHS->getType()->isPointerTy()) {
        logger.addSpecificLog("RHS is pointer, loading");
        RHS = Builder->CreateLoad(RHS->getType()->getContainedType(0), RHS, "LoadVarR");
    }
    if (RHS->getType() != LHS->getType()) {
        logger.addLog("RHS Type != LHS Type! (Mod)");
        throw std::exception("Type Mismatch Error!");
    } else {
        if (LHS->getType() == INT32_TYPE) {
            logger.addSpecificLog("Created Int modulus!");
            return Builder->CreateSRem(LHS, RHS, "modulusi");
        } else if (LHS->getType() == FLOAT_TYPE) {
            logger.addSpecificLog("Created Float modulus!");
            return Builder->CreateFRem(LHS, RHS, "modulusf");
        } else {
            logger.addLog("Type Mismatch at Modulus!");
            throw std::exception("Modulus Error Type Mismatch");
        }
    }

}