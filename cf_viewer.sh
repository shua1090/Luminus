cd build
opt -dot-cfg compiled_lang.bc -disable-output
cat .main.dot | clip.exe
rm .main.dot
