#include <iostream>

extern "C" {
    float* MitiParse(const char* data, int* size);
    void MitiFindDType(const char* data);
}

int main() {

    const char* tempData = "[DTYPE: 4]: [0, 0, 0] 0.5043478260869565; [0, 1, 0] 0.508695652173913; [0, 2, 0] 0.5130434782608696; [0, 3, 0] 0.5173913043478261; [0, 4, 0] 0.5652173913043478; [0, 5, 0] 1.0; [0, 6, 0] 0.0;";

    int size;

    MitiFindDType(tempData);
    float a = MitiParse(tempData, &size)[7];
    std::cout << size << std::endl;
}