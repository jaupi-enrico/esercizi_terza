#include <iostream>

int main() {

    const int DIM = 100;
    int Matrix[DIM][DIM];
    int Real_dim;

    std::cout << "Inserisci la dimensione reale: ";
    std::cin >> Real_dim;

    for (int i = 0; i < Real_dim; ++i) {
        for (int j = 0; j < Real_dim; ++j) {
            std::cout << "Inserisci il dato in posizione " << i + 1 << ", " << j + 1<< ": ";
            std::cin >> Matrix[i][j];
        }
    }

    int Diag_Pri = 0, Diag_Sec = 0;
    for (int i = 0; i < Real_dim; ++i) {
        Diag_Pri += Matrix[i][i];
        Diag_Sec += Matrix[i][Real_dim - i - 1];
    }

    if (Diag_Pri > Diag_Sec) {
        std::cout << "La diagonale principale e' maggiore di quella secondaria" << std::endl;
    }
    else if (Diag_Sec > Diag_Pri) {
        std::cout << "La diagonale secondaria e' maggiore di quella principale" << std::endl;
    }
    else {
        std::cout << "La diagonale principale e' uguale a quella secondaria" << std::endl;
    }

    return 0;
}