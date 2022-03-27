#include <iostream>
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/IR/BasicBlock.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/Function.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Verifier.h"
#include <map>

using namespace llvm;


static std::unique_ptr<LLVMContext> TheContext;
static std::unique_ptr<Module> TheModule;
static std::unique_ptr<IRBuilder<>> Builder1;
static std::map<std::string, Value *> NamedValues;


int main(){
    TheContext = std::make_unique<LLVMContext>();
    TheModule = std::make_unique<Module>("my cool jit", *TheContext);

    // Create a new builder for the module.
    Builder1 = std::make_unique<IRBuilder<>>(*TheContext);

    Value * v = ConstantFP::get(*TheContext, APFloat(5.0));

    FunctionType *funcType = FunctionType::get(Builder1->getVoidTy(), false);
    Function *foofunc = Function::Create(funcType, llvm::Function::ExternalLinkage, "NiceFunc", *TheModule);

    llvm::BasicBlock* basicBlock = llvm::BasicBlock::Create(*TheContext, "entry", foofunc);
    std::unique_ptr<IRBuilder<>> Builder = std::make_unique<IRBuilder<>>(basicBlock);
    Builder->CreateFSub(v, v, "addtmp");
    Builder->CreateRet(nullptr);
    verifyFunction(*foofunc);

    TheModule->print( errs(), nullptr);

    
    return 0;
}