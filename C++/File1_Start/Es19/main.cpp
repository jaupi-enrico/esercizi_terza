#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));

    int prec_num = 0, num = 0;

    for (int i = 0; i < 5; i++)
    {
        while (num <= prec_num)
        {
            num = rand() % 1000 + 1;
        }
        prec_num = num;
        cout << num << endl;
    }
    return 0;
}
