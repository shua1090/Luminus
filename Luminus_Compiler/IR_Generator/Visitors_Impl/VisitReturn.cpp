//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReturnStatement(LuminusParser::ReturnStatementContext *context) {
    Value *returnValue = this->visit(context->value).as<Value *>();
    if (returnValue->getType()->isPointerTy()) {
        returnValue = Builder->CreateLoad(returnValue->getType()->getContainedType(0), returnValue);
    }
    Builder->CreateRet(returnValue);
    this->returns = true;
    return returnValue;
}