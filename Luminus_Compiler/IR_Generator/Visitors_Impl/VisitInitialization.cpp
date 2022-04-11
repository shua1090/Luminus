#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitInitialization(LuminusParser::InitializationContext *context) {
    Value *rhs = this->visit(context->value).as<Value *>();
    Type *lhs = this->textToType(context->dec_type->getText());

    if (lhs != rhs->getType()) {
        std::cout << "Adding error" << std::endl;
        ceh->addError(new TypeMismatchError, context, "LHS Type doesn't match RHS type!");
        throw std::exception("Compilation Exception!");
        return nullptr;
    } else {
        auto a = rhs;

        auto ptr = Builder->CreateAlloca(lhs);

        Value *temp = Builder->CreateStore(rhs, ptr);
        this->svm.addVariable(context->id->getText(), ptr);
        return temp;
    }
}