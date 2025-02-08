#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "inserisci n:";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        v[i] = i + 2;
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (v[j] % v[i] == 0 && i != j && v[i] != -1)
            {
                v[j] = -1;
            }
        }
    }
    cout << "Elenco numeri primi da 2 a n:\n";
    for (int i = 0; i < n; ++i)
    {
        if (v[i] != -1)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}