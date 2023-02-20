#include <iostream>
#include <vector>
using namespace std;


int myNumbers[10];
int userInput;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Please imput a number " << endl;
		cin >> userInput;
	}

	myNumbers[10] = userInput;
	cout << myNumbers << endl;
}

