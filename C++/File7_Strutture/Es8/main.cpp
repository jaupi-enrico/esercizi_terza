#include <fstream>
#include <iostream>
#include <set>
#include <vector>

struct Esame {
    std::string materia;
    int voto;
    std::string data;
};

struct Studente {
    std::string nome;
    std::string n_matricola;
    std::vector<std::string> materie;
    std::vector<Esame> esami;
};

int main() {

    std::ifstream cin ("input.txt");

    if (!cin) {
        std::cout << "File input.txt non trovato" << std::endl;
        return 1;
    }

    int n;
    cin >> n;
    cin.ignore();

    std::vector<Studente> studenti (n);

    for (int i = 0; i < n; ++i) {
        std::getline(cin, studenti.at(i).nome);
        std::getline(cin, studenti.at(i).n_matricola);
        int m;
        cin >> m;
        cin.ignore();
        studenti.at(i).materie.resize(m);
        for (int j = 0; j < m; ++j) {
            std::getline(cin, studenti.at(i).materie.at(j));
        }
        cin >> m;
        cin.ignore();
        studenti.at(i).esami.resize(m);
        for (int j = 0; j < m; ++j) {
            std::getline(cin, studenti.at(i).esami.at(j).materia);
            cin >> studenti.at(i).esami.at(j).voto;
            cin.ignore();
            std::getline(cin, studenti.at(i).esami.at(j).data);
        }
    }

    cin.close();

    std::cout << "\nElenco opzioni:\n"
                 "1) Visualizza numero studenti che hanno sostenuto una materia\n"
                 "2) Visualizza gli studenti con un voto tra 18 e 25 di una materia\n"
                 "3) Visualizza date appelli di una materia\n"
                 "4) Stampa dati di uno studente con il numero matricola\n"
                 "5) Esci\n\n";

    int scelta;
    std::cout << "Inserisci la tua scelta:";
    std::cin >> scelta;
    std::cin.ignore();

    switch (scelta) {
        case 1: {
            std::string materia;
            std::cout << "Inserisci la Materia:";
            std::getline(std::cin, materia);
            int n_studenti = 0;
            for (int i = 0; i < studenti.size(); ++i) {
                for (int j = 0; j < studenti.at(i).esami.size(); ++j) {
                    if (studenti.at(i).esami.at(j).materia == materia) {
                        n_studenti++;
                    }
                }
            }
            std::cout << "Il numero di studenti che ha sostenuto " << materia << " e' " << n_studenti << std::endl;
            break;
        }
        case 2: {
            std::string materia;
            std::cout << "Inserisci la Materia:";
            std::getline(std::cin, materia);
            std::cout << "Elenco studenti che hanno un voto compreso tra 18 e 25 in " << materia << ":\n";
            for (int i = 0; i < studenti.size(); ++i) {
                for (int j = 0; j < studenti.at(i).esami.size(); ++j) {
                    if (studenti.at(i).esami.at(j).materia == materia &&
                        studenti.at(i).esami.at(j).voto <= 25 &&
                        studenti.at(i).esami.at(j).voto >= 18) {
                        std::cout << studenti.at(i).nome;
                    }
                }
            }
            break;
        }
        case 3: {
            std::string materia;
            std::cout << "Inserisci la Materia:";
            std::getline(std::cin, materia);
            std::set<std::string> date_appelli;
            for (int i = 0; i < studenti.size(); ++i) {
                for (int j = 0; j < studenti.at(i).esami.size(); ++j) {
                    if (studenti.at(i).esami.at(j).materia == materia) {
                        date_appelli.insert(studenti.at(i).esami.at(j).data);
                    }
                }
            }
            if (date_appelli.empty()) {
                std::cout << "Non ci sono date disponibili per " << materia << std::endl;
            }
            else {
                std::string anno;
                std::cout << "Inserisci l'anno:";
                std::getline(std::cin, anno);
                std::cout << "Elenco appelli di " << materia << " nel " << anno << std::endl;
                for (auto &appello: date_appelli) {
                    if (appello.find(anno) != std::string::npos) {
                        std::cout << appello << std::endl;
                    }
                }
            }
            break;
        }
        case 4 : {
            std::string n_matricola;
            std::cout << "Inserisci il numero di matricola:";
            std::getline(std::cin, n_matricola);
            for (int i = 0; i < studenti.size(); ++i) {
                if (studenti.at(i).n_matricola == n_matricola) {
                    std::cout << "\nDati studente " << n_matricola << std::endl;
                    std::cout << "Nome: " << studenti.at(i).nome << std::endl;
                    std::cout << "Numero matricola: " << studenti.at(i).n_matricola << std::endl;
                    std::cout << "Materie: ";
                    for (int j = 0; j < studenti.at(i).materie.size(); ++j) {
                        std::cout << studenti.at(i).materie.at(j) << " ";
                    }
                    std::cout << "\nEsami:\n";
                    for (int j = 0; j < studenti.at(i).esami.size(); ++j) {
                        std::cout << studenti.at(i).esami.at(j).materia
                        << " " << studenti.at(i).esami.at(j).voto << " "
                        << studenti.at(i).esami.at(j).data << std::endl;
                    }
                    break;
                }
            }
            break;
        }
    }

    return 0;
}