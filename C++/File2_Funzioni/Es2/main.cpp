#include <iostream>
using namespace std;

long long int to_seconds(int hours, int minutes, int seconds)
{
    long long int total_seconds = (hours * 60 * 60 + minutes * 60 + seconds);
    return total_seconds;
}

int main()
{
    int hours1, minutes1, seconds1, hours2, minutes2, seconds2;
    cout << "Enter the hours of time1\n";
    cin >> hours1;
    cout << "Enter the minutes of time1\n";
    cin >> minutes1;
    cout << "Enter the seconds of time1\n";
    cin >> seconds1;
    cout << "Enter the hours of time2\n";
    cin >> hours2;
    cout << "Enter the minutes of time2\n";
    cin >> minutes2;
    cout << "Enter the seconds of time2\n";
    cin >> seconds2;

    if (to_seconds(hours1, minutes1, seconds1) > to_seconds(hours2, minutes2, seconds2))
    {
        cout << hours1 << " h " << minutes1 << " min " << seconds1 << " sec\n";
        cout << "is greater then\n";
        cout << hours2 << " h " << minutes2 << " min " << seconds2 << " sec\n";
    }
    else if (to_seconds(hours1, minutes1, seconds1) < to_seconds(hours2, minutes2, seconds2))
    {
        cout << hours2 << " h " << minutes2 << " min " << seconds2 << " sec\n";
        cout << "is greater then\n";
        cout << hours1 << " h " << minutes1 << " min " << seconds1 << " sec\n";
    }
    else
    {
        cout << hours1 << " h " << minutes1 << " min " << seconds1 << " sec\n";
        cout << "is equals to\n";
        cout << hours2 << " h " << minutes2 << " min " << seconds2 << " sec\n";
    }
    return 0;
}
