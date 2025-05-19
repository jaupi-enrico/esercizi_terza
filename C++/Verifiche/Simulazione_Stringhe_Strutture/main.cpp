#include <iostream>
#include <vector>

struct Libro
{
    std::string titolo;
    std::string autore;
    int anno;
    std::string ISBN;
    int n_copie;
};

int main()
{
    std::vector<Libro> catalogo;
    srand(time(NULL));

    int prestiti_tot = 0;
    int scelta = -1;

    while (scelta != 0 && prestiti_tot < 21)
    {
        std::cout << "\n1) Inserisci un nuovo libro\n"
                 "2) Mostra l'elenco completo dei libri\n"
                 "3) Simula un prestito\n"
                 "4) Cerca un libro tramite ISBN\n"
                 "5) Cerca un libro tramite una parola\n"
                 "6) visulizza l'intero catalogo\n"
                 "7) Modifica l'anno di pubblicazione tramite ISBN\n"
                 "0) Esci dal programma\n";
        std::cout << "Scelta:";
        std::cin >> scelta;
        std::cin.ignore();

        switch (scelta)
        {
        case 1 :
            {
                Libro temp_libro;
                std::cout << "Inserisci il titolo:";
                std::getline(std::cin, temp_libro.titolo);
                std::cout << "Inserisci l'autore:";
                std::getline(std::cin, temp_libro.autore);
                std::cout << "Inserisci l'anno di pubblicazione:";
                std::cin >> temp_libro.anno;
                std::cin.ignore();
                std::cout << "Inserisci l'ISBN:";
                std::getline(std::cin, temp_libro.ISBN);
                std::cout << "Inserisci il numero di copie disponibili:";
                std::cin >> temp_libro.n_copie;
                std::cin.ignore();
                catalogo.push_back(temp_libro);
                break;
            }
        case 2:
            {
                for (int i = 0; i < catalogo.size(); ++i)
                {
                    std::cout << "Il titolo del libro e': " << catalogo.at(i).titolo << std::endl;
                    std::cout << "L'autore del libro e': " << catalogo.at(i).autore << std::endl;
                    std::cout << "L'anno di pubblicazione del libro e': " << catalogo.at(i).anno << std::endl;
                    std::cout << "L'ISBN del libro e': " << catalogo.at(i).ISBN << std::endl;
                    std::cout << "Le copie presenti del libro sono: " << catalogo.at(i).n_copie << std::endl;
                    std::cout << std::endl;
                }
                break;
            }
        case 3:
            {
                int libro;
                bool presente = false;
                do
                {
                    libro = rand() % catalogo.size();
                    presente = false;
                    for (int i = 0; i < catalogo.size(); ++i)
                    {
                        if (catalogo.at(i).n_copie > 0)
                        {
                            presente = true;
                        }
                    }
                }
                while (catalogo.at(libro).n_copie == 0 && presente);
                prestiti_tot++;
                catalogo.at(libro).n_copie--;
                std::cout << "Sono ancora disponibili " << catalogo.at(libro).n_copie << " del libro "
                        << catalogo.at(libro).titolo << std::endl;
                std::cout << "Le operazioni di prestito simulate di quest'anno sono state: " << prestiti_tot << std::endl;
                break;
            }
        case 4:
            {
                std::string ISBN;
                std::cout << "Inserisci l'ISBN da cercare:";
                std::getline(std::cin, ISBN);
                for (int i = 0; i < catalogo.size(); ++i)
                {
                    if (catalogo.at(i).ISBN == ISBN)
                    {
                        std::cout << "Il titolo del libro e': " << catalogo.at(i).titolo << std::endl;
                        std::cout << "L'autore del libro e': " << catalogo.at(i).autore << std::endl;
                        std::cout << "L'anno di pubblicazione del libro e': " << catalogo.at(i).anno << std::endl;
                        std::cout << "L'ISBN del libro e': " << catalogo.at(i).ISBN << std::endl;
                        std::cout << "Le copie presenti del libro sono: " << catalogo.at(i).n_copie << std::endl;
                        break;
                    }
                }
                std::cout << "ISBN non esistente\n";
                break;
            }
        case 5:
            {
                std::string parola;
                std::cout << "Inserisci la parola da cercare:";
                std::getline(std::cin, parola);
                bool trovato = false;
                for (int i = 0; i < catalogo.size(); ++i)
                {
                    if (catalogo.at(i).titolo.find(parola) != std::string::npos)
                    {
                        trovato = true;
                        std::cout << "Il titolo del libro e': " << catalogo.at(i).titolo << std::endl;
                        std::cout << "L'autore del libro e': " << catalogo.at(i).autore << std::endl;
                        std::cout << "L'anno di pubblicazione del libro e': " << catalogo.at(i).anno << std::endl;
                        std::cout << "L'ISBN del libro e': " << catalogo.at(i).ISBN << std::endl;
                        std::cout << "Le copie presenti del libro sono: " << catalogo.at(i).n_copie << std::endl;
                        std::cout << std::endl;
                    }
                }
                if (!trovato)
                {
                    std::cout << "Il libro non è stato trovato\n";
                }
                break;
            }
        case 6:
            {
                for (int i = 0; i < catalogo.size(); ++i)
                {
                    if (catalogo.at(i).titolo.length() > 10)
                    {
                        std::cout << "Il titolo del libro e': " << catalogo.at(i).titolo.substr(0, 10) << "..." << std::endl;
                    }
                    else
                    {
                        std::cout << "Il titolo del libro e': " << catalogo.at(i).titolo << std::endl;
                    }
                    std::cout << "L'autore del libro e': " << catalogo.at(i).autore << std::endl;
                    std::cout << "L'anno di pubblicazione del libro e': " << catalogo.at(i).anno << std::endl;
                    std::cout << "L'ISBN del libro e': " << catalogo.at(i).ISBN << std::endl;
                    std::cout << "Le copie presenti del libro sono: " << catalogo.at(i).n_copie << std::endl;
                    std::cout << std::endl;
                }
                break;
            }
        case 7:
            {
                std::string ISBN;
                std::cout << "Inserisci l'ISBN da cercare:";
                std::getline(std::cin, ISBN);
                bool presente = false;
                for (int i = 0; i < catalogo.size(); ++i)
                {
                    if (catalogo.at(i).ISBN == ISBN)
                    {
                        presente = true;
                        std::cout << "Inserisci il nuovo anno di pubblicazione:";
                        std::cin >> catalogo.at(i).anno;
                        std::cin.ignore();
                        break;
                    }
                }
                if (!presente)
                {
                    std::cout << "Non e' stato trovato nessun libro con l'ISBN " << ISBN << std::endl;
                }
                break;
            }
        case 0:
            {
                break;
            }
        default:
            {
                std::cout << "Hai inserito erroneamente " << scelta << std::endl;
                break;
            };
        }
    }

    return 0;
}