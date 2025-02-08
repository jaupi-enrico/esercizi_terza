#include <iostream>
#include <vector>
using namespace std;

void roman_number(vector<char> &number,int &N)
{
    if (N == 100){
        number.push_back('C');
        N -= 100;
    }
    else if (N >= 90)
    {
        number.push_back('X');
        number.push_back('C');
        N -= 90;
    }
    else if (N >= 50)
    {
        number.push_back('L');
        N -= 50;
        while (N >= 10)
        {
            number.push_back('X');
            N -= 10;
        }
    }
    else if (N >= 40)
    {
        number.push_back('X');
        number.push_back('L');
        N -= 40;
    }
    else if (N >= 10)
    {
        number.push_back('X');
        N -= 10;
    }
    else if (N == 9)
    {
        number.push_back('I');
        number.push_back('X');
        N -= 9;
    }
    else if (N >= 5)
    {
        number.push_back('V');
        N -= 5;
        while (N >= 1)
        {
            number.push_back('I');
            N -= 1;
        }
    }
    else if (N == 4)
    {
        number.push_back('I');
        number.push_back('V');
        N -= 4;
    }
    else if (N >= 1)
    {
        while (N >= 1)
        {
            number.push_back('I');
            N -= 1;
        }
    }
}

int main()
{
    vector<char> number;
    int N;
    cout << "Enter N:\n";
    cin >> N;
    while (N > 0)
    {
        roman_number(number, N);
    }
    cout << "The roman number is: ";
    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i];
    }
    return 0;
}
