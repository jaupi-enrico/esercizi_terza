#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int lettere['z' - 'a' + 1];
    for (int i = 0; i < s.length(); ++i) {
        lettere[s.at(i) - 'a']++;
        if (lettere[s.at(i) - 'a'] == 2) {
            std::cout << s.at(i) << " ";
        }
    }

    return 0;
}