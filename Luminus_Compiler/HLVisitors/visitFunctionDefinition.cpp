#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitFunction_definition(LuminusParser::Function_definitionContext *context) {
    if (this->classPreparse){
        this->classFunctions.push_back(context);
        return nullptr;
    }
    return makeFunction(context);
}

antlrcpp::Any LuminusCompiler::makeFunction(LuminusParser::Function_definitionContext *context) {
    if (fm.getFunction(context->func_name->getText()) != nullptr) {
        std::cerr << "Error: Function " << context->func_name->getText() << " already defined" << std::endl;
        exit(1);
    }

    Type *returnType = getType(context->return_type->getText());

    if (returnType == nullptr) {
        std::cerr << "Error: Return type " << context->return_type->getText() << " not defined" << std::endl;
        exit(1);
    }

    std::vector<Type *> argTypes;
    std::vector<std::string> argNames;

    if (this->currentClass != nullptr) {
        argTypes.insert(argTypes.begin(), PointerType::get(this->currentClass->type, 0));
        argNames.insert(argNames.begin(), "this");
    }

    for (auto arg: context->args) {
        auto argType = getType(arg->dec_type->getText());
        if (argType == nullptr) {
            std::cerr << "Error: Argument type " << arg->dec_type->getText() << " not defined" << std::endl;
            exit(1);
        }
        if (argType->isStructTy()){
            argType = PointerType::get(argType, 0);
        }
        argTypes.push_back(argType);
        argNames.push_back(arg->id->getText());
    }
    FunctionType *funcType = FunctionType::get(returnType, argTypes, false);
    Function *func = Function::Create(funcType, Function::ExternalLinkage, context->func_name->getText(), *TheModule);

    BasicBlock *entry = BasicBlock::Create(*TheContext, "entry", func);
    Builder->SetInsertPoint(entry);

    auto arg_names_builtin = func->arg_begin();
    int i = 0;
    if (this->currentClass != nullptr) {
        i = 1;
    }
    for (; i < argNames.size(); i++) {
        if (argTypes[i]->isPointerTy() && argTypes[i]->getPointerElementType()->isStructTy()) {
            arg_names_builtin->setName(argNames[i]);
            vm.addVariable(argNames[i], func->getArg(i));
        } else {
            arg_names_builtin->setName(argNames[i]);
            vm.addVariable(argNames[i], Builder->CreateAlloca(argTypes[i]));
        }
        arg_names_builtin++;
    }

    visit(context->vals);
    if (this->currentClass != nullptr) {
        this->currentClass->functions.push_back(func);
    }
    return nullptr;
}
