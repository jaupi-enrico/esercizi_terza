#include <iostream>
using namespace std;
int main()
{
    int v[8];

    for (int i = 0; i < 8; ++i)
    {
        cout << "inserisci valore " << i + 1 << ":";
        cin >> v[i];
        while (v[i] <= 0)
        {
            cout << "reinserisci valore " << i + 1 << ":";
            cin >> v[i];
        }
    }

    for (int i = 0; i < 8; ++i)
    {
        cout << v[i] << " ";
    }
    return 0;
}
