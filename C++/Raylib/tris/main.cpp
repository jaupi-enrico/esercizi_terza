#include <iostream>

const int DIM = 3;

void riempi (int tris[][DIM]){
    for (int i=0; i<DIM; ++i){
        for (int j=0; j<DIM; ++j){
            tris[i][j]=0;
        }
    }
}

char converti(int n) {
    if (n == 1) {
        return 'X';
    }
    if (n == 2) {
        return 'O';
    }
    return ' ';
}

bool mossa_valida(int tris[][DIM], int r, int c) {
    if (r < 0 || r >= DIM)
        return false;
    if (c < 0 || c >= DIM)
        return false;
    if (tris[r][c] != 0)
        return false;
    return true;
}

void stampa(int tris[][DIM]) {
    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            std::cout << " " << converti(tris[i][j]) << " ";
            if (j != DIM - 1) {
                std::cout << "|";
            }
        }
        std::cout << std::endl;
        if (i != DIM - 1) {
            for (int j = 0; j < DIM*4 - 1; ++j) {
                std::cout << "-";
            }
            std::cout << std::endl;
        }
    }
}

int verifica_stato(int tris[][DIM]) {
    for (int i = 0; i < DIM; ++i) {
        if (tris[i][0] == tris[i][1] && tris[i][1] == tris[i][2] && tris[i][0] != 0) {
            return tris[i][0];
        }
    }
    for (int i = 0; i < DIM; ++i) {
        if (tris[0][i] == tris[1][i] && tris[1][i] == tris[2][i] && tris[0][i] != 0) {
            return tris[0][i];
        }
    }
    if (tris[0][0] == tris[1][1] && tris[1][1] == tris[2][2] && tris[0][0] != 0) {
        return tris[0][0];
    }
    if (tris[0][2] == tris[1][1] && tris[1][1] == tris[2][0] && tris[0][2] != 0) {
        return tris[0][0];
    }
    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            if (tris[i][j] == 0) {
                return 0;
            }
        }
    }
    return 3;
}

int main() {
    std::cout << "IL GIOCO DEL TRIS\n";
    char stato = 'S';

    while (stato == 'S') {
        std::cout << "\n";
        int tris[DIM][DIM];
        int riga, colonna;
        bool giocatore = true;
        riempi (tris);
        for (int i = 0; i < 9; ++i) {
            std::cout << "Turno di giocatore " << giocatore << "\n\n";
            stampa(tris);
            std::cout << "\n";
            std::cout << "Inserisci riga (1 - 3):";
            std::cin >> riga;
            std::cout << "Inserisci colonna (1 - 3):";
            std::cin >> colonna;
            while (mossa_valida(tris, riga - 1, colonna - 1) == false) {
                std::cout << "Mossa non valida\n";
                std::cout << "Reinserisci riga (1 - 3):";
                std::cin >> riga;
                std::cout << "Reinserisci colonna (1 - 3):";
                std::cin >> colonna;
            }
            if (giocatore) {
                tris[riga - 1][colonna - 1] = 1;
            }
            else {
                tris[riga - 1][colonna - 1] = 2;
            }
            giocatore = !giocatore;
            if (verifica_stato(tris) == 1) {
                std::cout << "\nVittoria di X\n";
                giocatore = true;
                break;
            }
            if (verifica_stato(tris) == 1) {
                std::cout << "\nVittoria di O\n";
                giocatore = false;
                break;
            }
            if (verifica_stato(tris) == 3) {
                std::cout << "\nPareggio\n";
                break;
            }
            std::cout << "\n\n";
        }
        std::cout << "Vuoi rigiocare? (S/N):";
        std::cin >> stato;
    }
    return 0;
}