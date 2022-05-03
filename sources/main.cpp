#include <iostream>

extern "C" {
    float*      MitiParse(const char* data, int* size);
    void        MitiFindDType(const char* data);
    const char* GLSLImport(const char* glslSource);
    void        Pointer(int* t);
}

int main() {

    std::cout << GLSLImport("#version 330 core\n"
                            "#INCLUDE \"hello.glsl\"\n"
                            "#INCLUDE \"test1.glsl\"") << '\n';


    int t;
    Pointer(&t);
    std::cout << t << '\n';
}