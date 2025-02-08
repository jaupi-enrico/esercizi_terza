#include <iostream>

int main()
{
    using namespace std;

    int num1, num2, num3, temp;

    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;
    cout << "Enter the third number: \n";
    cin >> num3;

    if (num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num3 < num1)
    {
        temp = num3;
        num3 = num1;
        num1 = temp;
    }

    cout << "The sequence is: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}
