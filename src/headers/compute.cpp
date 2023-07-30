#include "compute.hpp"

int cube(int x) {
    return x * x * x;
}

int square(int x) {
    return x * x;
}

void print_cube(int x) {
    std::cout << "The cube of " << x << " is " << cube(x) << std::endl;
}

void print_square(int x) {
    std::cout << "The square of " << x << " is " << square(x) << std::endl;
}
