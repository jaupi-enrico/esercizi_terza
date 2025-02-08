#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));

    int N, sum = 0, count = 0;
    cout << "Enter N\n";
    cin >> N;

    while (sum <= N)
    {
        int launch = rand()%6 + 1;
        sum += launch;
        count++;
    }

    cout << "Il dado e' stato lanciato " << count - 1 << " volte";
    return 0;
}
