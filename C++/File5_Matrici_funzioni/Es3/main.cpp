#include <iostream>

const int DIM = 100;

int chiedi_dim() {
    int n;
    std::cout << "Inserisci la dimensione (1 - 5):";
    std::cin >> n;
    while (n > 5 || n < 1) {
        std::cout << "Reinserisci la dimensione (1 - 5):";
        std::cin >> n;
    }
    return n;
}

void show_matrix(int m[][DIM], const int DIM_effettiva) {
    for (int i = 0; i < DIM_effettiva; ++i) {
        for (int j = 0; j < DIM_effettiva; ++j) {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void exchange_columns(int m[][DIM], const int DIM_effettiva, int column1, int column2) {
    if (column1 > DIM_effettiva || column2 > DIM_effettiva) {
        return;
    }
    for (int i = 0; i < DIM_effettiva; ++i) {
        int temp = m[i][column1];
        m[i][column1] = m[i][column2];
        m[i][column2] = temp;
    }
}

int main() {
    int m[DIM][DIM];
    const int DIM_effettiva = chiedi_dim();
    for (int i = 0; i < DIM_effettiva; ++i) {
        for (int j = 0; j < DIM_effettiva; ++j) {
            m[i][j] = rand() % 10 + 10;
        }
    }
    show_matrix(m, DIM_effettiva);
    int j, k;
    std::cout << "Inserisci le due colonne da scambiare:";
    std::cin >> j >> k;
    exchange_columns(m, DIM_effettiva, j - 1, k - 1);
    show_matrix(m, DIM_effettiva);
    return 0;
}