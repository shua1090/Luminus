//
// Created by shynn on 3/29/2022.
//

#include "LumVisitor.h"

antlrcpp::Any LuminusGenerator::visitAddOrSubtract(LuminusParser::AddOrSubtractContext *context) {
    Types left = this->visit(context->left).as<Types>();
    Types right = this->visit(context->right).as<Types>();
    if (left == BOOLEAN || right == BOOLEAN) {
        logger.addError(fillError(
                new TypeMismatchError,
                context,
                "Cannot operate on Booleans"));
    } else if (left != right) {
        logger.addError(fillError(
                new TypeMismatchError,
                context,
                "Cannot operate on two differing types"
        ));
    }
    return left;
}

antlrcpp::Any LuminusGenerator::visitMultiplyOrDivide(LuminusParser::MultiplyOrDivideContext *context) {
    Types left = this->visit(context->left).as<Types>();
    Types right = this->visit(context->right).as<Types>();
    if (left == BOOLEAN || right == BOOLEAN) {
        logger.addError(fillError(
                new TypeMismatchError,
                context,
                "Cannot operate on Booleans"));
    } else if (left != right) {
        logger.addError(fillError(
                new TypeMismatchError,
                context,
                "Cannot operate on two differing types"
        ));
    }
    return left;
}

antlrcpp::Any LuminusGenerator::visitUnary_Negate(LuminusParser::Unary_NegateContext *context) {
    return this->visit(context->inner);
}

antlrcpp::Any LuminusGenerator::visitCastToType(LuminusParser::CastToTypeContext *context) {
    this->visit(context->inner);
    return LuminusGenerator::textToType(context->cast_type->getText());
}