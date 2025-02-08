#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, somma_div = 0;

    cout << "Enter N:\n";
    cin >> N;

    for (int div = 0; div < N; div ++)
    {
        if (N % div == 0)
        {
            somma_div += div;
        }
    }

    if (N == somma_div)
    {
        cout << "Perfect number";
    }
    else
    {
        cout << "Not a perfect number";
    }

    return 0;
}
