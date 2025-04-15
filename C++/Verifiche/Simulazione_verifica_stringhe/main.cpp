#include <iostream>

std::string ottieni_campo(const std::string &s, int campo) {
    int fine_camp1 = s.find('-');
    int fine_camp2 = s.find('-', fine_camp1 + 3);
    if (campo == 1) {
        return s.substr(0, fine_camp1);
    }
    else if (campo == 2) {
        return s.substr(fine_camp1 + 3, fine_camp2 - fine_camp1 - 3);
    }
    else if (campo == 3) {
        return s.substr(fine_camp2 + 3);
    }
    else {
        return "";
    }
}

int conta_parole(const std::string &s) {
    int pos = 0, conta = 0;
    if (s.at(0) != ' ') {
        conta++;
    }
    while ((pos = s.find(' ', pos)) != std::string::npos) {
        while (pos < s.length() && s.at(pos) == ' ') {
            pos++;
        }
        conta++;
    }
    if (s.at(s.length() - 1) == ' ') {
        conta--;
    }
    return conta;
}

void is_valid_card(const std::string &s) {
    std::cout << "Coglione";
}



int main() {
    std::cout << ottieni_campo("FLIGHT 251---Milano Malpensa---Tenerife Sud", 1) << std::endl;
    std::cout << conta_parole(" oggi avevo proprio   voglia di  fare il compito  in classe di informatica ") << std::endl;
    return 0;
}