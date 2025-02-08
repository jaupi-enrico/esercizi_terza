#include <iostream>
using namespace std;
int main()
{
    int N;
    int N_reverse = 0;
    cout << "Enter N\n";
    cin >> N;

    while (N > 0)
    {
        int number = N % 10;
        N /= 10;
        N_reverse *= 10;
        N_reverse += number;
    }

    cout << N_reverse;
    return 0;
}
