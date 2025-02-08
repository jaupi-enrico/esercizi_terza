#include <iostream>
using namespace std;
int main()
{
    int N;

    cout << "Insert the number\n";
    cin >> N;

    if (N <= 0)
    {
        do
        {
            cout << "Reinsert the number (It needs to be positive)\n";
            cin >> N;
        }
        while (N <= 0);
    }
    return 0;
}
