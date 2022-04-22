mkdir cmake
cd cmake
git clone --config core.autocrlf=false https://github.com/antlr/antlr4.git --depth=1
cd antlr4
git filter-branch --prune-empty --subdirectory-filter ./runtime/Cpp/cmake/ HEAD
move * ../
cd .. 