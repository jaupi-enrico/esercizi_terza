#include <iostream>
using namespace std;
void reduce(int &num, int &den)
{
    for(int i = 2; i <= min(num, den); ++i)
    {

        while (num % i == 0 && den % i == 0)
        {
            num /= i;
            den /= i;
        }
    }
}
int main()
{
    int num, den;
    cout << "Enter 2 numbers: ";
    cin >> num >> den;
    reduce(num, den);
    cout << num << " / " << den << endl;
    return 0;
}
