#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Inserisci N\n";
    cin >> N;

    int min, max, num;
    cout << "Inserisci num1" << endl;
    cin >> num;
    min = num;
    max = num;
    for (int i = 0; i < N - 1; i++)
    {
        cout << "Inserisci num" << i + 1 << endl;
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        else if (num < min)
        {
            min = num;
        }
    }
    cout << "The min number is: " << min << endl;
    cout << "The max number is: " << max << endl;

    return 0;
}
