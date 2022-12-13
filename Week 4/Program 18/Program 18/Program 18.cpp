#include <iostream>
using namespace std;

int userInput1;
int userInput2;
int userInput3;
int answer = userInput1 *= 10;
int answer2 = answer /= 3;
void smallestNumber(int n1, int n2);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Please imput a number" << endl;
		cin >> userInput1;
		cout << "and another" << endl;
		cin >> userInput2;

		if (userInput1 > userInput2)
		{
			cout << userInput2 << " is the smaller number" << endl;
			cout << endl;
		}
		else if (userInput1 < userInput2)
		{
			cout << userInput1 << " is the smaller number" << endl;
			cout << endl;
		}
		else
		{
			cout << "Both are equil " << endl;
			cout << endl;
			cout << endl;
		}

	}

}
	void smallestNumber(int n1, int n2);
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Please imput a number to be multipled by 10 " << endl;
			cin >> userInput1;
			cout << userInput1 << "divided by 3 = " << answer2 << endl;
			cout << endl;


			cout << "and another" << endl;
			cin >> userInput2;
			cout << userInput2 << "divided by 3 = " << answer2 << endl;
			cout << endl;

			cout << "and another" << endl;
			cin >> userInput3;
			cout << userInput2 << "divided by 3 = " << answer2 << endl;
			cout << endl;

		}
	}



