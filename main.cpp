#include <iostream>

int main() {
    std::string part_integral;
    std::string part_fractional;

    std::cout << "Please enter the integral part of number: ";
    std::cin >> part_integral;

    std::cout << "Please enter the fractional part of number: ";
    std::cin >> part_fractional;

    double number = std::stod(part_integral + "." + part_fractional);

    std::printf("Your double number: %f\n", number);

    return 0;
}
