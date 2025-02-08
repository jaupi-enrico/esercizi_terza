#include <iostream>
using namespace std;
int main()
{
    int N, num, sum = 0;
    cout << "Insert the number of inputs\n";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << "Insert the num " << i + 1 << endl;
        cin >> num;

        if (num % 10 == 0)
        {
            sum += num;
        }
    }

    cout << "La somma dei multipli di 10 e' " << sum;
    return 0;
}
