#include <iostream>
#include "example.h"

int main() {
    std::cout << "-5 + -4 = " << example::add(-5, -4) << std::endl
            << "-5 + 0 = " << example::add(-5, 0) << std::endl
            << "-5 + 4 = " << example::add(-5, 4) << std::endl << std::endl;

    std::cout << "0 + -4 = " << example::add(0, -4) << std::endl
            << "0 + 0 = " << example::add(0, 0) << std::endl
            << "0 + 4 = " << example::add(0, 4) << std::endl << std::endl;

    std::cout << "5 + -4 = " << example::add(5, -4) << std::endl
            << "5 + 0 = " << example::add(5, 0) << std::endl
            << "5 + 4 = " << example::add(5, 4) << std::endl << std::endl;
    return 0;
}
