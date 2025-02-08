#include <iostream>
using namespace std;
int main()
{
    int vA[100];
    for (int i = 0; i < 100; ++i)
    {
        bool repeat = false;
        for (int j = 0; j < 100; ++j)
        {
            vA[i] = rand()%1091 + 10;
            for (vA[j] == vA[i] && i != j)
            {

            }
        }
    }
    int vB[100];
    for (int i = 0; i < 100; ++i)
    {
        vB[i] = rand()%1091 + 10;
    }

    return 0;
}