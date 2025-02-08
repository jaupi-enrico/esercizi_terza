#include <iostream>
using namespace std;
int maggiore(int n1, int n2)
{
    if (n1 >= n2)
    {
        return n1;
    }
    return n2;
}

int main()
{
    int n;
    cout << "Inserisci n:";
    cin >> n;
    int A[n], B[n], C[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << " dell'array A:";
        cin >> A[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << "Inserisci il valore della cella " << i + 1 << " dell'array B:";
        cin >> B[i];
    }
    for (int i = 0; i < n; ++i)
    {
        C[i] = maggiore(A[i], B[i]);
    }
    for (int i = 0; i < n; ++i)
    {
        cout << C[i] << " ";
    }
    return 0;
}
