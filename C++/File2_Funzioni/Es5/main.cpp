#include <iostream>
using namespace std;

int repetition(int num1, int num2, int num3)
{
    if (num1 == num2)
    {
        return num1;
    }
    else if (num2 == num3)
    {
        return num2;
    }
    else if (num1 == num3)
    {
        return num1;
    }
    else
    {
        return -1;
    }
}

void enter_values(int &num1,int &num2,int &num3)
{
    cout << "Enter num1\n";
    cin >> num1;
    cout << "Enter num2\n";
    cin >> num2;
    cout << "Enter num3\n";
    cin >> num3;
}

int main()
{
    int num1, num2, num3, N1, N2;

    enter_values(num1, num2, num3);
    N1 = repetition(num1, num2, num3);
    if (N1 == -1)
    {
        cout << "The program stopped because you entered 3 different numbers\n";
        return 1;
    }
    enter_values(num1, num2, num3);
    N2 = repetition(num1, num2, num3);
    if (N2 == -1)
    {
        cout << "The program stopped because you entered 3 different numbers\n";
        return 1;
    }
    if (N1 > N2)
    {
        cout << "The first is grater than the second\n";
    }
    else if (N2 > N1)
    {
        cout << "The second is grater than the first\n";
    }
    else
    {
        cout << "They are equals";
    }
    return 0;
}
