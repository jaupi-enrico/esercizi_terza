#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter N:\n";
    cin >> N;

    int numbers[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Enter number" << i + 1 << endl;
        cin >> numbers[i];
    }

    int max = 0;
    int min = 0;
    int delta = 0;

    for (int i = 0; i < N - 1; i++)
    {
        if (numbers[i] > numbers[i + 1])
        {
            max = numbers[i];
            min = numbers[i + 1];
        }
        else
        {
            max = numbers[i + 1];
            min = numbers[i];
        }

        if (delta < (max - min))
        {
            delta = abs((max - min));
        }
    }

    cout << delta << endl;

    return 0;
}
