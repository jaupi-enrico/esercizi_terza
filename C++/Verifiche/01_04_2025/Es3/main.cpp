#include <iostream>
#include <vector>

int main() {
    const int DIM_Y = 5, DIM_X = 10;
    int Matrix[DIM_Y][DIM_X];
    std::vector<int> v;

    for (int i = 0; i < DIM_Y; ++i) {
        for (int j = 0; j < DIM_X; ++j) {
            Matrix[i][j] = rand() % 2;
        }
    }

    for (int i = 0; i < DIM_Y; ++i) {
        for (int j = 0; j < DIM_X; ++j) {
            std::cout << Matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int Fiume;
    std::cout << "Inserisci il nome del fiume da cercare: ";
    std::cin >> Fiume;
    Fiume--;

    for (int i = 0; i < DIM_X; ++i) {
        if (Matrix[Fiume][i] == 1) {
            v.push_back(i);
        }
    }

    if (v.size() == 0) {
        std::cout << "Nessuna citta' e' bagnata da questo fiume" << std::endl;
    }
    else {
        std::cout << "Le citta' bagnate da questo fiume sono: ";
        for (int i = 0; i < v.size(); ++i) {
            std::cout << v.at(i) + 1 << " ";
        }
        std::cout << std::endl;
    }

    v.clear();

    int Paese;
    std::cout << "Inserisci il nome del paese da cercare: ";
    std::cin >> Paese;
    Paese--;

    for (int i = 0; i < DIM_Y; ++i) {
        if (Matrix[i][Paese] == 1) {
            v.push_back(i);
        }
    }

    if (v.size() == 0) {
        std::cout << "Nessun fiume bagna questa citta'" << std::endl;
    }
    else {
        std::cout << "Le citta' e' bagnata dai fiumi: ";
        for (int i = 0; i < v.size(); ++i) {
            std::cout << v.at(i) + 1 << " ";
        }
        std::cout << std::endl;
    }

    v.clear();
    v.resize(10);

    for (int i = 0; i < DIM_Y; ++i) {
        for (int j = 0; j < DIM_X; ++j) {
            if (Matrix[i][j] == 1) {
                v.at(j)++;
            }
        }
    }

    int max = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (v.at(max) < v.at(i)) {
            max = i;
        }
    }

    std::cout << "La citta' bagnata da piu' fiumi e' la citta' " << max + 1 << std::endl;

    bool presente = false;
    for (int i = 0; i < v.size(); ++i) {
        if (v.at(i) > 3) {
            presente = true;
            break;
        }
    }

    if (presente) {
        std::cout << "Le citta' bagnate da piu' di 3 fiumi sono le citta: ";
        for (int i = 0; i < v.size(); ++i) {
            if (v.at(i) > 3) {
                std::cout << i + 1 << " ";
            }
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "Non sono presenti citt' bagnate da piu' di 3 fiumi" << std::endl;
    }
    return 0;
}
