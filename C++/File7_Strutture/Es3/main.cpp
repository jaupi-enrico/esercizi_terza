#include <iostream>
#include <vector>

struct Scuola {
    std::string nome;
    std::string tipologia;
    std::string citta;
    int n_docenti;
    int n_studenti;
};

int main() {
    int n;
    std::cout << "Inserisci n:";
    std::cin >> n;

    std::vector<Scuola> scuole (n);


    for (int i = 0; i < n; ++i) {
        std::cin.ignore();
        std::getline(std::cin, scuole.at(i).nome);
        std::getline(std::cin, scuole.at(i).tipologia);
        std::getline(std::cin, scuole.at(i).citta);
        std::cin >> scuole.at(i).n_docenti;
        std::cin >> scuole.at(i).n_studenti;
    }

    int answer = 0;
    while (answer != -1) {
        std::cout << "\n1 - Trova scuola\n"
                     "2 - Trova scuola con piu' studenti\n"
                     "3 - Trova scuola con meno persone\n"
                     "-1 - Esci\n";

        std::cout << "Inserisci l'opzione:";
        std::cin >> answer;
        std::cout << std::endl;
        if (answer == 1) {
            std::string nome;
            std::cout << "Inserisci il nome della scuola:";
            std::cin.ignore();
            std::getline(std::cin, nome);
            for (int i = 0; i < n; ++i) {
                if (scuole.at(i).nome == nome) {
                    std::cout << "Le infromazioni della scuola " << nome << " sono\n";
                    std::cout << "Nome: " << scuole.at(i).nome << "\n";
                    std::cout << "Tipologia: " << scuole.at(i).tipologia << "\n";
                    std::cout << "Citta': " << scuole.at(i).citta << "\n";
                    std::cout << "Numero docenti: " << scuole.at(i).n_docenti << "\n";
                    std::cout << "Numero studenti: " << scuole.at(i).n_studenti << "\n";
                    break;
                }
            }
        }
        else if (answer == 2) {
            int studenti = 0;
            for (int i = 1; i < n; ++i) {
                if (scuole.at(studenti).n_studenti < scuole.at(i).n_studenti) {
                    studenti = i;
                }
            }
            std::cout << "La scuola con piu' studenti e': " << scuole.at(studenti).nome;
        }
        else if (answer == 3) {
            int studenti = 0;
            for (int i = 1; i < n; ++i) {
                if (scuole.at(studenti).n_studenti + scuole.at(studenti).n_docenti > scuole.at(i).n_studenti + scuole.at(i).n_docenti) {
                    studenti = i;
                }
            }
            std::cout << "La scuola con meno persone e': " << scuole.at(studenti).nome;
        }
    }

    return 0;
}