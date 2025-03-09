#include <iostream>

// Raw Arrays and std::array in C++ | Modern Cpp Series Ep. 13

int main() {

    int ids[100]; // size created at compile time, cant change size of array.
    ids[0] = 10;
    ids[1] = 11;
    ids[2] = 12;
    ids[3] = 13;
    std::cout << "ID: " << ids[0] << std::endl;
    std::cout << "ID: " << ids[1] << std::endl;
    std::cout << "ID: " << ids[2] << std::endl;
    std::cout << "ID: " << ids[3] << std::endl;
    std::cout << "Size of array: " << sizeof(ids) << std::endl;
    std::cout << "Size of index: " << sizeof(ids[0]) << std::endl;

    return 0;
}