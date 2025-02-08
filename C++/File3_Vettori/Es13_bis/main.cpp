#include <iostream>
#include <vector>
using namespace std;
int main()
{
    srand(time(NULL));
    vector<int> v1, v2, v3;
    int scelta;
    for (int i = 0; i < 20; ++i)
    {
        v1.push_back(rand() % 21);
        v2.push_back(rand() % 21 + 10);
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
            for (int i = 0; i < v1.size(); ++i)
            {
                cout << v1.at(i) << " ";
            }
            cout << endl << "v2 : ";
            for (int i = 0; i < v2.size(); ++i)
            {
                cout << v2.at(i) << " ";
            }
            cout << endl << "v3 : ";
            for (int i = 0; i < v3.size(); ++i)
            {
                cout << v3.at(i) << " ";
            }
            cout << endl;
        }
        else if (scelta == 2)
        {
            for (int i = 0; i < v1.size(); ++i)
            {
                v3.push_back(v1.at(i));
                v3.push_back(v2.at(i));
            }
        }
        else if (scelta == 3)
        {
            int sum;
            for (int i = 0; i < v1.size(); ++i)
            {
                sum += v1.at(i);
            }
            for (int i = 0; i < v1.size(); ++i)
            {
                if (v1.at(i) > sum/v1.size())
                {
                    v2.at(i) = v1.at(i);
                }
            }
            cout << endl;
        }
        else if (scelta == 4)
        {
            int common[100] = {0};
            for (int i = 0; i < v1.size(); ++i)
            {
                for (int j = 0; j < v2.size(); ++j)
                {
                    if (v1.at(i) == v2.at(j))
                    {
                        common[v1.at(i)] = v1.at(i);
                    }
                }
            }
            cout << "I numeri in comune sono: ";
            for (int i = 0; i < 100; ++i)
            {
                if (common[i] != 0)
                {
                    cout << common[i] << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    } while (scelta != 0);
    return 0;
}