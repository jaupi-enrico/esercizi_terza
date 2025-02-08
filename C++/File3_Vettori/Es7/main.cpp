#include <iostream>
using namespace std;
int main()
{
    int v[10];
    bool once = true;
    for (int i = 0; i < 10; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << ":";
        cin >> v[i];
    }
    for (int i = 0; i < 10; ++i)
    {
        once = true;
        for (int j = 0; j < 10; ++j)
        {
            if (v[i] == v[j] && i != j)
            {
                once = false;
            }
        }
        if (once)
        {
            cout << v[i] << " ";
        }
    }
    return 0;
}
