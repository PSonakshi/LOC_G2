#include <iostream>


int main() {
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    if (a == 0) {
        std::cout << "The given number is zero" << std::endl;
    } else if (a < 0) {
        std::cout << "The number is negative" << std::endl;
    } else {
        std::cout << "The number is positive" << std::endl;
    }

    return 0;
}
