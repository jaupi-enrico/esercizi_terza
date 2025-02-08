#include <iostream>
using namespace std;
int main()
{
    double import;
    cout << "Please enter your import: \n";
    cin >> import;

    if (import >= 39 && import < 2500)
    {
        import = import * 0.017 + 30;
    }
    else if (import >= 2500 && import < 6250)
    {
        import = import * 0.0066 + 56;
    }
    else if (import >= 6250 && import < 20000)
    {
        import = import * 0.0034 + 76;
    }
    else if (import >= 20000)
    {
        import = import * 0.0022 + 100;
    }
    else
    {
        cout << "Error, import" << import << " is less than 39 euro\n";
        return 0;
    }

    cout << "The commission is: " << import << endl;

    return 0;
}
