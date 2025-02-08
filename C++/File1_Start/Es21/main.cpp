#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int N, num;
    long long int sum;
    cout << "Enter N\n";
    cin >> N;

    cout << "Enter num" << 1 << endl;
    cin >> num;
    sum = num;

    for (int i = 1; i < N; i++)
    {
        cout << "Enter num" << i + 1 << endl;
        cin >> num;
        sum *= num;
    }

    double value = pow(sum, 1.0/N);
    cout << "The value is " << value;
    return 0;
}
