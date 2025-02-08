#include <iostream>
using namespace std;

bool in_range(int inizio, int fine, int number)
{
    if (number >= inizio && number <= fine)
    {
        return true;
    }
    return false;
}

int main()
{
    int inizio, fine, number;
    cout << "Inserisci il range:";
    cin >> inizio >> fine;
    cout << "Inserisci il numero:";
    cin >> number;

    if (in_range(inizio, fine, number))
    {
        cout << "Il numero appartiene al range\n";
    }
    else
    {
        cout << "Il numero non appartiene al range\n";
    }
    return 0;
}
