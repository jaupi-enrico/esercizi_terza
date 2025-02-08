#include <iostream>
#include <algorithm> // Per std::sort
using namespace std;
int main()
{
    srand(time(NULL));
    int n, scelta;
    cout << "Inserisci n:";
    cin >> n;
    int v[n];
    for (int i = 0; i < n; ++i)
    {
        v[i] = rand() % 10 + 1;
    }
    do
    {
        cout << "Inserire un numero:\n"
                "0 esci dal programma\n"
                "1 determinare la moda statistica degli elementi in esso contenuti\n"
                "2 individuare gli elementi in esso ripetuti e quante volte lo sono\n"
                "3 eliminare gli elementi ripetuti\n"
                "4 ordinare il vettore in senso crescente\n"
                "5 disordinare il vettore riordinato\n" ;
        cin >> scelta;
        if (scelta == 1)
        {
            int frequenza = 0, numero = 0, frequenza_temp = 0;
            for (int i = 0; i < n; ++i)
            {
                frequenza_temp = 0;
                for (int j = 0; j < n; ++j)
                {
                    if (v[i] == v[j])
                    {
                        frequenza_temp++;
                    }
                }
                if (frequenza_temp > frequenza)
                {
                    frequenza = frequenza_temp;
                    numero = v[i];
                }
            }
            cout << "Il numero " << numero << " e' ripetuto " << frequenza << " volte\n";
        }
        else if (scelta == 2)
        {
            int frequenza = 0, controllati[n] = {0};
            bool presente = false;
            for (int i = 0; i < n; ++i)
            {
                presente = false;
                frequenza = 0;
                for (int j = 0; j < n; ++j)
                {
                    if (v[i] == v[j])
                    {
                        frequenza++;
                    }
                }
                for (int j = 0; j < n; ++j)
                {
                    if (v[i] == controllati[j] && i != j)
                    {
                        presente = true;
                    }
                    controllati[i] = v[i];
                }
                if (!presente)
                {
                    cout << "Il numero " << v[i] << " e' ripetuto " << frequenza << " volte\n";
                }
            }
        }
        else if (scelta == 3)
        {
            bool ripetuto = false;
            for (int i = 0; i < n; ++i)
            {
                for (int j = i; j < n; ++j)
                {
                    if (v[i] == v[j] && i != j)
                    {
                        ripetuto = true;
                    }
                }
                if (ripetuto)
                {
                    int numero = v[i];
                    for (int j = 0; j < n; ++j)
                    {
                        if (v[j] == numero)
                        {
                            v[j] = -1;
                        }
                    }
                }
                ripetuto = false;
            }
        }
        else if (scelta == 4)
        {
            std::sort(v, v + n);
        }
        else if (scelta == 5)
        {
            for (int i = 0; i < 4 * n; ++i)
            {
                int num1, num2, temp;
                num1 = rand() % n;
                num2 = rand() % n;
                temp = v[num1];
                v[num1] = v[num2];
                v[num2] = temp;
            }
        }
        cout << endl;
    } while (scelta != 0);
    return 0;
}