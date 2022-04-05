//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitIdentifierExpression(LuminusParser::IdentifierExpressionContext *context) {
    Value *var = this->svm.getVariable(context->id->getText());
    if (var == nullptr) throw std::exception("ERR!");
    if (var->getType() == INT32_PTR_TYPE) {
        var = Builder->CreateLoad(INT32_TYPE, var);
    }
    if (var->getType() == FLOAT_PTR_TYPE) {
        var = Builder->CreateLoad(FLOAT_TYPE, var);
    }
    return var;
}