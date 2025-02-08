#include <iostream>

int main()
{
    using namespace std;

    int number, cont = 0;

    do
    {
        cout << "Enter a number: \n";
        cin >> number;
        cont++;
    }
    while (number > 0);

    cout << "Programma terminato dopo " << cont << " inserimenti\n";
    return 0;
}
