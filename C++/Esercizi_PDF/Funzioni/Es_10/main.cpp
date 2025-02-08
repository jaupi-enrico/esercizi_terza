#include <iostream>
using namespace std;

bool bisestile(int n)
{
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
        {
            return true;
        }
    }
    else if (n % 4 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    if (bisestile(n))
    {
        cout << "Bisestile";
    }
    else
    {
        cout << "Non bisestile";
    }
    return 0;
}
