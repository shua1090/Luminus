//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) {
    logger.addLog("Visiting Mul/Div Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Value *left = this->visit(context->left).as<Value *>();
    Value *right = this->visit(context->right).as<Value *>();

    logger.addSpecificLog("LHS Type of Mul/Div expression is " + typeToString(left->getType()));
    logger.addSpecificLog("RHS Type of Mul/Div expression is " + typeToString(right->getType()));

    if (left->getType()->isPointerTy()) {
        logger.addSpecificLog("LHS type is pointer, loading");
        left = Builder->CreateLoad(left->getType()->getContainedType(0), left);
    }
    if (right->getType()->isPointerTy()) {
        logger.addSpecificLog("RHS type is pointer, loading");
        right = Builder->CreateLoad(right->getType()->getContainedType(0), right);
    }
    if (left->getType() == right->getType()) {

        auto opType = BinaryOperator::Mul;
        if (left->getType() == INT32_TYPE) {
            if (context->op->getText() == "/") {
                opType = BinaryOperator::SDiv;
            }
        } else if (left->getType() == FLOAT_TYPE) {
            opType = BinaryOperator::FMul;
            if (context->op->getText() == "/") {
                opType = BinaryOperator::FDiv;
            }
        }
        logger.addSpecificLog("Leaving Mul/Div");
        return Builder->CreateBinOp(opType,
                                    left,
                                    right
        );
    } else {
        logger.addLog("Some kind of error occurred while visiting Mul/Div");
        return nullptr;
    }
}