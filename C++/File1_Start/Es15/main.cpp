#include <iostream>
using namespace std;
int main()
{
    int h, k;
    do
    {
        cout << "Enter h:\n";
        cin >> h;
        cout << "Enter k:\n";
        cin >> k;
    }
    while (k <= h);

    if (k - h == 1)
    {
        cout << "Non esistono valori tra i due numeri\n";
        return 1;
    }

    int sum = 0;
    int cont = 0;

    for (int i = h + 1; i < k; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            cont++;
        }
    }

    double value = (double) sum / cont;

    cout << value << endl;

    return 0;
}
