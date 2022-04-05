#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitInitialization(LuminusParser::InitializationContext *context) {
    Value *rhs = this->visit(context->value).as<Value *>();
    Type *lhs = this->textToType(context->id->getText());
    if (lhs != rhs->getType()) {
        //TODO: THROW ERROR LHS != RHS
        return nullptr;
    } else {
        Value *temp = Builder->CreateAlloca(lhs, rhs, context->id->getText());
        this->svm.addVariable(context->id->getText(), temp);
        return temp;
    }
}