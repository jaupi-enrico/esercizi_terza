#include <iostream>
using namespace std;
int main()
{
    int first_month, last_month, days = 0;

    do
    {
        cout << "Enter the first month\n";
        cin >> first_month;
    }
    while (first_month < 1 || first_month > 13);

    do
    {
        cout << "Enter the second month\n";
        cin >> last_month;
    }
    while (last_month < 1 || last_month > 13);

    if (last_month < first_month)
    {
        cout << "Il secondo mese viene prima del primo\n";
        return 1;
    }

    for (int i = first_month; i <= last_month; i++)
    {
        if (i == 4 || i == 6 || i == 9 || i == 11)
        {
            days += 30;
        }
        else if (i == 2)
        {
            days += 28;
        }
        else
        {
            days += 31;
        }
    }

    cout << days << endl;

    return 0;
}
