#include <iostream>
using namespace std;
void debts(int &n1, int &n2, int &n3)
{
    if (n2 < 0)
    {
        n1 += n2;
        n2 = 0;
    }
    if (n3 < 0)
    {
        n1 += n3;
        n3 = 0;
    }
    if (n1 < 0)
    {
        n1 = 0;
    }
}

int main()
{
    int n1, n2, n3;
    cout << "Enter 3 numbers: ";
    cin >> n1 >> n2 >> n3;
    debts(n1, n2, n3);
    cout << "(" << n1 << ", " << n2 << ", " << n3 << ")";
    return 0;
}
