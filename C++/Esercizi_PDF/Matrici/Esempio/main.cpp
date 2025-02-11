#include <iostream>

int main()
{
    const int MESI = 12;
    const int GIORNI = 31;
    float diario[MESI][GIORNI];

    //Inizializza matrice
    for (int i = 0; i < MESI; ++i)
    {
        for (int j = 0; j < GIORNI; ++j)
        {
            diario[i][j] = 0;
        }
    }

    //Inserimento registrazione una singola cosa
    int mese, giorno, n;
    float corsa;
    std::cout << "Inserisci n: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cout << "inserisci il mese (1 - 12): ";
        std::cin >> mese;
        std::cout << "inserisci il giorno (1 - 31): ";
        std::cin >> giorno;
        std::cout << "Quanto hai corso in questa data? (km)";
        std::cin >> corsa;

        //inserimento input
        diario[mese - 1][giorno - 1] = corsa;
    }

    double sum = 0;

    //Stampa matrice
    for (int i = 0; i < MESI; ++i)
    {
        for (int j = 0; j < GIORNI; ++j)
        {
            sum += diario[i][j];
            if (diario[i][j] > 0)
            {
                std::cout << diario[i][j] << " km in data " << j + 1 << "/" << i + 1 << std::endl;
            }
        }
    }

    //stampa somma
    std::cout << "In totale durante l'anno ha corso " << sum << " km\n";
    return 0;
}