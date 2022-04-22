#include <iostream>
#include "LuminusBaseVisitor.h"
#include "LuminusLexer.h"
#include <map>
#include <streambuf>
#include "antlr4-common.h"
#include "antlr4-runtime.h"
#include "IR_Generator/LuminusCompiler.h"
#include "llvm/Support/Host.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/IRReader/IRReader.h"
#include "llvm/IR/Metadata.h"

#include "llvm/Bitcode/BitcodeWriter.h"

using namespace antlr4;

int main() {
    std::string filename = "D:/Luminus/test_grammars/main.lm";

    std::string prefix = "D:/Luminus/test_grammars/";

    std::string inpName;
    std::cin >> inpName;
    while (inpName != "exit") {
        std::ifstream stream;
        std::cout << "Given File: " << prefix + inpName << std::endl;
        stream.open(prefix + inpName);

        antlr4::ANTLRInputStream input(stream);
        LuminusLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        LuminusParser parser(&tokens);
        auto tree = parser.start();
        LuminusCompiler visitor(filename);
        try {
            visitor.logger.v = CompilerLogger::QUIET;
            auto scene = visitor.visitStart(tree);
            if (visitor.logger.v == CompilerLogger::VERBOSE) {
                visitor.TheModule->dump();
            }
        } catch (std::runtime_error &r) {
            std::cout << r.what() << std::endl;
            std::cout << "Some kind of exception occurred!" << std::endl;
            visitor.ceh->printErrors();
            return -1;
        }

//        auto a = MDNode::get(*visitor.TheContext, MDString::get(*visitor.TheContext, "required"));
//        std::vector < Metadata* > elts = {a, ConstantAsMetadata::get(ConstantInt::get(IntegerType::getInt32Ty(*visitor.TheContext), APInt(32, 1)))};
//        visitor.TheModule->addModuleFlag(llvm::Module::Require, "nice", MDNode::get(*visitor.TheContext, elts));
        visitor.dumpToFile(inpName.substr(0, inpName.find_last_of('.')) + ".ll");
        std::cout << "Dumped to file" << std::endl;

        inpName = "";
        std::cin >> inpName;
    }


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
//    std::error_code ec;
//    raw_fd_ostream b("compiled_lang.bc", ec);
//    llvm::WriteBitcodeToFile(*visitor.TheModule, b, sys::fs::OF_None);
    return 0;
}