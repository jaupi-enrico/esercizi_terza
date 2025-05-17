#include <bits/stdc++.h>
#include <windows.h>

struct Scelta {
    std::string testo;
    int sezione_successiva;
};

struct Sezione {
    std::string scena;
    Scelta scelte[3];
};

void stampa_sezione(const Sezione &s) {
    std::cout << s.scena << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << (i + 1) << ") " << s.scelte[i].testo << std::endl;

    }
}

int main() {
    SetConsoleOutputCP(65001);
    std::ifstream in("storia.txt");
    std::ofstream out("output.txt");

    if (!in) {
        std::cout << "File di input non letto!\n";
        return 1;
    }

    std::vector<Sezione> Sezioni;
    std::string temp;

    while (std::getline(in, temp)) {
        Sezione s;
        s.scena = temp;
        //leggo le scelte
        for (int i = 0; i < 3; ++i) {
            std::getline(in, temp);
            s.scelte[i].testo = temp;
            std::getline(in, temp);
            s.scelte[i].sezione_successiva = std::stoi(temp);
        }
        Sezioni.push_back(s);
    }

    in.close();

    int sezione_corrente = 0;
    while (sezione_corrente != -1) {
        stampa_sezione(Sezioni.at(sezione_corrente));
        int scelta;
        std::cout << "Inserisici la scelta:";
        std::cin >> scelta;
        sezione_corrente = Sezioni.at(sezione_corrente).scelte[scelta - 1].sezione_successiva;
        std::cout << std::endl;
    }

    std::cout << "END GAME!";

    return 0;
}
