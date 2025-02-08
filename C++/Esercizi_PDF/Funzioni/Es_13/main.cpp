#include <iostream>
using namespace std;

void somma_tempo(int &h1, int &m1, int h2, int m2)
{
    h1 += h2;
    m1 += m2;
    while (m1 >= 60)
    {
        m1 -= 60;
        h1++;
    }
}

int main()
{
    int h1, m1, h2, m2, n;
    cout << "Enter n:";
    cin >> n;
    cout << "Enter time:";
    cin >> h1 >> m1;
    for (int i = 0; i < n - 1; ++i)
    {
        cout << "Enter time:";
        cin >> h2 >> m2;
        somma_tempo(h1, m1, h2, m2);
    }

    cout << "Il tempo complessivo e' di " << h1 << " ore e " << m1 << " minuti";
    return 0;
}
