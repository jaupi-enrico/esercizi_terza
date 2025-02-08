#include <cmath>
#include <iostream>

void movimento_tartaruga(int &pos) {
    int n = rand()%100;
    if (n < 50) {
        pos += 3;
    }
    else if (n < 70) {
        pos -= 6;
    }
    else {
        pos += 1;
    }
}

void movimento_lepre(int &pos) {
    int n = rand()%100;
    if (n < 20) {
        pos += 9;
    }
    else if (n < 30) {
        pos -= 12;
    }
    else if (n < 60) {
        pos++;
    }
    else if (n < 80) {
        pos -= 2;
    }
}

void stampa_gara(int lepre, int tartaruga) {

    for (int i = 0; i < lepre; ++i) {
        std::cout << " ";
    }
    std::cout << "L" << std::endl;
    for (int i = 0; i < tartaruga; ++i) {
        std::cout << " ";
    }
    std::cout << "T" << std::endl;
    double t;
    for (int i = 0; i < 1000000; ++i) {
        t = sqrt(i);
    }
}
int main() {
    int pos_lepre, pos_tartaruga, l_percorso;
    pos_lepre = pos_tartaruga = 0;
    l_percorso = 50;
    while (pos_lepre < l_percorso &&
        pos_tartaruga < l_percorso) {
        //Movimento della tartaruga
        movimento_tartaruga(pos_tartaruga);
        movimento_lepre(pos_lepre);
        stampa_gara(pos_lepre, pos_tartaruga);
        }
    return 0;
}