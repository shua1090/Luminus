//
// Created by shynn on 3/29/2022.
//

#ifndef LUMINUS_IR_TEST_H
#define LUMINUS_IR_TEST_H

#include <memory>
#include <iostream>

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Value.h"

#define INT_TYPE Type::getInt32Ty(*TheContext)

using namespace llvm;

class TestGen {
public:
    std::unique_ptr<LLVMContext> TheContext;
    std::unique_ptr<Module> TheModule;
    std::unique_ptr<IRBuilder<>> Builder;

    llvm::Module *OurModule;

    TestGen() {
        TheContext = std::make_unique<LLVMContext>();
        TheModule = std::make_unique<Module>("my cool jit", *TheContext);

        // Create a new builder for the module.
        Builder = std::make_unique<IRBuilder<>>(*TheContext);
    }

    void sencMake() {
        llvm::LLVMContext &Context = *TheContext;
        llvm::IRBuilder<> Builder(Context);

        OurModule = new llvm::Module("Our first intermediary code", Context);

        /***** Main: a function that gets no parameters and returns an integer *****/
        /* http://llvm.org/docs/doxygen/html/classllvm_1_1FunctionType.html
         * static FunctionType * get (Type *Result, bool isVarArg)
         * FunctionType::get - Create a FunctionType taking no parameters. */
        llvm::Type *intType = llvm::Type::getInt64Ty(Context);
        llvm::FunctionType *typeOfMain = llvm::FunctionType::get(intType, false);

        /* http://llvm.org/docs/doxygen/html/classllvm_1_1Function.html
         * static Function * Create (FunctionType *Ty, LinkageTypes Linkage, const Twine &N="", Module *M=nullptr) */
        llvm::Function *ourMain = llvm::Function::Create(typeOfMain, llvm::Function::ExternalLinkage, "main",
                                                         OurModule);

        /* http://llvm.org/docs/doxygen/html/classllvm_1_1BasicBlock.html
         * static BasicBlock * Create (LLVMContext &Context, const Twine &Name="", Function *Parent=nullptr, BasicBlock *InsertBefore=nullptr)
         * Creates a new BasicBlock.
         */
        llvm::BasicBlock *mainBB = llvm::BasicBlock::Create(Context, "entry", ourMain);

        /* http://llvm.org/docs/doxygen/html/classllvm_1_1IRBuilderBase.html
         * void SetInsertPoint (BasicBlock *TheBB)
         * This specifies that created instructions should be appended to the end of the specified block.
         */
        Builder.SetInsertPoint(mainBB);

        /*** Constants are all unified ***/
        /* http://llvm.org/docs/doxygen/html/classllvm_1_1ConstantInt.html
         * static ConstantInt *	get (LLVMContext &Context, const APInt &V)
         * Return a ConstantInt with the specified value and an implied Type.
         * APInt = Arbitrary Precision Integer */
        llvm::ConstantInt *Ten = llvm::ConstantInt::get(Context, llvm::APInt(64, 10));
        auto One = llvm::ConstantInt::get(Context, llvm::APInt(64, 1));
        auto Zero = llvm::ConstantInt::get(Context, llvm::APInt(64, 0));

        /* static ConstantInt *	get (IntegerType *Ty, uint64_t V, bool isSigned=false)
         * Return a ConstantInt with the specified integer value for the specified type. */
        llvm::Constant *NegativeOne = llvm::ConstantInt::get(intType, -1, true);

        /*** Lets work with another function named average!! ***/
        /* Average takes two integers as input and returns one */
        std::vector<llvm::Type *> AverageParameters(2, intType);
        llvm::FunctionType *typeOfAverage = llvm::FunctionType::get(intType, AverageParameters, false);

        /* We name it 'average' */
        llvm::Function *ourAverage = llvm::Function::Create(typeOfAverage, llvm::Function::ExternalLinkage, "average",
                                                            OurModule);

        /* Now we name its parameters 'a' and 'b' */
        llvm::Function::arg_iterator params = ourAverage->arg_begin();
        params->setName("a");
        ++params;
        params->setName("b");

        /* Our function will have its own basic block to add code */
        llvm::BasicBlock *averageBB = llvm::BasicBlock::Create(Context, "avg", ourAverage);
        Builder.SetInsertPoint(averageBB);

        /* Now for the code: return (a >> 1) + (b >> 1) + (a && b && 1) */
        auto args = ourAverage->arg_begin();
        auto a = &*args; //Get a Value* (with &) from the iterator (with *)
        ++args;          //Goes to the next argument
        auto b = &*args;
        auto ashift = Builder.CreateAShr(a, One, "ashift");
        auto bshift = Builder.CreateAShr(b, One, "bshift");
        auto tmp = Builder.CreateAnd(a, b, "andtmp");
        tmp = Builder.CreateAnd(tmp, One, "andtmp");
        tmp = Builder.CreateAdd(bshift, tmp, "sumtmp");
        tmp = Builder.CreateAdd(ashift, tmp, "sumtmp");
        Builder.CreateRet(tmp);


        /*** Now we return to our main to call the average function ***/
        Builder.SetInsertPoint(mainBB);

        /* Lets call average with 41 and 21 */
        std::vector<llvm::Value *> arguments;
        arguments.push_back(llvm::ConstantInt::get(Context, llvm::APInt(64, 41)));
        arguments.push_back(llvm::ConstantInt::get(Context, llvm::APInt(64, 21)));
        auto avgReturn = Builder.CreateCall(ourAverage, arguments, "callavg");

        /* And we return the average at the end*/
        Builder.CreateRet(avgReturn);


        /*** Lets print the intermediary representation generated ***/
        OurModule->dump();
    }

