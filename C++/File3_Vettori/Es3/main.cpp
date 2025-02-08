#include <iostream>
using namespace std;
int main()
{
    int v[8];
    int min, max, count = 0;
    for (int i = 0; i < 8; ++i)
    {
        cout << "Inserisci il valroe della cella " << i + 1 << ":";
        cin >> v[i];
    }
    cout << "Inserisci il minimo e il massimo:";
    cin >> min >> max;

    for (int i = 0; i < 8; ++i)
    {
        if (v[i] > min && v[i] < max)
        {
            count++;
        }
    }
    cout << "sono compresi " << count << " numeri\n";

    return 0;
}
