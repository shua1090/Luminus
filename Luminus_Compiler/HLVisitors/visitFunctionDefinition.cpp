#include "../LuminusCompiler.h"

antlrcpp::Any LuminusCompiler::visitFunction_definition(LuminusParser::Function_definitionContext *context) {

    if (fm.getFunction(context->func_name->getText()) != nullptr) {
        std::cerr << "Error: Function " << context->func_name->getText() << " already defined" << std::endl;
        exit(1);
    }

    Type *returnType = getType(context->return_type->getText());

    if (returnType == nullptr) {
        std::cerr << "Error: Return type " << context->return_type->getText() << " not defined" << std::endl;
        exit(1);
    }

    std::vector<llvm::Type *> argTypes;
    std::vector<std::string> argNames;

    for (auto arg: context->args) {
        auto argType = LuminusCompiler::getType(arg->dec_type->getText());
        if (argType == nullptr) {
            std::cerr << "Error: Argument type " << arg->dec_type->getText() << " not defined" << std::endl;
            exit(1);
        }
        argTypes.push_back(argType);
        argNames.push_back(arg->id->getText());
    }
    FunctionType *funcType = FunctionType::get(returnType, argTypes, false);
    Function *func = Function::Create(funcType, Function::ExternalLinkage, context->func_name->getText(), *TheModule);

    BasicBlock *entry = BasicBlock::Create(*TheContext, "entry", func);
    Builder->SetInsertPoint(entry);

    auto arg_names_builtin = func->arg_begin();
    for (unsigned i = 0; i < argNames.size(); i++) {
        arg_names_builtin->setName(argNames[i]);
        vm.addVariable(argNames[i], Builder->CreateAlloca(argTypes[i]));
        arg_names_builtin++;
    }

    this->visit(context->vals);
    return nullptr;
}