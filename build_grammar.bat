CALL antlr4 LuxLang.g4 -o src/antlr_generated/ -visitor -Dlanguage=Cpp
CALL antlr4 LuxLang.g4 -o src/for_grun/
cd src/for_grun/
javac *.java
CALL grun LuxLang start ../../test_grammars/main.lm -gui