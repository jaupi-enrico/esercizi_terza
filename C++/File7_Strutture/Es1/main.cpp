#include <iostream>

struct Orario{
    int ore;
    int minuti;
};

int main() {

    Orario orario1;
    Orario orario2;

    std::cout << "Inserisci i 2 orari:\n";
    std::cout << "Orario 1:";
    std::cin >> orario1.ore >> orario1.minuti;
    std::cout << "Orario 2:";
    std::cin >> orario2.ore >> orario2.minuti;

    int differenza = abs(orario1.ore - orario2.ore) * 60 + abs(orario1.minuti - orario2.minuti);

    std::cout << "La differenza in minuti e': " << differenza;

    return 0;
}