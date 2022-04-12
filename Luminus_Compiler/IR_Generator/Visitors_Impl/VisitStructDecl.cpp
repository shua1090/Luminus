//
// Created by shynn on 4/11/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitStruct_declaration(LuminusParser::Struct_declarationContext *context) {
    std::string typeName = context->struct_name->getText();
    std::vector<std::string> args;
    std::vector<Type *> typesOfStruct;
    for (int i = 0; i < context->struct_vals.size(); i++) {
        args.push_back(context->struct_vals[i]->id->getText());
        typesOfStruct.push_back(textToType(context->struct_vals[i]->dec_type->getText()));
    }

    std::cout << typesOfStruct.size() << std::endl;

    std::cout << "TypeName: " << typeName << std::endl;
    auto givenStructType = StructType::create(*TheContext, typesOfStruct, typeName);
    this->sdm.addStruct(typeName, new Structure{givenStructType, args});

    std::cout << "Built Struct" << std::endl;
    return givenStructType;
}