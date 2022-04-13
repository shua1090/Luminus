//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"
#include "llvm/IR/Verifier.h"

antlrcpp::Any LuminusCompiler::visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) {
    logger.addLog(std::string("Visiting Function Declaration at ") + __FILE__ + " on " + std::to_string(__LINE__));
    svm.addScope();
    std::vector<LuminusParser::ArgumentContext *> args = context->args;

    std::string function_name = context->funcName->getText();
    llvm::Type *returnType;

    if (context->returnType->getText() == "void") returnType = VOID_TYPE;
    else returnType = textToType(context->returnType->getText());

    logger.addSpecificLog("Found return type of " + typeToString(returnType));

    std::vector<llvm::Type *> param_types(args.size());
    std::vector<std::string> param_labels(args.size());

    // Setup Params
    for (int i = 0; i < args.size(); i++) {
        param_types[i] = textToType(args[i]->dec_type->getText());
        if (!args[i]->count.empty()) {
            param_types[i] = ArrayType::get(param_types[i], std::stoi(args[i]->count[0]->getText()));
        }
        param_labels[i] = args[i]->id->getText();
        logger.addSpecificLog("Parameter " + std::to_string(i) + " has type " + typeToString(param_types[i]));
    }

    llvm::FunctionType *typeOfFunc = llvm::FunctionType::get(
            returnType, param_types, false
    );

//    if (!TheModule->getFunction(function_name))
    llvm::Function *theFunction = llvm::Function::Create(
            typeOfFunc, Function::ExternalLinkage, function_name, *TheModule
    );

    // Setup Arg Names and add to variable manager
    llvm::Function::arg_iterator forNameSetup = theFunction->arg_begin();
    for (int i = 0; i < theFunction->arg_size(); i++) {
        forNameSetup->setName(param_labels[i]);
        forNameSetup++;
    }
    llvm::BasicBlock *body = llvm::BasicBlock::Create(*TheContext, "entry", theFunction);
    Builder->SetInsertPoint(body);
    logger.addSpecificLog("Created function insertion point");

    for (int i = 0; i < param_labels.size(); i++) {
        svm.addVariable(param_labels[i],
                        Builder->CreateAlloca(param_types[i])
        );
        Builder->CreateStore(theFunction->getArg(i), svm.getVariable(param_labels[i]));
        logger.addSpecificLog("Created alloc/store for variable " + param_labels[i]);
    }

    this->curFunction = theFunction;

    logger.addSpecificLog("Visiting Function Children");
    this->visitChildren(context);

    svm.removeScope();
    std::string s = "";
    llvm::raw_string_ostream rs(s);
    bool f = verifyFunction(*theFunction, &rs);
    if (!rs.str().empty()) {
        logger.addLog("Function check: \n" + rs.str());
    }
    this->curFunction = nullptr;
    return nullptr;
}