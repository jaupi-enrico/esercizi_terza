#include <iostream>
using namespace std;
int main()
{
    int N, N_Random, pari_dispari;
    srand(time(NULL));

    N_Random = rand() % 5 + 1;

    cout << "Decidi se: 1 - Pari / 2 - Dispari\n";
    do
    {
        cin >> pari_dispari;
    }
    while (pari_dispari != 1 && pari_dispari != 2);

    cout << "Inserisci il numero:\n";
    cin >> N;

    if ((N_Random + N) % 2 == pari_dispari - 1)
    {
        cout << "Bravo, hai vinto, il tuo " << N << " e il " << N_Random
        << "  del computer hanno somma pari uguale a " << N + N_Random << " e tu hai scelto ";
        if (pari_dispari == 1)
        {
            cout << "pari.\n";
        }
        else
        {
            cout << "dispari.\n";
        }
    }
    else
    {
        cout << "Peccato, il computer ha tirato " << N_Random << " e con il tuo " << N
        << " fa " << N + N_Random << " purtroppo avevi scelto ";
        if (pari_dispari == 1)
        {
            cout << "pari.\n";
        }
        else
        {
            cout << "dispari.\n";
        }
    }

    return 0;
}
