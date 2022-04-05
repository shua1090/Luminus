//
// Created by shynn on 4/1/2022.
//

#include "../LuminusCompiler.h"
#include "llvm/IR/Verifier.h"

Function *LuminusCompiler::specialMainDeclaration(LuminusParser::FunctionDeclarationContext *context) {

    std::vector<llvm::Type *> param_types(2);
    std::vector<std::string> param_labels(2);
    param_types[0] = INT32_TYPE;
    param_types[1] = PointerType::get(Type::getInt8PtrTy(*TheContext), 0);

    llvm::FunctionType *typeOfFunc = llvm::FunctionType::get(
            INT32_TYPE, param_types, false
    );


    if (!TheModule->getFunction("main")) {
        llvm::Function *theFunction = llvm::Function::Create(
                typeOfFunc, Function::ExternalLinkage, "main", *TheModule
        );

        llvm::Function::arg_iterator forNameSetup = theFunction->arg_begin();
        forNameSetup->setName("argc");
        svm.addVariable("argc", &*forNameSetup);
        forNameSetup++;
        forNameSetup->setName("argv");
        svm.addVariable("argv", &*forNameSetup);

        llvm::BasicBlock *body = llvm::BasicBlock::Create(*TheContext, "entry", theFunction);
        Builder->SetInsertPoint(body);
        this->visitChildren(context);

        std::string s = "";
        llvm::raw_string_ostream rs(s);
        bool f = verifyFunction(*theFunction, &rs);
        std::cout << "Main Errors: " << f << " errors: " << rs.str() << std::endl;

    }
    svm.removeScope();
    return nullptr;
}

antlrcpp::Any LuminusCompiler::visitFunctionDeclaration(LuminusParser::FunctionDeclarationContext *context) {
    svm.addScope();
    std::vector<LuminusParser::ArgumentContext *> args = context->args;

    // Gathered Info about Function from tokens
    std::string function_name = context->funcName->getText();
    llvm::Type *returnType = textToType(context->returnType->getText());
    if (function_name == "main") {
        return specialMainDeclaration(context);
    }
    if (context->returnType->getText() == "void") returnType = VOID_TYPE;
    std::vector<llvm::Type *> param_types(args.size());
    std::vector<std::string> param_labels(args.size());

    // Setup Params
    for (int i = 0; i < args.size(); i++) {
        param_types[i] = textToPtrType(args[i]->dec_type->getText());
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
        svm.addVariable(param_labels[i], &*forNameSetup);
        forNameSetup++;
    }
    llvm::BasicBlock *body = llvm::BasicBlock::Create(*TheContext, "entry", theFunction);
    Builder->SetInsertPoint(body);
    this->visitChildren(context);

    svm.removeScope();
    std::string s = "";
    llvm::raw_string_ostream rs(s);
    bool f = verifyFunction(*theFunction, &rs);
    std::cout << "f: " << f << " errors: " << rs.str() << std::endl;

    return nullptr;
}