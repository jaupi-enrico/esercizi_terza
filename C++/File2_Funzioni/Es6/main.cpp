#include <iostream>
using namespace std;

bool has_3_divisor(int N, int &max)
{
    int d = 0;
    for (int i = 1; i < N; ++i)
    {
        if (N % i == 0)
        {
            d++;
            max = i;
        }
    }
    if (d < 3)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int N, max;
    cout << "Enter N\n";
    cin >> N;
    if (has_3_divisor(N, max) && has_3_divisor(max, max))
    {
        cout << "The number and its maximum divisor have 3 divisors";
    }
    else
    {
        cout << "The number and its maximum divisor doesn't have 3 divisors";
    }
    return 0;
}
