//
// Created by shynn on 3/29/2022.
//

#include "LumVisitor.h"

antlrcpp::Any LuminusGenerator::visitBoolExpression(LuminusParser::BoolExpressionContext *context) {
    Types left = this->visit(context->left).as<Types>();
    Types right = this->visit(context->right).as<Types>();
    if (left == NONEXISTENT || right == NONEXISTENT) {
        logger.addError(fillError(
                new NonexistentVariable,
                context,
                "One of the values being compared has not been initialized"));
    } else if (left == BOOLEAN || right == BOOLEAN) {
        logger.addError(fillError(
                new TypeMismatchError,
                context,
                "Cannot compare Booleans"));
    } else if (left != right) {
        logger.addError(fillError(
                new TypeMismatchError,
                context,
                "Cannot compare two primitives of differing types"));
    }
    return BOOLEAN;
}