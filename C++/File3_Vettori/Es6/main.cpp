#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Inserisci n:";
    cin >> n;
    int v[n];
    long long int sum_pari = 0;
    long long int sum_dispari = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            sum_pari += v[i];
        }
        else
        {
            sum_dispari += v[i];
        }
    }
    if (sum_dispari == sum_pari)
    {
        cout << "Pari e dispari uguali\n";
    }
    return 0;
}
