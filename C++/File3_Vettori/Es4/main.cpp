#include <iostream>
using namespace std;

int main()
{
    int v[10];
    bool crescente = true;

    for (int i = 0; i < 10; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << ":";
        cin >> v[i];
    }
    for (int i = 0; i < 9; ++i)
    {
        if (v[i + 1] < v[i])
        {
            crescente = false;
        }
    }
    if (crescente)
    {
        cout << "crescente\n";
    }
    else
    {
        cout << "non crescente\n";
    }

    return 0;
}
