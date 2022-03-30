//
// Created by shynn on 3/28/2022.
//
#include "LumVisitor.h"

antlrcpp::Any LuminusGenerator::visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) {
    std::cout << "Visited ID Expression" << std::endl;
    Types varType = checkForVariable(context->id->getText());
    if (varType == NONEXISTENT) {
        logger.addError(fillError(new NonexistentVariable, context,
                                  "Variable \"" + context->id->getText() + "\" has not previously been declared"));
        return varType;
    } else {
        return varType;
    }
}