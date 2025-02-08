#include <iostream>
using namespace std;
int main()
{
    int limit = 500;

    for (int A = 1; A < limit; A++)
    {
        for (int B = A; B < limit; B++)
        {
            for (int C = 1; C < limit; C++)
            {
                if (A * A + B * B == C * C)
                {
                    cout << A << ", " << B << ", " << C << endl;
                }
            }
        }
    }
    return 0;
}