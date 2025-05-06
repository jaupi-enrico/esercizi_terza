#include <iostream>
#include <set>
#include <vector>

struct Libri {
    std::string titolo;
    std::string autore;
    int anno;
    std::string editore;
    float prezzo;
};

int main() {
    std::vector<Libri> libreria;

    int answer = 0;
    while (answer != -1) {

        std::cout << "\n1 - Aggiungi libro\n"
                     "2 - Mostra numero libri\n"
                     "3 - Mostra elenco libri\n"
                     "4 - Mostra elenco libri per autore\n"
                     "5 - Mostra libri con parola\n"
                     "-1 - Esci\n";

        std::cout << "Inserisci l'opzione:";
        std::cin >> answer;
        std::cin.ignore();
        std::cout << std::endl;
        if (answer == 1) {
            Libri Libro;
            std::cout << "\nInserisci i dati del libro:\n";
            std::getline(std::cin, Libro.titolo);
            std::getline(std::cin, Libro.autore);
            std::cin >> Libro.anno;
            std::cin.ignore();
            std::getline(std::cin, Libro.editore);
            std::cin >> Libro.prezzo;
            std::cin.ignore();

            libreria.push_back(Libro);
        }
        else if (answer == 2) {
            std::cout << "\nNella libreria ci sono " << libreria.size() << " libri\n";
        }
        else if (answer == 3) {
            std::cout << "\nElenco dei libri:\n";
            for (int i = 0; i < libreria.size(); ++i) {
                std::cout << "Titolo: " << libreria.at(i).titolo << "\n";
                std::cout << "Autore: " << libreria.at(i).autore << "\n";
                std::cout << "Anno: " << libreria.at(i).anno << "\n";
                std::cout << "Editore: " << libreria.at(i).editore << "\n";
                std::cout << "Prezzo: " << libreria.at(i).prezzo << "\n\n";
            }
        }
        else if (answer == 4) {
            std::set<std::string> autori;
            for (int i = 0; i < libreria.size(); ++i) {
                if (!autori.contains(libreria.at(i).autore)) {
                    std::string autore = libreria.at(i).autore;
                    for (int j = 0; j < libreria.size(); ++j) {
                        if (autore == libreria.at(j).autore) {
                            std::cout << "Titolo: " << libreria.at(j).titolo << "\n";
                            std::cout << "Autore: " << libreria.at(j).autore << "\n";
                            std::cout << "Anno: " << libreria.at(j).anno << "\n";
                            std::cout << "Editore: " << libreria.at(j).editore << "\n";
                            std::cout << "Prezzo: " << libreria.at(j).prezzo << "\n\n";
                        }
                    }
                    autori.insert(autore);
                }
            }
        }
        else if (answer == 5) {
            std::cout << "Inserisci parola:";
            std::string parola;
            std::cout << std::endl;
            std::getline(std::cin, parola);
            std::cout << "I libri con questa parola sono:\n";
            for (int i = 0; i < libreria.size(); ++i) {
                if (libreria.at(i).titolo.find(parola) != std::string::npos) {
                    std::cout << "Titolo: " << libreria.at(i).titolo << "\n";
                    std::cout << "Autore: " << libreria.at(i).autore << "\n";
                    std::cout << "Anno: " << libreria.at(i).anno << "\n";
                    std::cout << "Editore: " << libreria.at(i).editore << "\n";
                    std::cout << "Prezzo: " << libreria.at(i).prezzo << "\n\n";
                }
            }
        }
    }

    return 0;
}