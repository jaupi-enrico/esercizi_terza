#include <iostream>
using namespace std;
int main()
{

    int v[10], scelta;
    do
    {
        cout << "Inserire un numero:\n"
                "0 uscire dal programma\n"
                "1 aggiungere un numero\n"
                "2 rimuovere un numero\n"
                "3 visualizzare il vettore\n"
                "4 vistulizzare il vettore invertito\n"
                "5 inveritre gli elementi del vettore\n" ;
        cin >> scelta;
        if (scelta == 1)
        {
            int posizione;
            cout << "Inserisci la posizione del numero:";
            cin >> posizione;
            cout << "Inserisci il valore del numero:";
            cin >> v[posizione - 1];
        }
        else if (scelta == 2)
        {
            int posizione;
            cout << "Inserisci la posizione del numero:";
            cin >> posizione;

            v[posizione - 1] = -1;
        }
        else if (scelta == 3)
        {
            for (int i = 0; i < 10 && v[i] != -1; ++i)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if (scelta == 4)
        {
            for (int i = 0; i < 10 && v[i] != -1; ++i)
            {
                cout << v[9 - i] << " ";
            }
            cout << endl;
        }
        else if (scelta == 5)
        {
            for (int i = 0; i < 5; ++i)
            {
                int temp = v[i];
                v[i] = v[9 - i];
                v[9 - i] = temp;
            }
        }
        cout << endl;
    } while (scelta != 0);
    return 0;
}