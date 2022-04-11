cd build
opt -dot-cfg compiled_lang.bc -disable-output
cat .isPrime.dot | clip.exe
rm .isPrime.dot
