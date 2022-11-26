#include <iostream>
using namespace std; 

char status;
int game_choice;

int main()
{
    cout << "Tell me if you're a Student with S, a Teacher with T or O for other" << endl;
    cin >> status;

    cout << "Would you like game 1 or 2? " << endl;
    cin >> game_choice;

    //Debug
    // cout << status << endl;
    // cout << game_choice << endl;

    if (game_choice == 1 )
    {
		cout << "You can get a 20% discount" << endl;
	}
	else if (game_choice == 2 )
	{
		cout << "You get a 10% discount" << endl;
	}
	else
	{
		cout << "You are not entilted to any discount" << endl;
	}
}
