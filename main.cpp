#include <iostream>

// C++ Block Scope | Modern Cpp Series Ep. 12
//

int main() {

    {
        const float x = 3.14f; // x only can be used in this scope. {}
    }
    std::cout << "x: " << x << std::endl;
    std::cout << "The size of x: " << sizeof(x) << std::endl;

    return 0;
}