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

using namespace antlr4;

int main() {
    std::ifstream stream;
    stream.open("D:/Luminus/test_grammars/main.lm");

    antlr4::ANTLRInputStream input(stream);
    LuminusLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    LuminusParser parser(&tokens);
    auto tree = parser.start();
    LuminusCompiler visitor;
    auto scene = visitor.visitStart(tree);
    visitor.dump();

    InitializeAllTargetInfos();
    InitializeAllTargets();
    InitializeAllTargetMCs();
    InitializeAllAsmParsers();
    InitializeAllAsmPrinters();

//    auto TargetTriple = llvm::sys::getDefaultTargetTriple();
//    std::cout << "Target: " << TargetTriple << std::endl;
//    std::string Error;
//    auto Target = llvm::TargetRegistry::lookupTarget(TargetTriple, Error);
//
//    if (!Target) {
//        errs() << Error;
//        return 1;
//    }
//
//    auto CPU = "generic";
//    auto Features = "";
//
//    llvm::TargetOptions opt;
//    auto RM = Optional<Reloc::Model>();
//    TargetMachine *tm = Target->createTargetMachine(TargetTriple, CPU, Features, opt, RM);
//    visitor.TheModule->setDataLayout(tm->createDataLayout());
//    visitor.TheModule->setTargetTriple(TargetTriple);
//
//
//    auto Filename = "output.o";
//    std::error_code EC;
//    raw_fd_ostream dest(Filename, EC, sys::fs::OF_None);
//
//    if (EC) {
//        errs() << "Could not open file: " << EC.message();
//        return 1;
//    }
//
//    legacy::PassManager pass;
//    auto FileType = CGFT_ObjectFile;
//
//    if (tm->addPassesToEmitFile(pass, dest, nullptr, FileType)) {
//        errs() << "TargetMachine can't emit a file of this type";
//        return 1;
//    }
//
//    pass.run(*visitor.TheModule);
//    dest.flush();
    std::error_code ec;
    raw_fd_ostream b("compiled_lang.bc", ec);
    llvm::WriteBitcodeToFile(*visitor.TheModule, b, sys::fs::OF_None);

    return 0;
}