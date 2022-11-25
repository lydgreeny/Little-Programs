#include <iostream>
using namespace std; 

int playerInput;

int main()
{
cout << "Choose your difficulty! (at your own risk, player's discretion is advised)" << endl;
cout << "A little scary but not too much" << endl;
cout << "Your avarage joe" << endl;
cout << "Challenge me!" << endl;
cout << "Sicko mode" << endl;
cin >> playerInput;

switch (playerInput)
	{
	case "A little scary but not too much":
		cout << "get cozy!" << endl;
	break;

	case"Your avarage joe":
		cout << "so avarage" << endl;
	break;


	case "Challenge me!":
		cout << "ard as nails" << endl;
	break;

	case "Sicko mode":
		cout << "phf good luck!" << endl;
	break;

	default:
		cout << "That isn't a game mode, how funny, try again" << endl;
	break;
	}

return 0;
}
