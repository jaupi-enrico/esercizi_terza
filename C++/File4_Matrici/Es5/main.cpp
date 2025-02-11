#include <iostream>

int main()
{
    const int N = 6;
    int m[N][N];
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            m[i][j] = rand()%10;
        }
    }
    bool simmetrica = true;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (m[i][j] != m[j][i])
            {
                simmetrica = false;
            }
        }
    }
    if (simmetrica)
    {
        std::cout << "E' simmetrica\n";
    }
    else
    {
        std::cout << "Non e' simmetrica\n";
    }
    return 0;
}