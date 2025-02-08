#include <iostream>
using namespace std;
#define PAUSE system("pause>nul|set/p = Premere INVIO per uscire...");

bool game()
{
    int target, launch;

    /* Primo lancio
    * se al primo tiro il giocatore fa 7 o 11 ha vinto
    * se al primo tiro il giocatore fa 2, 3 o 12 ha perso
    */

    launch = rand()%6 + 1 + rand()%6 + 1;
    std::cout << "Your launch is: " << launch << std::endl;

    if (launch == 7 || launch == 11)
    {
        return true;
    }
    else if (launch == 2 || launch == 3 || launch == 12)
    {
        return false;
    }
    else
    {
        /* Dal secondo lancio in poi
        * qualsiasi altro punteggio viene definito "target" e si continua a tirare finchè
        *  - il giocatore realizza nuovamente il target, in quel caso vince
        *  - il giocatore realizza un 7, in quel caso perde
        */

        target = launch;

        launch = rand()%6 + 1 + rand()%6 + 1;
        std::cout << "Your launch is: " << launch << std::endl;

        while (target != launch && launch != 7)
        {
            launch = rand()%6 + 1 + rand()%6 + 1;
            std::cout << "Your launch is: " << launch << std::endl;
        }

        if (target == launch)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
}

int main()
{
    srand(time(NULL));
    cout << "The game of the craps\n" << endl;

    bool fist_game;
    float money;
    cout << "With how much do you wanna play? ";
    cin >> money;

    float bet;

    cout << "You have " << money << " Euros\n";
    cout << endl;

    char playing;

    cout << "Do you wanna play (Y/N)? ";
    do
    {
        cin >> playing;
    }
    while (playing != 'Y' && playing != 'y' && playing != 'N' && playing != 'n');
    cout << endl;

    while (playing == 'Y' || playing == 'y')
    {
        cout << "How much do you wanna bet (in Euros)? ";
        do
        {
            cin >> bet;
        }
        while (playing <= 0);
        
        cout << endl;
        if (game())
        {
            cout << "You have won!\n";
            money += bet;
        }
        else
        {
            cout << "You have lost :(\n";
            money -= bet;
        }
        if (money == 0)
        {
            cout << "You lost everything\n";
            PAUSE
            return 1;
        }
        if (money < 0)
        {
            cout << "Now you are in debt of " << abs(money) << " Euros\n";
            PAUSE
            return 1;
        }
        cout << "You now have " << money << " Euros\n";
        cout << "Do you wanna play again (Y/N)? ";
        do
        {
            cin >> playing;
        }
        while (playing != 'Y' && playing != 'y' && playing != 'N' && playing != 'n');
        cout << endl;
    }

    cout << "You came out with " << money << " Euros";
    return 0;
}