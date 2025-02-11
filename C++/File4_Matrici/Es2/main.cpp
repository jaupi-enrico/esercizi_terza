#include <iostream>

int main()
{
    const int N = 5;
    int m[N][N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            m[i][j] = 0;
        }
    }
    for (int i = 0; i < N; ++i)
    {
        m[i][i] = 1;
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}