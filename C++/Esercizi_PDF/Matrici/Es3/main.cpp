#include <iostream>

int main() {
    srand(time(NULL));
    int N;

    std::cout << "Enter N:";
    std::cin >> N;

    int m[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = rand() % 101;
        }
    }

    int d1 = 0, d2 = 0;

    for (int i = 0; i < N; ++i) {
        d1 += m[i][i];
    }
    for (int i = 0; i < N; ++i) {
        d2 += m[i][N - 1 - i];
    }

    std::cout << "La somma della diagonale principale e': " << d1 << std::endl;
    std::cout << "La somma della diagonale secondaria e': " << d2 << std::endl;

    return 0;
}