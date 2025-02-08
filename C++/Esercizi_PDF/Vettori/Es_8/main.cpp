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
        for (int j = 0; j < 10; ++j)
        {
            if (v1[i] != v2[j])
            {
                bool presente = false;
                for (int k = 0; k < v3.size(); ++k)
                {
                    if (v1[i] == v3.at(k) && i != k)
                    {
                        presente = true;
                    }
                }
                if (!presente)
                {
                    v3.push_back(v1[i]);
                }
            }
        }
    }
    for (int i = 0; i < v3.size(); ++i)
    {
        std::cout << v3.at(i);
    }
    return 0;
}
