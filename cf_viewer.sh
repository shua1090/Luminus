cd build
opt -dot-cfg compiled_lang.bc -disable-output
cat .max.dot | clip.exe
rm .max.dot