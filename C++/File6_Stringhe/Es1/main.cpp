#include <iostream>
#include <string>

int main () {
    std::string s;
    std::cin >> s;

    for (int i = 0; i < s.length() - 1; ++i) {
        if (s.at(i) == s.at(i + 1)) {
            std::cout << s.at(i) << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}