#include <iostream>

int main() {
    //srand(time(NULL));
    int N, N_v;

    std::cout << "Enter N:";
    std::cin >> N;

    int m[N][N];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = rand() % 101;
        }
    }

    if (N % 2 == 0) {
        N_v = N/2;
    }
    else {
        N_v = N/2 + 1;
    }
    int v[N_v] = {0};

    for (int i = 0; i < N_v; ++i) {
        int sum = 0;

        for (int j = 0; j < N_v + N/2 - 2*i + i; ++j) {
            sum += m[i][j];
            sum += m[N - 1 - i][j];
        }
        for (int j = 0; j < N_v - 2*i + 1 + i; ++j) {
            sum += m[j][i];
            sum += m[j][N - 1 - i];
        }

        v[i] = sum;
    }

    for (int i = 0; i < N_v; ++i) {
        std::cout << "La somma dei valori nella cornice" << i + 1 << " e': " << v[i] << std::endl;
    }

    return 0;
}