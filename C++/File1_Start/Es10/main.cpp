#include <iostream>
using namespace std;
int main()
{
    int N, count = 0;

    cout << "Insert the number of bits\n";
    cin >> N;

    int bits[N];

    for (int i = 0; i < N; i++)
    {
        do {
            cout << "Insert bit" << i + 1 << endl;
            cin >> bits[i];
        }
        while (bits[i] != 0 && bits[i] != 1);
    }

    for (int i = 0; i < N; i++)
    {
        if (bits[i] == 1)
        {
            count++;
        }
    }

    if (count % 2 == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}