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

    int R, C, sumR = 0, sumC = 0;

    std::cout << "Enter R and C:";
    std::cin >> R >> C;

    for (int i = R; i < N && i - R < M; ++i) {
        sumR += m[i][i - R];
    }

    for (int i = C; i < M && i - C < N; ++i) {
        sumC += m[i - C][i];
    }

    std::cout << "La somma della diagonale di R e': " << sumR << std::endl;
    std::cout << "La somma della diagonale di C e': " << sumC << std::endl;

    return 0;
}