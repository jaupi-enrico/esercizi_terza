#include <iostream>

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
    srand(time(NULL));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = -1;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int num;
            do {
                num = rand() % 9 + 1;
            } while (presente(m, num));
            m[i][j] = num;
        }
    }

    std::cout << "Matrice:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}