#include <iostream>
using namespace std;
int main()
{
    int month, first_day;

    do
    {
        cout << "Enter the month\n";
        cin >> month;
    }
    while (month < 1 || month > 13);

    do
    {
        cout << "Enter the day of the week of the first day of the month\n";
        cin >> first_day;
    }
    while (first_day < 1 || first_day > 7);

    int actual_day = 1;

    cout << " L  M  M  G  V  S  D\n";
    for (int i = 0; i < first_day - 1; i++)
    {
        cout << "   ";
    }
    for (int i = 0; i < 8 - first_day; i++)
    {
        cout << " " << actual_day << " ";
        actual_day++;
    }
    cout << endl;

    int max_days;

    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        max_days = 30;
    }
    else if (month == 2)
    {
        max_days = 28;
    }
    else
    {
        max_days = 30;
    }

    while (actual_day <= max_days)
    {
        if ((actual_day - (8 - first_day)) % 7 == 0)
        {
            if (actual_day / 10 == 0)
            {
                cout << " " << actual_day << endl;
            }
            else
            {
                cout << actual_day << endl;
            }
        }
        else
        {
            if (actual_day / 10 == 0)
            {
                cout << " " << actual_day << " ";
            }
            else
            {
                cout << actual_day << " ";
            }
        }
        actual_day++;
    }
    return 0;
}
