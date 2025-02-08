#include <cmath>
#include <iostream>
using namespace std;

void enter_a(double &a)
{
    cout << "Enter a:";
    cin >> a;
    while (a <= 0)
    {
        cout << "Renter a positive a (a > 0):";
        cin >> a;
    }
}

double calculate_delta(double a, double b, double c)
{
    return pow(b, 2.0) - 4 * (a * c);
}

int main()
{
    double a, b, c;
    enter_a(a);
    cout << "Enter b and c:";
    cin >> b >> c;
    if (calculate_delta(a, b, c) > 0)
    {
        cout << "Ci sono due soluzioni reali";
    }
    else if (calculate_delta(a, b, c) == 0)
    {
        cout << "C'e' una soluzione reale";
    }
    else
    {
        cout << "Non ci sono soluzioni reali";
    }

    return 0;
}
