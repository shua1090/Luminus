//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReturnStatement(LuminusParser::ReturnStatementContext *context) {
    if (context->value != nullptr) {
        Value *returnValue = this->visit(context->value).as<Value *>();
        if (returnValue->getType()->isPointerTy()) {
            returnValue = Builder->CreateLoad(returnValue->getType()->getContainedType(0), returnValue);
        }
        this->returns = true;
        return Builder->CreateRet(returnValue);
    } else {
        this->returns = true;
        return Builder->CreateRetVoid();
    }
}