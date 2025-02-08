#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cout << "Inserisci n:";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        v[i] = rand()%10 + 1;
    }
    for (int i = 0; i < n/2; ++i)
    {
        cout << v[i] << " ";
        cout << v[n - i - 1] << " ";
    }
    if (n % 2 == 1)
    {
        cout << v[n/2 + 1] << " ";
    }
    return 0;
}
