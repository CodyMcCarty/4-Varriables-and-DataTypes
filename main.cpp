#include <iostream>

int main(){
    int num1 = 15; // Decimal
    int num2 = 017; // Oct
    int num3 = 0x0f; // Hex
    int num4 = 0b00001111; // Binary

    std::cout << "num " << num1 << std::endl;
    std::cout << "num " << num2 << std::endl;
    std::cout << "num " << num3 << std::endl;
    std::cout << "num " << num4 << std::endl;

    return 0;
}