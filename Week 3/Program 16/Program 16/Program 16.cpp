#include <iostream>
using namespace std;

int playerLife = 100;
int playerInput;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Players health = " << playerLife << endl;
        cout << "How much damage would you like to deal? " << endl;

        cin >> playerInput;
        playerLife -= playerInput;

        if (playerLife <= 0)
        {
            cout << "Early end, Player died! :> " << endl;
            break;
        }
    }
    if (playerLife > 0)
    {
        cout << "All questions asked, Player survived :< " << endl;
    }
}