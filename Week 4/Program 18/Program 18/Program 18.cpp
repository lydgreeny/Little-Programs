#include <iostream>
using namespace std;

void smallestNumber(int n1, int n2);
float multiply(int n1);
float divide(float n1);

int main()
{
int userInput1;
int userInput2;
float answer;

for (int i = 0; i < 3; i++)
	{
		cout << "Please input a number" << endl;
		cin >> userInput1;
		cout << "and another" << endl;
		cin >> userInput2;
		smallestNumber(userInput1, userInput2);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "Please input a number to be multiplied " << endl;
		cin >> userInput1;
		answer = multiply(userInput1);
		cout << answer << " Divided by 3 = " << divide(answer) << endl;
	}

}

	void smallestNumber(int n1, int n2)
	{
		if (n1 > n2)
		{
			cout << n2 << " is the smaller number" << endl;
			cout << endl;
		}
		else if (n1 < n2)
		{
			cout << n1 << " is the smaller number" << endl;
			cout << endl;
		}
		else
		{
			cout << "Both are equil " << endl;
			cout << endl;
			cout << endl;
		}
	}

	float multiply(int n1)
	{
		n1 *= 10;
		return n1;
	}

	float divide(float n1)
	{
		n1 /= 3;
		return n1;
	}