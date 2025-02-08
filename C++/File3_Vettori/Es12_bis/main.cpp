#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int scelta;
    vector<int> v;
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
            int n;
            cout << "Inserisci il valore del numero:";
            cin >> n;
            v.push_back(n);
        }
        else if (scelta == 2)
        {
            int posizione;
            cout << "Inserisci la posizione del numero:";
            cin >> posizione;

            v.at(posizione - 1) = -1;
        }
        else if (scelta == 3)
        {
            for (int i = 0; i < v.size() && v.at(i) != -1; ++i)
            {
                cout << v.at(i) << " ";
            }
            cout << endl;
        }
        else if (scelta == 4)
        {
            for (int i = 0; i < v.size() && v.at(i) != -1; ++i)
            {
                cout << v.at(v.size() - 1 - i) << " ";
            }
            cout << endl;
        }
        else if (scelta == 5)
        {
            for (int i = 0; i < (v.size() - v.size() % 2) / 2; ++i)
            {
                int temp = v.at(i);
                v.at(i) = v.at(v.size() - 1 - i);
                v.at(v.size() - 1 - i) = temp;
            }
        }
        cout << endl;
    } while (scelta != 0);
    return 0;
}