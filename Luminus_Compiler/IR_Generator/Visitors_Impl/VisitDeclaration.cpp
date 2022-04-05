//
// Created by shynn on 4/4/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitDeclaration(LuminusParser::DeclarationContext *context) {
    this->svm.addVariable(context->id->getText(),
                          Builder->CreateAlloca(textToPtrType(context->dec_type->getText())
                          ));
    return this->svm.getVariable(context->id->getText());
}
