#include <iostream>
using namespace std;

void RobinHood (double &x, double &y)
{
    double sum = x + y;
    x = sum/2.0;
    y = sum/2.0;

}

int main()
{
    double x, y;
    cout << "Enter 2 amount of money: ";
    cin >> x >> y;
    RobinHood(x, y);
    cout << "The amount of money for both is: " << x << endl;
    return 0;
}
