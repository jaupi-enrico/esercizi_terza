#include <iostream>

int main()
{
    const int GRANDEZZA = 10;
    int count = 0;
    int m[GRANDEZZA][GRANDEZZA];
    srand(time(NULL));
    for (int i = 0; i < GRANDEZZA; ++i)
    {
        for (int j = 0; j < GRANDEZZA; ++j)
        {
            m[i][j] = rand()%10;
            if (m[i][j] == 0)
            {
                count++;
            }
        }
    }
    std::cout << "Ci sono " << count << " zero\n";
    return 0;
}