git clone --config core.autocrlf=false https://github.com/llvm/llvm-project.git --depth=1
cd llvm-project
mkdir build
cd build
cmake ../llvm -DLLVM_TARGETS_TO_BUILD="X86" -DLLVM_ENABLE_PROJECTS="" -DLLVM_OPTIMIZED_TABLEGEN=ON -DLLVM_BUILD_TOOLS=OFF -DLLVM_BUILD_UTILS=OFF -DLLVM_PARALLEL_LINK_JOBS=8 -G"Ninja"
# In Admin:
cmake --build . --config Debug --target install --parallel 8