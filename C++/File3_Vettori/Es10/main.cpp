#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, count = 0;
    cout << "Inserisci n:";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << ":";
        cin >> v[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 3 == 0)
        {
            sum += v[i];
            count++;
        }
    }
    cout << sum/count << endl;
    return 0;
}
