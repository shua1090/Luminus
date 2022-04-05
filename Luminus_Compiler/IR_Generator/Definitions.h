//
// Created by shynn on 4/1/2022.
//

#ifndef LUMINUS_DEFINITIONS_H
#define LUMINUS_DEFINITIONS_H

#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Type.h"
#include "llvm/IR/Value.h"

#define INT32_TYPE Type::getInt32Ty(*TheContext)
#define INT64_TYPE Type::getInt64Ty(*TheContext)
#define FLOAT_TYPE Type::getDoubleTy(*TheContext)

#define INT32_PTR_TYPE Type::getInt32PtrTy(*TheContext)
#define INT64_PTR_TYPE Type::getInt64PtrTy(*TheContext)
#define FLOAT_PTR_TYPE Type::getFloatPtrTy(*TheContext)

#define VOID_TYPE Type::getVoidTy(*TheContext)

#endif //LUMINUS_DEFINITIONS_H
