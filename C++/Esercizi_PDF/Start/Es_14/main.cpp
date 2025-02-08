#include <iostream>
using namespace std;
int main()
{
    double height;
    int bounces = 0;

    cout << "Please enter height in meters: \n";
    cin >> height;

    while (height >= 0.001)
    {
        height *= 0.99;
        bounces++;
    }

    cout << "The ball stops after " << bounces << " bounces.\n";
    return 0;
}
