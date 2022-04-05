//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReturnStatement(LuminusParser::ReturnStatementContext *context) {
    Value *returnValue = this->visit(context->value).as<Value *>();
    Builder->CreateRet(returnValue);
    return returnValue;
}