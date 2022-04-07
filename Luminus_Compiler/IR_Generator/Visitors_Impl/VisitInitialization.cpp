#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitInitialization(LuminusParser::InitializationContext *context) {
    Value *rhs = this->visit(context->value).as<Value *>();
    Type *lhs = this->textToType(context->dec_type->getText());

    if (lhs != rhs->getType()) {
        lhs->dump();
        rhs->getType()->dump();
        std::cout << "ERROR INITIALIZING" << std::endl;
        //TODO: THROW ERROR LHS != RHS
        return nullptr;
    } else if (lhs->isPointerTy()) {
        std::cout << "idk" << std::endl;
        this->svm.addVariable(context->id->getText(), rhs);
        return rhs;
    } else {
        std::cout << "Here" << std::endl;
        Value *temp = Builder->CreateAlloca(lhs, rhs, context->id->getText());
        this->svm.addVariable(context->id->getText(), temp);
        return temp;
    }
}