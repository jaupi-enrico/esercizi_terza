#include <iostream>
using namespace std;
void stampa(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << "*";
    }
}

int main()
{
    int n;
    cout << "Inserisci n:";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << ":";
        cin >> v[i];
    }
    stampa(v[0]);
    for (int i = 1; i < n; ++i)
    {
        cout << endl;
        stampa(v[i]);
    }
    return 0;
}
