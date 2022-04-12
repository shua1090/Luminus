//
// Created by shynn on 4/4/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitDeclaration(LuminusParser::DeclarationContext *context) {
    if (this->svm.getVariable(context->id->getText()) != nullptr) {
        // TODO: Throw exception (Variable already Declared)
    }


    Value *tip;
    if (!context->count.empty()) {
        Type *at;
        at = textToType(
                context->dec_type->getText());
        for (int i = 0; i < context->count.size(); i++) {
            at = ArrayType::get(
                    at,
                    std::stoi(context->count[0]->getText()
                    )
            );
        }
        tip = Builder->CreateAlloca(at);
    } else {
        tip = Builder->CreateAlloca(textToType(context->dec_type->getText()));
    }

    this->svm.addVariable(context->id->getText(),
                          tip
    );

    std::cout << "Type: " << typeToString(tip->getType()) << std::endl;

    return this->svm.getVariable(context->id->getText());
}
