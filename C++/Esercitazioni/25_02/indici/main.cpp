#include <iostream>

int main()
{
    int N, M;
    std::cin >> N >> M;

    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < M; ++i)
    {
        int indice;
        std::cin >> indice;
        std::cout << arr[indice] << " ";
    }


    return 0;
}