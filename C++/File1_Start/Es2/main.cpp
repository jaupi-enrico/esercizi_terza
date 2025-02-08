#include <iostream>

int main()
{
    using namespace std;

    double Num1, Num2, Num3, Min;

    cout << "Enter the first number: \n";
    cin >> Num1;
    cout << "Enter the second number: \n";
    cin >> Num2;
    cout << "Enter the third number: \n";
    cin >> Num3;

    if  (Num1 <= Num2 && Num1 <= Num3) {
        Min = Num1;
    }
    else {
        if (Num2 <= Num3) {
            Min = Num2;
        }
        else {
            Min = Num3;
        }
    }

    cout << "Minimum number is: " << Min << endl;
    return 0;
}
