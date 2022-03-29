#include "LumVisitor.h"

antlrcpp::Any LumVisitor::visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) {
    if (!this->currentFunctionName.empty()){
        logger.addBaseError(fillError(new NestedFunctionError, context,
        "Function " + context->funcName->getText() + " is nested, which isn't allowed"));
    } else {
        std::string thisFuncName = context->funcName->getText();
        Types thisReturnType = textToType(context->returnType->getText());

        std::vector<Types> argTypes;
        auto thisFuncArgVariables = std::unordered_map<std::string, Types>(); // Scoped Variable Checking
        for (int i = 0; i < context->args.size(); i++ ){
            argTypes.push_back(textToType(context->args[i]->dec_type->getText()));
            thisFuncArgVariables[context->args[i]->id->getText()]= textToType(context->args[i]->dec_type->getText());
        }
        LumFunction currentFunction = {thisReturnType, argTypes};
        LumFunction possibleOtherFunction = checkFunction(thisFuncName);
        if (possibleOtherFunction.returnType != NONEXISTENT && currentFunction.sameArgs(possibleOtherFunction)) {
            logger.addBaseError(fillError(
                    new FunctionAlreadyDefinedError, context, "Function " + thisFuncName + " already exists"
                    ));
        }
        this->funcs[thisFuncName] = currentFunction;
        this->names.push_back(thisFuncArgVariables);
        this->currentFunctionName = thisFuncName;
        this->visitChildren(context);
        this->currentFunctionName = "";
        this->names.pop_back();
    }
    return NONEXISTENT;
}

antlrcpp::Any LumVisitor::visitFunctionCall(LuminusParser::FunctionCallContext *context) {
    return antlrcpp::Any();
}