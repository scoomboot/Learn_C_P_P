#include <iostream>

// C++ Block Scope | Modern Cpp Series Ep. 12

//float x = 10.3f; // Global var. Globals are not good. try to avoid these

int main() {

    {
        int x = 3; // x only can be used in this scope. {}
    }

    {
        int x = 5; // x only can be used in this scope. {}
        std::cout << "x: " << x << std::endl;
        std::cout << "The size of x: " << sizeof(x) << std::endl;
    }

    return 0;
}