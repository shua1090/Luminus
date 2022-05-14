//
// Created by shynn on 4/25/2022.
//

#include "../LuminusCompiler.h"
#include "antlr4-common.h"
antlrcpp::Any LuminusCompiler::visitDecl_stmt(LuminusParser::Decl_stmtContext *context) {
    if (this->currentClass != nullptr){
        Type * type = getType(context->type->getText());
        if (type->isStructTy()){
            type = PointerType::get(type, 0);
        }
        this->classTypes.push_back(
                type
                );
        this->currentClass->fields.push_back(context->id->getText());

        return nullptr;
    } else {
        Type * type = getType(context->type->getText());
        if (type == nullptr){
            std::cout << "Error: " << context->id->getText() << " is not a valid type" << std::endl;
            exit(1);
        }
        auto *vaste = Builder->CreateAlloca(type);

        std::string text="";
        text += context->type->getText();
        text += " ";
        text += context->id->getText();
        text += ";";
        vaste->addAnnotationMetadata(
                text
        );
        this->vm.addVariable(context->id->getText(), vaste);
        return vaste;
    }
}