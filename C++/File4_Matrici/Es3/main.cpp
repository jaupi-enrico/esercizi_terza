#include <iostream>

int main()
{
    srand(time(NULL));
    const int N = 4;
    int m[N + 1][N + 1];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            m[i][j] = rand()%10;
        }
    }
    for (int i = 0; i < N; ++i)
    {
        int sum = 0;
        for (int j = 0; j < N; ++j)
        {
            sum += m[i][j];
        }
        m[i][N] = sum;
        sum = 0;
        for (int j = 0; j < N; ++j)
        {
            sum += m[j][i];
        }
        m[N][i] = sum;
    }
    int colonnaMax = 0, righaMAX = 0;

    for (int i = 0; i < N; ++i)
    {
        if (m[N][i] > m[N][colonnaMax])
        {
            colonnaMax = i;
        }
    }

    for (int i = 0; i < N; ++i)
    {
        if (m[i][N] > m[righaMAX][N])
        {
            righaMAX = i;
        }
    }

    std::cout << "La colonna con la somma piu alta e' la " << colonnaMax + 1<< " con " << m[N][colonnaMax] << std::endl;
    std::cout << "La riga con la somma piu alta e' la " << righaMAX + 1<< " con " << m[righaMAX][N] << std::endl;
    return 0;
}