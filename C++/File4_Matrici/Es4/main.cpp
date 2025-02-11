#include <iostream>

int main()
{
    srand(time(NULL));
    const int N = 9;
    int m[N][N];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            m[i][j] = rand()%10;
        }
    }
    int d1 = 0, d2 = 0;
    for (int i = 0; i < N; ++i)
    {
        d1 += m[i][i];
        d2 += m[i][N - i - 1];
    }
    if (d1 == d2)
    {
        std::cout << "La somma delle diagonali e' uguale\n";
    }
    else
    {
        std::cout << "Le somme delle diagonali non sono uguali\n";
    }
    return 0;
}