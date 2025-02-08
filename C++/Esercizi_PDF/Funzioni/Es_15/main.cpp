#include <iostream>
using namespace std;

void stipendio_lordo(double h, double h_straordinari, double &stipendio, double &tasse)
{
    double stipendio_temp = h * 15.4 + h_straordinari * 22.8;
    stipendio += stipendio_temp;
    if (stipendio_temp <= 5000)
    {
        tasse += 0;
        cout << "Lo stipendio lordo e' " << stipendio_temp << endl;
        cout << "Le tasse sono 0\n";
    }
    else if (stipendio_temp <= 22000)
    {
        tasse += stipendio_temp * 0.22;
        cout << "Lo stipendio lordo e' " << stipendio_temp << endl;
        cout << "Le tasse sono " << stipendio_temp * 0.22 << endl;
    }
    else if (stipendio_temp <= 50000)
    {
        tasse += stipendio_temp * 0.33;
        cout << "Lo stipendio lordo e' " << stipendio_temp << endl;
        cout << "Le tasse sono " << stipendio_temp * 0.33 << endl;
    }
    else
    {
        tasse += stipendio_temp * 0.38;
        cout << "Lo stipendio lordo e' " << stipendio_temp << endl;
        cout << "Le tasse sono " << stipendio_temp * 0.38 << endl;
    }
}

int main()
{
    int n;
    double h, h_straordinari, stipendio = 0, tasse = 0;
    cout << "Enter n:";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter hours:";
        cin >> h >> h_straordinari;
        stipendio_lordo(h, h_straordinari, stipendio, tasse);
    }
    return 0;
}
