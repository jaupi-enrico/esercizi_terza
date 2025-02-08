#include <iostream>
using namespace std;
int main()
{
    int v[10];
    bool condizione = true;
    for (int i = 0; i < 10; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << ":";
        cin >> v[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        if(i % 2 != v[i] % 2)
        {
            condizione = false;
        }
    }
    if (condizione)
    {
        cout << "la condizione e' verificata\n";
    }
    else
    {
        cout << "la condizione non e' verificata\n";
    }
    return 0;
}
