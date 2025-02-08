#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int v[10];
    int random_number = rand()%11;
    for(int i = 0; i < 10; ++i)
    {
        v[i] = 0;
    }
    v[random_number] = 1;
    for (int i = 0; i < 10; ++i)
    {
        if (v[i] == 1)
        {
            cout << "Il numero 1 si trova nella cella " << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}
