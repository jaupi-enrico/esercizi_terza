#include <iostream>

int main() {
    //Variables
    float price_for_unit, piece;

    //Inputs
    std::cout << "Enter price for piece: ";
    std::cin >> price_for_unit;
    std::cout << std::endl;
    std::cout << "Enter number of pieces: ";
    std::cin >> piece;
    std::cout << std::endl;

    //Operations
    double price = price_for_unit * piece;

    //Discount
    if (piece > 10) {
        price = price * 0.80;
    }

    //Result
    std::cout << "The price is: " << price << std::endl;
    return 0;
}