    void makeFunc() {
        auto intType = INT_TYPE;
        std::vector<llvm::Type *> AverageParameters(2, Type::getInt32Ty(*TheContext));

        llvm::FunctionType *typeOfAvg = llvm::FunctionType::get(Type::getInt32Ty(*TheContext), AverageParameters,
                                                                false);
        llvm::Function *function = llvm::Function::Create(typeOfAvg, Function::ExternalLinkage, "average", *TheModule);
        if (function) {
            /* Creates a new BasicBlock as the body of the function. */
            // Instruct the builder to generate the instruction in the body
            llvm::Function::arg_iterator params = function->arg_begin();
            params->setName("a");
            ++params;
            params->setName("b");

            llvm::BasicBlock *body =
                    llvm::BasicBlock::Create(*TheContext, "entry", function);
            Builder->SetInsertPoint(body);
            /* Emit the subroutine body, non-terminating instructions */
            ConstantInt *const_int32 = ConstantInt::get(*TheContext, APInt(32, StringRef("10"), 10));

            auto args = function->begin();
            auto a = &*params;
            args++;
            auto b = &*params;

            Value *v = Builder->CreateAdd(a, b, "tmpadd");
            Value *c = Builder->CreateAdd(v, b, "tmpadd");
            auto pt = Builder->CreateAlloca(intType, c, "nice");
            Builder->CreateStore(v, pt);
            Builder->CreateStore(
                    Builder->CreateAdd(Builder->CreateLoad(intType, pt), Builder->CreateLoad(intType, pt), "addtemp"),
                    pt);

            /* Insert the block terminator */
//            llvm::Value *ret =Builder->CreateFAdd(ConstantFP::get(*TheContext, APFloat(6.5)), ConstantFP::get(*TheContext, APFloat(6.5)));
            //llvm:: ConstantInt::get(*TheContext, llvm::APInt(32, 0, true));
            Builder->CreateRet(c);
        } else {
            std::cout << "func" << " not found!" << std::endl;
        }

    }
};


#endif //LUMINUS_IR_TEST_H
