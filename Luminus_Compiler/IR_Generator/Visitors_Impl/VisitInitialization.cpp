#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitInitialization(LuminusParser::InitializationContext *context) {
    Type *lhs = this->textToType(context->dec_type->getText());
    Value *rhs = this->visit(context->value).as<Value *>();

    if (rhs->getType()->isPointerTy()) {
        rhs = Builder->CreateLoad(rhs->getType()->getContainedType(0), rhs);
    }

    if (lhs != rhs->getType()) {
        std::cout << "Adding error" << std::endl;
        ceh->addError(new TypeMismatchError, context,
                      "LHS ('" + context->dec_type->getText() + "') Declared Type of '" +
                      LuminusCompiler::typeToString(lhs) +
                      "' != RHS ('" + context->value->getText() + "') Type of '" +
                      LuminusCompiler::typeToString(rhs->getType()) + "'"
        );
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