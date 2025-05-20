#include <iostream>
#include <vector>

struct Libro {
    std::string titolo;
    std::string autore;
    int anno;
    std::string ISBN;
    int n_copie;
    int n_prestiti;
};

void stampa_libro(const Libro &libro, bool long_name) {
    if (long_name && libro.titolo.length() > 10) {
        std::cout << "Il titolo del libro e': " << libro.titolo.substr(0, 10) << "..." << std::endl;
    }
    else {
        std::cout << "Il titolo del libro e': " << libro.titolo << std::endl;
    }
    std::cout << "L'autore del libro e': " << libro.autore << std::endl;
    std::cout << "L'anno di pubblicazione del libro e': " << libro.anno << std::endl;
    std::cout << "L'ISBN del libro e': " << libro.ISBN << std::endl;
    std::cout << "Il numero di copie disponibili del libro sono: " << libro.n_copie << std::endl;
    std::cout << "Il numero di copie in prestito del libro sono: " << libro.n_prestiti << std::endl;
}

void aggiungi_libro(std::vector<Libro> &catalogo, int &prestiti_totali) {
    Libro temp_lib;
    std::cout << "Inserisci il nome del libro:";
    std::getline(std::cin, temp_lib.titolo);
    std::cout << "Inserisci l'autore del libro:";
    std::getline(std::cin, temp_lib.autore);
    std::cout << "Inserisci l'anno di pubblicazione del libro:";
    std::cin >> temp_lib.anno;
    std::cin.ignore();
    std::cout << "Inserisci l'ISBN del libro:";
    std::getline(std::cin, temp_lib.ISBN);
    std::cout << "Inserisci il numero di copie disponibili:";
    std::cin >> temp_lib.n_copie;
    std::cin.ignore();
    std::cout << "Inserisci il numero di copie in prestito:";
    std::cin >> temp_lib.n_prestiti;
    std::cin.ignore();
    prestiti_totali += temp_lib.n_prestiti;
    catalogo.push_back(temp_lib);
}

void effettua_prestito(std::vector<Libro> &catalogo, const int libro, int &prestiti_tot) {
    catalogo.at(libro).n_copie--;
    catalogo.at(libro).n_prestiti++;
    prestiti_tot++;

    std::cout << "Il numero di copie rimanenti di " << catalogo.at(libro).titolo << " e': " << catalogo.at(libro).n_copie << std::endl;
    std::cout << "Il numero di prestiti simulati attuale e': " << prestiti_tot << std::endl;
}

int main() {
    srand(time(NULL));
    std::vector<Libro> catalogo;

    int prestiti_tot = 0;
    int scelta = -1;

    while (scelta != 0 && prestiti_tot < 20) {
        std::cout << "\n1) Inserisci nuovo libro\n"
                     "2) Mostra l'elenco dei libri\n"
                     "3) Simula operazione di prestitio\n"
                     "4) Trova libro tramite ISBN\n"
                     "5) Trova libro tramite parola\n"
                     "6) Visualizza elenco libri\n"
                     "7) Modifica anno di pubblicazione tramite ISBN\n"
                     "0) Esci\n\n";
        std::cout << "Scelta:";
        std::cin >> scelta;
        std::cin.ignore();

        switch (scelta) {
            case 1 : {
                aggiungi_libro(catalogo, prestiti_tot);
                break;
            }
            case 2 : {
                for (int i = 0; i < catalogo.size(); ++i) {
                    std::cout << std::endl;
                    stampa_libro(catalogo.at(i), false);
                }
                break;
            }
            case 3 : {
                int libro = -1;
                bool presente = false;
                do {
                    libro = rand() % catalogo.size();
                    for (int i = 0; i < catalogo.size(); ++i) {
                        if (catalogo.at(i).n_copie > 0) {
                            presente = true;
                        }
                    }
                }
                while (catalogo.at(libro).n_copie == 0 && presente);

                if (!presente) {
                    std::cout << "Non e' disponibile nessun libro per il prestito\n";
                    break;
                }

                effettua_prestito(catalogo, libro, prestiti_tot);

                break;
            }
            case 4 : {
                std::string ISBN;
                std::cout << "Inserici l'ISBN da cercare:";
                std::getline(std::cin, ISBN);
                for (int i = 0; i < catalogo.size(); ++i) {
                    if (catalogo.at(i).ISBN == ISBN) {
                        std::cout << std::endl;
                        stampa_libro(catalogo.at(i), false);
                        break;
                    }
                }
                std::cout << "Non e' stato trovato nessun libro con questo ISBN\n";
                break;
            }
            case 5 : {
                std::string parola;
                bool presente = false;
                std::cout << "Inserici la parola da cercare:";
                std::getline(std::cin, parola);
                for (int i = 0; i < catalogo.size(); ++i) {
                    if (catalogo.at(i).titolo.find(parola) != std::string::npos) {
                        presente = true;
                        std::cout << std::endl;
                        stampa_libro(catalogo.at(i), false);
                    }
                }
                if (!presente) {
                    std::cout << "Non e' stato trovato nessun libro con questa parola\n";
                }
                break;
            }
            case 6 : {
                for (int i = 0; i < catalogo.size(); ++i) {
                    std::cout << std::endl;
                    stampa_libro(catalogo.at(i), true);
                }
                break;
            }
            case 7 : {
                std::string ISBN;
                bool presente = false;
                std::cout << "Inserici l'ISBN da cercare:";
                std::getline(std::cin, ISBN);
                for (int i = 0; i < catalogo.size(); ++i) {
                    if (catalogo.at(i).ISBN == ISBN) {
                        presente = true;
                        std::cout << "Inserisci il nuovo anno di pubblicazione:";
                        std::cin >> catalogo.at(i).anno;
                        break;
                    }
                }
                if (!presente) {
                    std::cout << "Non e' stato trovato nessun libro con questo ISBN\n";
                }
                break;
            }
            case 0 : {
                break;
            }
            default: {
                std::cout << "L'opzione selezionata non e' valida\n";
            };
        }
    }

    if (prestiti_tot >= 20) {
        int copie = 0;
        for (int i = 1; i < catalogo.size(); ++i) {
            if (catalogo.at(copie).n_copie > catalogo.at(i).n_copie) {
                copie = i;
            }
        }
        std::cout << "\nIl libro con meno copie disponibili e':\n";
        stampa_libro(catalogo.at(copie), false);
    }

    return 0;
}