#include <iostream>
using namespace std;

int divisori(int num)
{
    int d = 0;
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
        {
            d++;
        }
    }
    return d;
}

int main()
{
    int N;
    cout << "Enter N\n";
    cin >> N;
    int d = divisori(N);
    cout << "I divisori di N sono: " << d << endl;
    d = divisori(d);
    cout << "I divisori di d sono: " << d << endl;
    return 0;
}
