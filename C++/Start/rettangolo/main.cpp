#include <iostream>

int main()
{
    //Declaration of variables
    int base, height;

    //Inputs
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << std::endl;
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << std::endl;

    //Operation
    int const area = base * height;
    int const perimeter = 2 * (base + height);

    //result
    std::cout << "The area is: " << area << std::endl;
    std::cout << "The perimeter is: " << perimeter << std::endl;
    return 0;
}
