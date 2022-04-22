//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) {
    logger.addLog("Visiting Add/Sub Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));

    Value *left = this->visit(context->left).as<Value *>();
    logger.addSpecificLog("Visited Left side of Add/Sub expression, has type: " + typeToString(left->getType()));
    Value *right = this->visit(context->right).as<Value *>();
    logger.addSpecificLog("Visited Right side of Add/Sub expression, has type: " + typeToString(right->getType()));
    auto opType = BinaryOperator::Add;

    if (context->op->getText() == "-") {
        opType = BinaryOperator::Sub;
    }
    if (left->getType()->isPointerTy()) {
        logger.addSpecificLog("Loading Left-Side");
        left = Builder->CreateLoad(INT32_TYPE, left);
    }
    if (right->getType()->isPointerTy()) {
        logger.addSpecificLog("Loading Right-Side");
        right = Builder->CreateLoad(INT32_TYPE, right);
    }
    if (left->getType() == right->getType()) {
        return Builder->CreateBinOp(opType,
                                    left,
                                    right
        );
    } else {
        ceh->addError(new TypeMismatchError, context, "Type mismatch lmao!");
        logger.addLog("Type Mismatch between both left and right (add/sub)");
        return nullptr;
    }

}