//
// Created by shynn on 4/11/2022.
//

#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitStruct_declaration(LuminusParser::Struct_declarationContext *context) {
    logger.addLog(std::string("Visiting Struct Declaration at ") + __FILE__ + " on " + std::to_string(__LINE__));
    std::string typeName = context->struct_name->getText();
    std::vector<std::string> args;
    std::vector<Type *> typesOfStruct;
    for (int i = 0; i < context->struct_vals.size(); i++) {
        args.push_back(context->struct_vals[i]->id->getText());
        Type *tip = textToType(context->struct_vals[i]->dec_type->getText());
        if (!context->struct_vals[i]->count.empty()) {
            logger.addSpecificLog("Including array type for element w/ index " + std::to_string(i) + " in structure");
            tip = ArrayType::get(tip, std::stoi(context->struct_vals[i]->count[0]->getText()));
        }
        logger.addSpecificLog("Creating internal type for Structure w/ index " + std::to_string(i) + " and type " +
                              typeToString(tip));
        typesOfStruct.push_back(tip);
    }

    auto givenStructType = StructType::create(*TheContext, typesOfStruct, typeName);
    this->sdm.addStruct(typeName, new Structure{givenStructType, args});
    logger.addSpecificLog("Left Structure Declaration");
    return givenStructType;
}