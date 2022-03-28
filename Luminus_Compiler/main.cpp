#include <iostream>
#include "LuminusBaseVisitor.h"
#include "LuminusLexer.h"
#include <map>

#include "antlr4-common.h"
#include "antlr4-runtime.h"
#include "LumVisitor.h"

using namespace antlr4;

int main(){
    std::ifstream stream;
    stream.open("../test_grammars/main.lm");

    antlr4::ANTLRInputStream input(stream);
    LuminusLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LuminusParser parser(&tokens);
    auto tree = parser.start();
    LumVisitor visitor;
    auto scene = visitor.visitStart(tree);
    visitor.logger.printErrors();
    return 0;
}