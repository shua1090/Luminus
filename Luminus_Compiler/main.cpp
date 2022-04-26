#include <iostream>
#include "LuminusBaseVisitor.h"
#include "LuminusLexer.h"
#include <map>
#include <streambuf>
#include "antlr4-common.h"
#include "antlr4-runtime.h"
#include "llvm/Support/Host.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/IRReader/IRReader.h"
#include "llvm/IR/Metadata.h"

#include "llvm/Bitcode/BitcodeWriter.h"
#include "LuminusCompiler.h"

using namespace antlr4;

int main() {
    std::ifstream stream;
    stream.open("../test_grammars/main.lm");
    antlr4::ANTLRInputStream input(stream);
    LuminusLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LuminusParser parser(&tokens);
    auto tree = parser.start();
    LuminusCompiler visitor;
    auto result = visitor.visit(tree);
    visitor.dump("main.ll");

    return 0;
}