#include <iostream>

int main() {
    int N, M;

    std::cout << "Enter N and M:";
    std::cin >> N >> M;

    int m[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = rand() % 101;
        }
    }

    int righa, colonna;
    do {
        int sum = 0;
        std::cout << "Inserisci riga e colonna:";
        std::cin >> righa >> colonna;
        if (righa >= 0) {
            for (int i = 0; i < M; ++i) {
                std::cout << m[righa - 1][i] << " ";
                sum += m[righa - 1][i];
            }
            std::cout << std::endl << "La somma e': " << sum << std::endl;
        }
        else if (colonna >= 0) {
            for (int i = 0; i < N; ++i) {
                std::cout << m[i][colonna - 1] << "\n";
                sum += m[i][colonna - 1];
            }
            std::cout << "La somma e': " << sum << std::endl;
        }
    }
    while (righa != -1 || colonna != -1);

    return 0;
}