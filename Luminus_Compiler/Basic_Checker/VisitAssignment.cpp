//
// Created by shynn on 3/28/2022.
//

#include "LumVisitor.h"


antlrcpp::Any LuminusGenerator::visitInitialization(LuminusParser::InitializationContext *context) {
    Types dec_type_t; // Declared Type
    dec_type_t = textToType(context->dec_type->getText());
    Types val_type_t = this->visit(context->value).as<Types>();

    if (val_type_t != dec_type_t) {
        logger.addError(fillError(new TypeMismatchError, context, "The Declared Variable Type "
                                                                  "is different than the initialized one"));
    }

    Types existingVarType = this->checkForVariable(context->id->getText());
    if (existingVarType != NONEXISTENT) {
        logger.addError(fillError(new VariableAlreadyDeclared, context, "This Variable has "
                                                                        "already been declared earlier"));
    } else {
        this->names[this->names.size()-1][context->id->getText()] = val_type_t;
    }

    return dec_type_t;
}

antlrcpp::Any LuminusGenerator::visitDeclaration(LuminusParser::DeclarationContext *context) {
    Types dec_type_t = textToType(context->dec_type->getText());
    Types existingVarType = this->checkForVariable(context->id->getText());
    if (existingVarType != NONEXISTENT) {
        logger.addError(
                fillError(new VariableAlreadyDeclared, context, "This Variable has already been declared earlier"));
    } else {
        this->names[this->names.size() - 1][context->id->getText()] = dec_type_t;
    }
    return dec_type_t;
}

antlrcpp::Any LuminusGenerator::visitReinitialization(LuminusParser::ReinitializationContext *context) {
    Types rhs_type_t = this->visit(context->value).as<Types>();

    Types existingVarType = this->checkForVariable(context->id->getText());
    if (existingVarType == NONEXISTENT) {
        logger.addError(fillError(new NonexistentVariable, context, "Variable \"" + context->id->getText() +
                                                                    "\" has never been declared"));
    } else {
        std::cout << "Existing Var Type: " << existingVarType << std::endl;
        if (rhs_type_t != existingVarType && rhs_type_t != NONEXISTENT) {
            logger.addError(fillError(new TypeMismatchError, context, "The Declared Variable Type "
                                                                      "is different than the initialized one"));
        }
        else this->names[this->names.size()-1][context->id->getText()] = rhs_type_t;
    }
    return rhs_type_t;
}

