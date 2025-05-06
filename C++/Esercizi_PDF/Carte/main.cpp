#include <bits/stdc++.h>

struct Carta {
    int seme;
    int valore;
};

std::string stampa_carta(const Carta &c) {
    std::string stampa;
    if (c.valore < 10) {
        stampa = std::to_string(c.valore);
    }
    else if (c.valore == 11) {
        stampa = "Fante";
    }
    else if (c.valore == 12) {
        stampa = "Donna";
    }
    else {
        stampa = "Re";
    }

    if (c.seme == 1) {
        stampa += " di Cuori";
    }
    else if (c.seme == 2) {
        stampa += " di Quadri";
    }
    else if (c.seme == 3) {
        stampa += " di Fiori";
    }
    else if (c.seme == 4) {
        stampa += " di Picche";
    }

    return stampa;
}

std::vector<Carta> crea_mazzo() {
    std::vector<Carta> mazzo(52);
    for (int i = 0; i < mazzo.size(); ++i) {
        mazzo.at(i).seme = i / 13 + 1;
        mazzo.at(i).valore = i % 13 + 1;
    }
    return mazzo;
}

int main() {
    Carta c = {1, 1}, d;

    /*
    std::cout << "1 - Cuori\n2 - Quadri\n3 - Fiori\n4 - Picche\n";
    std::cout << "Inserisci seme:";
    std::cin >> d.seme;

    std::cout << "Inserisci il valore:";
    std::cin >> d.valore;
    */

    std::vector<Carta> mazzo = crea_mazzo();

    for (int i = 0; i < mazzo.size(); ++i) {
        std::cout << stampa_carta(mazzo.at(i)) << std::endl;
    }

    return 0;
}