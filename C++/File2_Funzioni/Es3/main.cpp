#include <iostream>
using namespace std;

double max_minus_min(double num1, double num2, double num3)
{
    int max, min;
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num1 < num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    return (max - min);
}

int main()
{
    double num1, num2, num3;
    cout << "Enter num1\n";
    cin >> num1;
    cout << "Enter num2\n";
    cin >> num2;
    cout << "Enter num3\n";
    cin >> num3;

    cout << "The max number minus the minor number is: " << max_minus_min(num1, num2, num3) << endl;
    return 0;
}
