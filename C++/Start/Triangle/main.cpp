#include <iostream>
#include <math.h>
#include <valarray>

int main() {
    //Declaration of variables
    float base, height;

    //Inputs
    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << std::endl;
    std::cout << "Enter height: ";
    std::cin >> height;
    std::cout << std::endl;

    //Operation
    float const area = (base * height) / 2;
    float const oblique_side = sqrt(base * base + height * height);
    float const perimeter = base + height + oblique_side;


    //Results
    std::cout << "The area is " << area << std::endl;
    std::cout << "The perimeter is " << perimeter << std::endl;

    return 0;
}
