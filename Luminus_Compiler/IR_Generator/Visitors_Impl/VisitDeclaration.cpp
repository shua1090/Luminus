//
// Created by shynn on 4/4/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitDeclaration(LuminusParser::DeclarationContext *context) {
    logger.addLog("Visiting Declaration Statement (" + context->getText() + ") at " + __FILE__ + " on " +
                  std::to_string(__LINE__));
    if (this->svm.getVariable(context->id->getText()) != nullptr) {
        // TODO: Throw exception (Variable already Declared)
        logger.addLog("Variable has already been declared!");
    }

    Value *tip;
    if (!context->count.empty()) {
        Type *at;
        at = textToType(
                context->dec_type->getText());
        for (int i = 0; i < context->count.size(); i++) {
            logger.addSpecificLog("Array Type found (" + std::to_string(i) + ")");
            at = ArrayType::get(
                    at,
                    std::stoi(context->count[0]->getText()
                    )
            );
        }
        logger.addLog("Allocating array");
        tip = Builder->CreateAlloca(at);
    } else {
        logger.addLog("Allocating Variable");
        tip = Builder->CreateAlloca(textToType(context->dec_type->getText()));
    }

    logger.addSpecificLog("Adding Variable to scoped variable manager");
    this->svm.addVariable(context->id->getText(),
                          tip
    );
    logger.addSpecificLog("Leaving Variable Declaration");
    return this->svm.getVariable(context->id->getText());
}
