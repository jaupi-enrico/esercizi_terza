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

int main() {
    SetConsoleOutputCP(65001);
    std::ifstream in("storia.txt");
    std::ofstream out("output.txt");

    if (!in) {
        std::cout << "File di input non letto!\n";
        return 1;
    }

    std::vector<std::string> rows;
    std::string temp;

    while (std::getline(in, temp)) {
        rows.push_back(temp);
    }
    in.close();

    std::cout << "\nIl file contiene:\n\n";

    for (int i = 0; i < rows.size(); ++i) {
        std::cout << rows.at(i) << std::endl;
    }

    return 0;
}
