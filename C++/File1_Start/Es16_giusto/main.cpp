#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int voto, somma_voti = 0, N_voti;

    cout << "Inserisci numero di materie\n";
    cin >> N_voti;

    for (int i = 0; i < N_voti; i++)
    {
        cout << "Inserisci il tuo voto nella materia N" << i + 1 << endl;
        cin >> voto;
        somma_voti += voto;
    }

    float value = (float)somma_voti/N_voti;
    int cont_value = 0;

    int students;
    cout << "Inserisci il numero di studenti\n";
    cin >> students;

    for (int i = 0; i < students; i++)
    {
        somma_voti = 0;
        for (int j = 0; j < N_voti; j++)
        {
            cout << "Inserisci il voto di S" << i + 1 << " nella materia N" << j + 1 << endl;
            cin >> voto;
            somma_voti += voto;
        }
        if ((float)somma_voti/N_voti == value)
        {
            cont_value++;
        }
    }

    if (cont_value == 0)
    {
        cout << "Non ci sono studenti che hanno la tua stessa media";
    }
    else if (cont_value == 1)
    {
        cout << "C'è uno studente che ha la tua stessa media";
    }
    else
    {
        cout << "Ci sono " << cont_value << " studenti con la tua stessa media";
    }

    return 0;
}
