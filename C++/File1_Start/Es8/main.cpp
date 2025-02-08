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
        if (i % 2 == 0)
        {
            sum += num[i];
        }
    }

    cout << "La somma dei numeri in posizione pari e' " << sum;
    return 0;
}
