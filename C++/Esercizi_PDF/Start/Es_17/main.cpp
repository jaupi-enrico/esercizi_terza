#include <iostream>
using namespace std;
int main()
{
    int N;

    cout << "Enter N\n";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < N; i++)
    {
        cout << "_";
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < (N - 1 - i); j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < N + (2 * i); j++)
        {
            cout << " ";
        }
        cout << "\\";
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        cout << "|";
        for (int j = 0; j < (3 * N - 2); j++)
        {
            cout << " ";
        }
        cout << "|" << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < 3 * N - 2 - (2 * i); j++)
        {
            cout << " ";
        }
        cout << "/";
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        cout << " ";
    }
    for (int i = 0; i < N; i++)
    {
        cout << "-";
    }
    cout << endl;
    return 0;
}
