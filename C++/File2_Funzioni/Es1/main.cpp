#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
    double len = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    return len;
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter x1:\n";
    cin >> x1;
    cout << "Enter y1:\n";
    cin >> y1;
    cout << "Enter x2:\n";
    cin >> x2;
    cout << "Enter y2:\n";
    cin >> y2;
    cout << "Enter x3:\n";
    cin >> x3;
    cout << "Enter y3:\n";
    cin >> y3;

    double AB = distance(x1, y1, x2, y2);
    double BC = distance(x2, y2, x3, y3);
    double AC = distance(x1, y1, x3, y3);

    cout << "AB is :\n";
    cout << AB << endl;
    cout << "BC is :\n";
    cout << BC << endl;
    cout << "AC is :\n";
    cout << AC << endl;

    double Perimeter = AB + BC + AC;
    cout << "The perimeter is :\n" << Perimeter;
    return 0;
}
