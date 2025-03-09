#include <iostream>
#include <array>

// Raw Arrays and std::array in C++ | Modern Cpp Series Ep. 13

int main() {

    // size created at compile time, cant change size of array. No protection for accessing outside the array
    // segment fault
    // Raw array
    int ids[100];
    ids[0] = 10;
    ids[1] = 11;
    ids[2] = 12;
    ids[3] = 13;
    std::cout << "ID: " << ids[0] << std::endl;
    std::cout << "ID: " << ids[1] << std::endl;
    std::cout << "ID: " << ids[2] << std::endl;
    std::cout << "ID: " << ids[3] << std::endl;
    std::cout << "Size of array: " << sizeof(ids) << std::endl;
    std::cout << "Size of index: " << sizeof(ids[0]) << std::endl << std::endl << std::endl;


    std::array<int, 100> ids2;
    ids2.at(0) = 1;
    ids2.at(1) = 2;
    ids2.at(2) = 3;
    std::cout << "ID: " << ids2.at(0) << std::endl;
    std::cout << "ID: " << ids2.at(1) << std::endl;
    std::cout << "ID: " << ids2.at(2) << std::endl;

    return 0;
}