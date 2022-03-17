git clone --config core.autocrlf=false https://github.com/llvm/llvm-project.git --depth=1
cd llvm-project
mkdir build
cd build
cmake ../llvm
cmake --build .