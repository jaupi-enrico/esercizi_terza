#include <iostream>
using namespace std;
int main()
{
    double temperature_celsius;
    double temperature_fahrenheit;

    cout << "Enter temperature in Celsius: \n";
    cin >> temperature_celsius;

    temperature_fahrenheit = (temperature_celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << temperature_fahrenheit << endl;
    return 0;
}
