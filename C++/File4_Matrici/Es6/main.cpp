#include <iostream>
#include <cstdlib>  // Per rand() e srand()
#include <ctime>    // Per time()

const int N = 3;

bool presente(int m[][N], int n) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (m[i][j] == n) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int m[N][N];
    srand(time(0));  // Inizializza il generatore di numeri casuali

    // Inizializza la matrice con -1 per evitare falsi positivi
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = -1;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int num;
            do {
                num = rand() % 10;
            } while (presente(m, num));
            m[i][j] = num;
        }
    }

    // Stampa la matrice
    std::cout << "Matrice generata:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}