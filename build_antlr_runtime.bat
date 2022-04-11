mkdir cmake
cd cmake
git clone --config core.autocrlf=false https://github.com/antlr/antlr4.git
cd antlr4
git checkout 7b32c9b
git filter-branch --prune-empty --subdirectory-filter ./runtime/Cpp/cmake/ HEAD
move * ../
cd .. 