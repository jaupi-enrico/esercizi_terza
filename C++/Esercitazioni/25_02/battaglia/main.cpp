#include <iostream>
#include <vector>

void affonda(std::vector<std::vector<int>> &campo, int N, int riga, int colonna) {
    if (riga < 0 || riga >= N || colonna < 0 || colonna >= N || campo[riga][colonna] == 0)
        return;

    campo[riga][colonna] = 0;

    affonda(campo, N, riga + 1, colonna);
    affonda(campo, N, riga - 1, colonna);
    affonda(campo, N, riga, colonna + 1);
    affonda(campo, N, riga, colonna - 1);
}

int main() {
    int N, C, colpite  = 0;
    std::cin >> N >> C;

    std::vector<std::vector<int>> campo(N, std::vector<int>(N));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            std::cin >> campo[i][j];

    for (int i = 0; i < C; ++i) {
        int riga, colonna;
        std::cin >> riga >> colonna;

        if (campo[riga][colonna] == 1) {
            affonda(campo, N, riga, colonna);
            colpite ++;
        }
    }

    std::cout << colpite;
    return 0;
}
