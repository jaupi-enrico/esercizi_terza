#include <iostream>
#include <vector>

void genera_vett(std::vector<int> &v) {
    for (int i = 0; i < 10; ++i) {
        v.push_back(rand() % 100);
    }
}

void stampa_vett (const std::vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}

int conta_m4(const std::vector<int> &v, int &primo) {
    int count = 0;

    for (int i = 0; i < v.size(); ++i) {
        if (v.at(i) % 4 == 0 && v.at(i) != 0) {
            if (count == 0) {
                primo = i;
            }
            count++;
        }
    }

    return count;
}

void scambia_m4(std::vector<int> &v, int primo) {
    int temp = v.at(primo);
    v.at(primo) = v.at(0);
    v.at(0) = temp;
}

int main() {
    std::vector<int> v;
    int primo = -1;

    genera_vett(v);
    stampa_vett(v);

    std::cout << "All'interno del vettore ci sono " << conta_m4(v, primo) << " multipli di 4" << std::endl;
    if (primo != -1) {
        std::cout << "Il primo multiplo di 4 si trova in posizione " << primo + 1 << std::endl;
    }

    scambia_m4(v, primo);
    stampa_vett(v);
    return 0;
}