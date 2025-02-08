#include <iostream>
using namespace std;

void get_max_factor_repetition(int &max_factor, int &repetition, int n)
{
    max_factor = 1;
    int temp = 2;
    if (n == 1)
    {
        max_factor = 1;
        repetition = 1;
    }
    while (n > 1)
    {
        if (n % temp == 0)
        {
            n /=  temp;
            if (max_factor < temp)
            {
                max_factor = temp;
                repetition = 1;
                continue;
            }
            if (max_factor == temp)
            {
                repetition++;
                continue;
            }
        }
        temp++;
    }
}

int main()
{
    int max_factor, repetition, n;
    cout << "Enter n:";
    cin >> n;
    get_max_factor_repetition(max_factor, repetition, n);
    cout << "The max_factor is " << max_factor << ", and it repeats " << repetition << " times";
    return 0;
}
