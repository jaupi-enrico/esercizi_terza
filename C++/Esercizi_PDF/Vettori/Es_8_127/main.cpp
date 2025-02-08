#include <iostream>

int lancia_dato()
{
    return rand() % 6;
}

int lancia_dadi()
{
    return rand() % 12;
}

int main()
{
    int n[12] = {0};
    for (int i = 0; i < 100000; ++i)
    {
        n[lancia_dato()]++;
    }
    std::cout << "Distribuzione nel lancio di un dado\n";
    for (int i = 0; i < 6; ++i)
    {
        std::cout << i + 1 << ": " << n[i] << " volte (" << n[i]/1000.0 << "%)\n";
    }
    for (int & i : n)
    {
        i = 0;
    }
    for (int i = 0; i < 100000; ++i)
    {
        n[lancia_dadi()]++;
    }
    std::cout << "Distribuzione nel lancio di due dadi\n";
    for (int i = 0; i < 12; ++i)
    {
        std::cout << i + 1 << ": " << n[i] << " volte (" << n[i]/1000.0 << "%)\n";
    }
    return 0;
}