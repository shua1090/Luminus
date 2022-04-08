#include <iostream>
#include "LuminusBaseVisitor.h"
#include "LuminusLexer.h"
#include <map>

#include "antlr4-common.h"
#include "antlr4-runtime.h"
#include "IR_Generator/LuminusCompiler.h"
#include "llvm/Support/Host.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/TargetSelect.h"

#include "llvm/Bitcode/BitcodeWriter.h"

#include "IR_Generator/Compiler_Errors/CompileException.hpp"

using namespace antlr4;

int main() {
    CompilerErrorHandler ceh;
    ceh.addError(new BaseError{5, 12, "int i = 12;", "Base Error Test"});
    ceh.printErrors();
}