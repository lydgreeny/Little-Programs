#include <iostream>
using namespace std; 

char playerInput;

int main()
{
cout << "Choose your difficulty!" << endl;
cout << "1: A little scary but not too much" << endl;
cout << "2: Your avarage joe" << endl;
cout << "3: Challenge me!" << endl;
cout << "4: Sicko mode" << endl;
cin >> playerInput;

switch (playerInput)
	{
	case '1':
		cout << "get cozy!" << endl;
	break;

	case'2':
		cout << "so avarage" << endl;
	break;

	case '3':
		cout << "'ard as nails" << endl;
	break;

	case '4':
		cout << "phf good luck!" << endl;
	break;

	default:
		cout << "That isn't a game mode, how funny, try again" << endl;
	break;
	}

return 0;
}
