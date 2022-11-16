#include <iostream>

int main(){
    int num1{10};
    int num2{-300};
    unsigned int num3{40};
    // unsigned int num4{-40}; // error: narrowing conversion

    int nums[]{2, 4, 6, 8};
    for (auto num : nums){
        std::cout << num << std::endl;
    }

    std::cout << nums << std::endl;

    return 0;
}