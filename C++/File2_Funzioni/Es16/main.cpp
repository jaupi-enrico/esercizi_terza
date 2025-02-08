#include <iostream>
using namespace std;

void order(int &num1, int &num2, int &num3)
{
    int temp;
    if (num1 < num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 < num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if (num1 < num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
}

int prod_scalre(int num1_1, int num1_2, int num1_3, int num2_1, int num2_2, int num2_3)
{
    return (num1_1 * num2_1) + (num1_2 * num2_2) + (num1_3 * num2_3);
}

int main()
{
    int num1_1, num1_2, num1_3, num2_1, num2_2, num2_3;
    cout << "Enter 3 numbers:";
    cin >> num1_1 >> num1_2 >> num1_3;
    cout << "Enter 3 numbers:";
    cin >> num2_1 >> num2_2 >> num2_3;
    order(num1_1, num1_2, num1_3);
    order(num2_1, num2_2, num2_3);

    cout << "Il prodotto scalare e': " << prod_scalre(num1_1, num1_2, num1_3, num2_1, num2_2, num2_3);
    return 0;
}
