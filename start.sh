cmake . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
./build/test-exe/test-exe
