#include <iostream>
using namespace std;

void sum_degrees(int &grd1, int &prm1, int grd2, int prm2)
{
        grd1 += grd2;
        prm1 += prm2;
        while (prm1 >= 60)
        {
            prm1 -= 60;
            grd1++;
        }
}

int main()
{
    int n;
    cout << "Enter the number of angles:";
    cin >> n;
    int grd1, prm1, grd2, prm2;
    cout << "Enter the value of the angle1:";
    cin >> grd1 >> prm1;
    for (int i = 1; i < n; ++i)
    {
        cout << "Enter the value of the angle" << i <<":";
        cin >> grd2 >> prm2;
        sum_degrees(grd1, prm1, grd2, prm2);
    }
    cout << "The summed angle is " << grd1 << " " << prm1 << "\"\n";
    return 0;
}
