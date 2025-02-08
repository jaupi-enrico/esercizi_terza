#include <iostream>
using namespace std;
int main()
{
    int N, sum = 0;

    cout << "Insert the number of numbers\n";
    cin >> N;

    int num[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Insert num" << i + 1 << endl;
        cin >> num[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (num[i] % 2 != 0)
        {
            cout << "Almeno un numero e' dispari\n";
            return 1;
        }
    }

    cout << "Non sono presenti numeri dispari\n";
    return 0;
}
