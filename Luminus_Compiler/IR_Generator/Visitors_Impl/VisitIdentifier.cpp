//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) {
    logger.addLog("Visiting Identifier Expression (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Value *var = this->svm.getVariable(context->id->getText());
    logger.addSpecificLog("Found Identifier with type " + typeToString(var->getType()));
    if (var == nullptr) {
        logger.addLog("Variable at Identifier Expression is null!");
    }
    logger.addLog("Leaving Identifier expression");
    return var;
}