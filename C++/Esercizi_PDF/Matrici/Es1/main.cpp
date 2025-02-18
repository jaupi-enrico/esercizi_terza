#include <iostream>

int main() {
    int N;

    std::cout << "Enter N:";
    std::cin >> N;

    int m[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = 0;
        }
    }

    int righa = 1, colonna = 1, n = 0;
    do {
        m[righa - 1][colonna - 1] = n;
        std::cout << "Inserisci riga e colonna:";
        std::cin >> righa >> colonna;
        std::cout << "Inserisci n:";
        std::cin >> n;
    }
    while (n != -1);

    return 0;
}