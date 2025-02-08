#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum = 0;

    cout << "Enter number 1\n";
    cin >> num1;
    cout << "Enter number 2\n";
    cin >> num2;

    while (num2 != 1)
    {
        num1 *= 2;
        num2 /= 2;

        if (num2 % 2 == 1)
        {
            sum += num1;
        }
    }

    cout << "Il risultato e' " << sum;

    return 0;
}
