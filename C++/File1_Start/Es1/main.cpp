#include <iostream>

int main()
{
    using namespace std;

    //Declaration of variables
    int day = 1, month = 1, year = 1900;

    //Inputs
    cout << "Enter day: \n";
    cin >> day;
    cout << "Enter month: \n";
    cin >> month;
    cout << "Enter year: \n";
    cin >> year;

    if ((day >= 1 && day <= 30) && (year >= 1900 && year <= 2023) && (month >= 1 && month <= 12))
    {
        cout << day << "/" << month << "/" << year << "\n";
    }
    else
    {
        cout << "Invalid Input\n";
    }
    return 0;
}