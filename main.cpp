#include <iostream>

// C++ Block Scope | Modern Cpp Series Ep. 12

float x = 10.3f;

int main() {

    {
        x = 3.14f; // x only can be used in this scope. {}
    }
    std::cout << "x: " << x << std::endl;
    std::cout << "The size of x: " << sizeof(x) << std::endl;

    return 0;
}