CALL antlr4 Luminus.g4 -o src/Luminus_Generated/ -visitor -Dlanguage=Cpp
CALL antlr4 Luminus.g4 -o src/for_grun/
cd src/for_grun/
javac *.java
CALL grun Luminus start ../../test_grammars/main.lm -gui