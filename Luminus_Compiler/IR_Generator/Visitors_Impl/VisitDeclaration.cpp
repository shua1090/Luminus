//
// Created by shynn on 4/4/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitDeclaration(LuminusParser::DeclarationContext *context) {
    if (this->svm.getVariable(context->id->getText()) != nullptr) {
        // TODO: Throw exception (Variable already Declared)
    }

    this->svm.addVariable(context->id->getText(),
                          Builder->CreateAlloca(textToType(context->dec_type->getText())
                          ));
    return this->svm.getVariable(context->id->getText());
}
