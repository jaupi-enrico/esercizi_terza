#include <iostream>
#include <vector>

void test(int data[])
{
    // You can't use the range based loop
}

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};

    for (const int &n : data)
    {
        std::cout << n << " ";
    }
    std::cout << "\n";

    for (int i = 0; i < 6; ++i)
    {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
    return 0;
}