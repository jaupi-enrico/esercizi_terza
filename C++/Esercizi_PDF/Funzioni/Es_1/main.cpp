#include <iostream>
using namespace std;

bool primo(int n)
{
    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int conta_primi(int a, int b)
{
    int count = 0;
    for (int i = a; i < b; ++i)
    {
        if (primo(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter a and b:";
    cin >> a >> b;
    cout << conta_primi(a, b);
    return 0;
}
