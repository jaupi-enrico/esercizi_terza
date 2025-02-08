#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int v1[20], v2[20], v3[40], v4[31] = {0}, scelta;
    for (int i = 0; i < 20; ++i)
    {
        v1[i] = rand() % 21;
        v2[i] = rand() % 21 + 10;
    }
    do
    {
        cout << "Inserire un numero:\n"
                "0 uscire dal programma\n"
                "1 visualizzare i vettori\n"
                "2 fondere i due vettori\n"
                "3 trasferire in v2 tutti i valori di v1 maggiori della media\n"
                "4 visualizzare gli elementi comuni tra v1 e v2\n" ;
        cin >> scelta;
        if (scelta == 1)
        {
            cout << "v1 : ";
            for (int i = 0; i < 20; ++i)
            {
                cout << v1[i] << " ";
            }
            cout << endl << "v2 : ";
            for (int i = 0; i < 20; ++i)
            {
                cout << v2[i] << " ";
            }
            cout << endl;
        }
        else if (scelta == 2)
        {
            for (int i = 0; i < 20; ++i)
            {
                v3[i] = v1[i];
                v3[20 + i] = v2[i];
            }
        }
        else if (scelta == 3)
        {
            int sum;
            for (int i = 0; i < 20; ++i)
            {
                sum += v1[i];
            }
            for (int i = 0; i < 20; ++i)
            {
                if (v1[i] > sum/20)
                {
                    v2[i] = v1[i];
                }
            }
            cout << endl;
        }
        else if (scelta == 4)
        {
            for (int i = 0; i < 20; ++i)
            {
                if (v1[i] == v2[i])
                {
                    v4[v1[i]] = v1[i];
                }
            }
            for (int i = 0; i < 20; ++i)
            {
                if (v4[i] != 0)
                {
                    cout << v4[i] << " ";
                }
            }
        }
        cout << endl;
    } while (scelta != 0);
    return 0;
}