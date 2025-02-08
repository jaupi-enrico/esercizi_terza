#include <iostream>
using namespace std;

int minimum_number(int n, int m)
{
    int min = m;
    for (int i = n + 1; i % m != 0 && i == m; ++i)
    {
        min = i + 1;
    }
    return min;
}

int main()
{
    int x, y;
    cout << "Enter x\n";
    cin >> x;
    cout << "Enter y\n";
    cin >> y;

    if (minimum_number(x, y) > minimum_number(y, x))
    {
        cout << "Maggiore";
    }
    else if (minimum_number(x, y) < minimum_number(y, x))
    {
        cout << "Minore";
    }
    else
    {
        cout << "Uguale";
    }
    return 0;
}
