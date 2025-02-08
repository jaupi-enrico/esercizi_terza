#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    do
    {
        cout << "Enter number:\n";
        cin >> num;
        sum += num;
    }
    while (sum <= 100);

    sum -= num;

    cout << sum << endl;

    return 0;
}
