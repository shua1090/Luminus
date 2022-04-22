#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitInitialization(LuminusParser::InitializationContext *context) {
    logger.addLog("Visiting Initialization Statement (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    Type *lhs = this->textToType(context->dec_type->getText());
    Value *rhs = this->visit(context->value).as<Value *>();

    logger.addSpecificLog("LHS of Initialization Statement has type " + typeToString(lhs));
    logger.addSpecificLog("RHS of Initialization Statement has type " + typeToString(rhs->getType()));

    if (rhs->getType()->isPointerTy()) {
        logger.addSpecificLog("RHS is pointer, loading");
        rhs = Builder->CreateLoad(rhs->getType()->getContainedType(0), rhs);
    }

    if (lhs != rhs->getType()) {
        logger.addLog("Left hand type and Right hand Type are not the same!");
        ceh->addError(new TypeMismatchError, context,
                      "LHS ('" + context->dec_type->getText() + "') Declared Type of '" +
                      LuminusCompiler::typeToString(lhs) +
                      "' != RHS ('" + context->value->getText() + "') Type of '" +
                      LuminusCompiler::typeToString(rhs->getType()) + "'"
        );
        throw std::runtime_error("Compilation Exception!");
        return nullptr;
    } else {
        auto ptr = Builder->CreateAlloca(lhs);

        Value *temp = Builder->CreateStore(rhs, ptr);
        this->svm.addVariable(context->id->getText(), ptr);
        logger.addSpecificLog("Created Store, added to table");
        logger.addSpecificLog("Leaving Initialization");
        return temp;
    }
}