#include <iostream>
#include <vector>

int main()
{
    int v1[10], v2[10];
    std::vector<int> v3;

    for (int i = 0; i < 10; ++i)
    {
        std::cin >> v1[i];
        std::cin >> v2[i];
    }

    for (int i = 0; i < 10; ++i)
    {
        v3.push_back(v1[i]);
        v3.push_back(v2[i]);
    }

    return 0;
}
