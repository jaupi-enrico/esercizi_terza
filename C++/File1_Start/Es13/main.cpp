#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    int N;
    double sum = 0;

    do
    {
        count++;
        cout << "Enter number" << count << endl;
        cin >> N;
        sum += N;
    }
    while (N > 0);

    double value = sum / (double) count;

    cout << value << endl;

    return 0;
}
