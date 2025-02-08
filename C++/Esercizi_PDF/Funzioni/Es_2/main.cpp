#include <cmath>
#include <iostream>

using namespace std;

int cifra(int n, int k)
{
    if (k <= 0 || n / (int) pow(10, k - 1) <= 0)
    {
        return -1;
    }

    return (n / (int) pow(10, k - 1) % 10);
}

int main()
{
    int n, k;
    cout << "Enter n and k:";
    cin >> n >> k;
    cout << cifra(n, k);
    return 0;
}
