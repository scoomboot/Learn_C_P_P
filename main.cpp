#include <iostream>
#include <string>

// const in C++ - The first use | Modern Cpp Series Ep. 11
// Const makes your variable immutable / non-changeable

int main() {

    const float x = 3.14f;
    std::cout << "x: " << x << std::endl;
    std::cout << "The size of x: " << sizeof(x) << std::endl;

    return 0;
}