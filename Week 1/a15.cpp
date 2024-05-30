#include <iostream>
#include <cmath>

int main() {
    float r, d, c, a;
    std::cout << "Enter radius of circle: ";
    std::cin >> r;
    d = 2 * r;
    c = 2 * M_PI * r;
    a = M_PI * r * r;
    std::cout << "Diameter = " << std::fixed << d << " units" << std::endl;
    std::cout << "Circumference = " << std::fixed << c << std::endl;
    std::cout << "Area = " << std::fixed << a << std::endl;

    return 0;
}

