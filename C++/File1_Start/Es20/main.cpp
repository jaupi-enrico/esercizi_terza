#include <iostream>
using namespace std;
int main()
{
    int N, N20 = 0, N10 = 0, N5 = 0, N2 = 0, N1 = 0;
    cout << "Enter N\n";
    cin >> N;

    while (N > 0)
    {
        if (N >= 20)
        {
            N -= 20;
            N20++;
        }
        else if (N >= 10)
        {
            N -= 10;
            N10++;
        }
        else if (N >= 5)
        {
            N -= 5;
            N5++;
        }
        else if (N >= 2)
        {
            N -= 2;
            N2++;
        }
        else if (N >= 1)
        {
            N -= 1;
            N1++;
        }
    }

    cout << N20 << " banconote da 20, " <<
            N10 << " banconote da 10, " <<
            N5 << " banconote da 5, " <<
            N2 << " monete da 2, " <<
            N1 << " monete da 1\n";
    return 0;
}
