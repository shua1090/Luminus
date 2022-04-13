//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReturnStatement(LuminusParser::ReturnStatementContext *context) {
    logger.addLog("Visiting return statement (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    if (context->value != nullptr) {
        Value *returnValue = this->visit(context->value).as<Value *>();
        logger.addSpecificLog("Returning something with type " + typeToString(returnValue->getType()));
        if (returnValue->getType()->isPointerTy()) {
            logger.addSpecificLog("Return type is pointer, so loading it first");
            returnValue = Builder->CreateLoad(returnValue->getType()->getContainedType(0), returnValue);
        }
        this->returns = true;
        logger.addSpecificLog("Leaving Return");
        return Builder->CreateRet(returnValue);
    } else {
        this->returns = true;
        logger.addSpecificLog("Leaving Return");
        return Builder->CreateRetVoid();
    }
}