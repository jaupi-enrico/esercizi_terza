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

bool condition(int m[][DIM], const int DIM_effettiva) {
    for (int i = 0; i < DIM_effettiva; ++i) {
        int sum = 0;
        for (int j = 0; j < DIM_effettiva; ++j) {
            sum += m[i][j];
        }
        if (sum > m[i][i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int m[DIM][DIM];
    const int DIM_effettiva = chiedi_dim();
    for (int i = 0; i < DIM_effettiva; ++i) {
        for (int j = 0; j < DIM_effettiva; ++j) {
            m[i][j] = rand() % 10 + 1;
        }
    }
    show_matrix(m, DIM_effettiva);
    if (condition(m, DIM_effettiva)) {
        std::cout << "Condizione verificata\n";
    }
    else {
        std::cout << "Condizione non verificata\n";
    }
    return 0;
}