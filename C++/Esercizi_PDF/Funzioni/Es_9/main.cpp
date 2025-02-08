#include <iostream>

using namespace std;

void triangolo(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for(int j = 0; j < n - i ; ++j)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (i - 1) + 1; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    triangolo(n);
    return 0;
}
