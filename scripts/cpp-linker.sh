cp $(pwd)/libraries/libmiti.a package
g++ -L $(pwd)/libraries $(pwd)/libraries/libmiti.a sources/main.cpp -o package/result
cd package
./result