git clone --config core.autocrlf=false https://github.com/llvm/llvm-project.git --depth=1
cd llvm-project
mkdir build
cd build
cmake ../llvm -DLLVM_TARGETS_TO_BUILD="X86" -DCMAKE_BUILD_TYPE=Debug -DLLVM_USE_CRT_DEBUG=MDd
cmake --build . --config Debug --target install --parallel 16