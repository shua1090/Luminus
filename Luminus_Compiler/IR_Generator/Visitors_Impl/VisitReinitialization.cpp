# include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitReinitialization(LuminusParser::ReinitializationContext *context) {
    if (svm.getVariable(context->id->getText()) == nullptr) {
        // TODO: Throw Var not declared error;
    }
    return Builder->CreateStore(
            this->visit(context->value).as<Value *>(), svm.getVariable(context->id->getText())
    );
}

