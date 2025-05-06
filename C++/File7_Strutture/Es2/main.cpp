#include <iostream>
#include <vector>

struct Persona {
    std::string nome;
    std::string cognome;
    std::string sesso;
    std::string data_nascita;
    std::string luogo_nascita;
};

int main() {

    int n;
    std::cout << "Inserisci il numero di persone:";
    std::cin >> n;

    std::vector<Persona> persone (n);
    std::cin.ignore();

    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, persone.at(i).nome);
        std::getline(std::cin, persone.at(i).cognome);
        std::getline(std::cin, persone.at(i).sesso);
        std::getline(std::cin, persone.at(i).data_nascita);
        std::getline(std::cin, persone.at(i).luogo_nascita);
    }

    std::string cognome;
    std::cout << "Inserisci il cognome da cercare:";
    std::getline(std::cin, cognome);
    for (int i = 0; i < n; ++i) {
        if (persone.at(i).cognome == cognome) {
            std::cout << "Le informazioni di " << cognome << " sono\n";
            std::cout << "Nome: " << persone.at(i).nome << "\n";
            std::cout << "Cognome: " << persone.at(i).cognome << "\n";
            std::cout << "Sesso: " << persone.at(i).sesso << "\n";
            std::cout << "Data di nascita: " << persone.at(i).data_nascita << "\n";
            std::cout << "Luogo di nascita: " << persone.at(i).luogo_nascita << "\n";
            break;
        }
        if (i == n) {
            std::cout << "Nessuna persona trovata con questo cognome\n";
        }
    }

    return 0;
}