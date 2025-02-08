#include <iostream>
using namespace std;
int main()
{
    int hours, total_hours = 0;
    float money = 0;

    cout << "Enter the number of hours: \n";
    cin >> hours;
    while (hours >= 0)
    {
        total_hours += hours;
        if (hours <= 40)
        {
            money += hours * 22;
        }
        else
        {
            money += 40 * 22;
            hours -= 40;
            money += hours * 32.5;
        }
        cout << "Enter the number of hours: \n";
        cin >> hours;
    }

    cout << "Total hours: " << total_hours << endl;
    cout << "The total amount of money is: " << money << endl;
    return 0;
}
