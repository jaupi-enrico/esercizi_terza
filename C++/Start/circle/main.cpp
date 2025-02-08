#include <iostream>

int main() {
    //Declaration of variables
    double radius;

    //Input
    std::cout << "Enter the radius: ";
    std::cin >> radius;

    //Operations
    const double AREA = std::numbers::pi * radius * radius;
    const double PERIMETER = std::numbers::pi * 2 * radius;

    //Result
    std::cout << "Area is: " << AREA << std::endl;
    std::cout << "Perimeter is: " << PERIMETER << std::endl;

    return 0;
}
