#include "LumVisitor.h"

antlrcpp::Any LuminusGenerator::visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) {
    if (!this->currentFunctionName.empty()) {
        logger.addError(fillError(new NestedFunctionError, context,
                                  "Function " + context->funcName->getText() + " is nested, which isn't allowed"));
    } else {
        std::string thisFuncName = context->funcName->getText();
        Types thisReturnType = textToType(context->returnType->getText());

        std::vector<Types> argTypes;
        auto thisFuncArgVariables = std::unordered_map<std::string, Types>(); // Scoped Variable Checking
        for (int i = 0; i < context->args.size(); i++) {
            argTypes.push_back(textToType(context->args[i]->dec_type->getText()));
            thisFuncArgVariables[context->args[i]->id->getText()] = textToType(context->args[i]->dec_type->getText());
        }
        LumFunction currentFunction = {thisReturnType, argTypes};
        LumFunction possibleOtherFunction = checkFunction(thisFuncName);
        if (possibleOtherFunction.returnType != NONEXISTENT && currentFunction.sameArgs(possibleOtherFunction)) {
            logger.addError(fillError(
                    new FunctionAlreadyDefinedError, context, "Function " + thisFuncName + " already exists"
            ));
        }
        this->vec_of_funcs[thisFuncName] = currentFunction;
        this->names.push_back(thisFuncArgVariables);
        this->currentFunctionName = thisFuncName;
        this->visitChildren(context);
        if (!vec_of_funcs.at(thisFuncName).hasValidReturnVal && vec_of_funcs.at(thisFuncName).returnType != VOID)
            this->logger.addError(fillError(new InvalidReturnStatement,
                                            context,
                                            "Either there was no"
                                            " return statement found for this "
                                            "function, or there was an invalid one"));

        this->currentFunctionName = "";
        this->names.pop_back();
    }
    return NONEXISTENT;
}

antlrcpp::Any LuminusGenerator::visitFunctionCall(LuminusParser::FunctionCallContext *context) {
    LumFunction possiblyCalledFunction = this->checkFunction(context->funcid->getText());

    if (context->args.size() != possiblyCalledFunction.args.size()) {
        this->logger.addError(fillError(new WrongNumberOfArgumentsError,
                                        context,
                                        "Function accepts " + std::to_string(
                                                possiblyCalledFunction.args.size()
                                        ) + " arguments, but " + std::to_string(
                                                context->args.size()
                                        ) + " are provided"
        ));
    }
    for (int i = 0; i < context->args.size(); i++) {
        Types evalExpression = this->visit(context->args[i]).as<Types>();
        if (evalExpression != possiblyCalledFunction.args[i]) {
            this->logger.addError(fillError(new TypeMismatchError,
                                            context,
                                            "Called function with wrong type in argument"));
            return possiblyCalledFunction.returnType;
        }
    }

    return possiblyCalledFunction.returnType;
}

antlrcpp::Any LuminusGenerator::visitReturnStatement(LuminusParser::ReturnStatementContext *context) {
    if (context->value == nullptr) {
        Types supposedReturnStatement = checkFunction(this->currentFunctionName).returnType;
        if (supposedReturnStatement != VOID) {
            logger.addError(fillError(new TypeMismatchError,
                                      context,
                                      "Type of return value is void"
                                      " whereas it should not be"));
        } else {
            vec_of_funcs.at(currentFunctionName).hasValidReturnVal = true;
        }
        return VOID;
    }
    Types actualReturnStatement = this->visit(context->value).as<Types>();
    Types supposedReturnStatement = checkFunction(this->currentFunctionName).returnType;
    if (actualReturnStatement != supposedReturnStatement) {
        logger.addError(fillError(new TypeMismatchError,
                                  context,
                                  "Type of return value"
                                  " is not equal to declared return type"));
    } else {
        vec_of_funcs.at(currentFunctionName).hasValidReturnVal = true;
    }
    return supposedReturnStatement;
}