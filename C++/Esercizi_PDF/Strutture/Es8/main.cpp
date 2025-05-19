#include <iostream>
#include <vector>
#include <fstream>

struct Voto {
    std::string materia;
    float valutazione;
};

struct Alunno {
    std::string nome;
    std::string cognome;
    std::vector<Voto> voti;
};

struct Docente {
    std::string nome;
    std::string cognome;
    std::string materia;
};

struct Classe {
    std::vector<Docente> Docenti;
    std::vector<Alunno> Alunni;
};

int main() {

    std::ifstream cin("input.txt");

    Classe classe_3AI;

    int n_studenti;
    cin >> n_studenti;
    cin.ignore();

    for (int i = 0; i < n_studenti; ++i) {
        Alunno studente;

        std::getline(cin, studente.nome);
        std::getline(cin, studente.cognome);
        int n;
        cin >> n;
        cin.ignore();

        for (int j = 0; j < n; ++j) {
            Voto v;
            std::getline(cin, v.materia);
            cin >> v.valutazione;
            cin.ignore();
            studente.voti.push_back(v);
        }

        classe_3AI.Alunni.push_back(studente);
    }

    int n_docenti;
    cin >> n_docenti;
    cin.ignore();

    for (int i = 0; i < n_docenti; ++i) {
        Docente insegnante;

        std::getline(cin, insegnante.nome);
        std::getline(cin, insegnante.cognome);
        std::getline(cin, insegnante.materia);

        classe_3AI.Docenti.push_back(insegnante);
    }

    return 0;
}