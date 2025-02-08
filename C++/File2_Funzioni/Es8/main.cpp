#include <iostream>
using namespace std;

bool isoscele(int n1, int n2, int n3)
{
    if (n1 == n2)
    {
        if (n3 < n1 + n2)
        {
            return true;
        }
        return false;
    }
    if (n2 == n3)
    {
        if (n1 < n2 + n3)
        {
            return true;
        }
        return false;
    }
    if (n1 == n3)
    {
        if (n2 < n1 + n3)
        {
            return true;
        }
        return false;
    }
    return false;
}

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (isoscele(n1, n2, n3))
    {
        cout << "Il triangolo e' isoscele";
    }
    else
    {
        cout << "Il triangolo non e' isoscele";
    }

    return 0;
}
