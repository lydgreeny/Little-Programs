#include <iostream>
using namespace std;

int num1;
int num2;
int two = 2;

int main()
{
	while (true)
	{
		cout << "Please enter a number " << endl;
		cin >> num1;
		cout << "please enter another number " << endl;
		cin >> num2;

		//debug 
	    //cout << num1 << endl;
	    //cout << num2 << endl;

		int answer = (num1 + num2) / two;

		cout << "The mean average of your numbers is " << answer << endl;

		if (num1 == 0 || num2 == 0)
			break;
    }
}