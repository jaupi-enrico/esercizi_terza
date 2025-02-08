#include <iostream>
using namespace std;
int main()
{
    int N_coca = 20, N_water = 20;
    while (N_coca > 0 || N_water > 0)
    {
        cout << "Enter the number (1 = Coca-cola / 2 = Water)\n";
        int choose;
        do
        {
            cin >> choose;
        }
        while (choose != 1 && choose != 2);

        if (choose == 1)
        {
            if (N_coca == 0)
            {
                cout << "There isn't any more coca-cola\n";
            }
            else
            {
                N_coca -= 1;
            }
        }
        else
        {
            if (N_water == 0)
            {
                cout << "There isn't any more water\n";
            }
            else
            {
                N_water -= 1;
            }
        }
    }

    cou

    return 0;
}
