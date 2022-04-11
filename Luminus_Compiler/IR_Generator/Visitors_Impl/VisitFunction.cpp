//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"
#include "llvm/IR/Verifier.h"

antlrcpp::Any LuminusCompiler::visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) {
    svm.addScope();
    std::vector<LuminusParser::ArgumentContext *> args = context->args;

    // Gathered Info about Function from tokens
    std::string function_name = context->funcName->getText();
    llvm::Type *returnType;

    if (context->returnType->getText() == "void") returnType = VOID_TYPE;
    else returnType = textToType(context->returnType->getText());

    std::vector<llvm::Type *> param_types(args.size());
    std::vector<std::string> param_labels(args.size());

    // Setup Params
    for (int i = 0; i < args.size(); i++) {
        param_types[i] = textToType(args[i]->dec_type->getText());
        param_labels[i] = args[i]->id->getText();
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

    for (int i = 0; i < param_labels.size(); i++) {
        svm.addVariable(param_labels[i],
                        Builder->CreateAlloca(param_types[i])
        );
        Builder->CreateStore(theFunction->getArg(i), svm.getVariable(param_labels[i]));
    }

    this->curFunction = theFunction;

    this->visitChildren(context);

    svm.removeScope();
    std::string s = "";
    llvm::raw_string_ostream rs(s);
    bool f = verifyFunction(*theFunction, &rs);
    std::cout << "f: " << f << " errors: " << rs.str() << std::endl;
    this->curFunction = nullptr;
    return nullptr;
}