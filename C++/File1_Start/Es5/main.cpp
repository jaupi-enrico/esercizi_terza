#include <iostream>
using namespace std;
int main()
{
    int number, N, pos = 0, neg = 0, zero = 0;

    cout << "Enter number of inputs: \n";
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << "Enter number " << i << ": \n";
        cin >> number;
        if (number == 0)
        {
            zero++;
        }
        else if (number < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
    }

    cout << "You entered " << pos << " positive number, " << neg << " negative number and " << zero << " null number";
    return 0;
}
