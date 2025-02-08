#include <iostream>
using namespace std;
int main()
{
    int day, month;

    cout << "Enter the number of the days: \n";
    cin >> day;
    cout << "Enter the number of the months: \n";
    cin >> month;

    if (day < 1 || month < 1 && month > 12 || month > 12)
    {
        cout << "Invalid Input";
        return 0;
    }

    if ((month == 3 && day >= 21) || (month == 4 && day <= 20))
        cout << "Ariete\n";
    else if ((month == 4 && day >= 21) || (month == 5 && day <= 20))
        cout << "Toro\n";
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 21))
        cout << "Gemelli\n";
    else if ((month == 6 && day >= 22) || (month == 7 && day <= 22))
        cout << "Cancro\n";
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 23))
        cout << "Leone\n";
    else if ((month == 8 && day >= 24) || (month == 9 && day <= 22))
        cout << "Vergine\n";
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        cout << "Bilancia\n";
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 22))
        cout << "Scorpione\n";
    else if ((month == 11 && day >= 23) || (month == 12 && day <= 21))
        cout << "Sagitario\n";
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 20))
        cout << "Capricorno\n";
    else if ((month == 1 && day >= 21) || (month == 2 && day <= 19))
        cout << "Aquario\n";
    else if ((month == 2 && day >= 20) || (month == 3 && day <= 20))
        cout << "Pesco\n";

    return 0;
}
