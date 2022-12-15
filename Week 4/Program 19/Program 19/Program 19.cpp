#include <iostream>
using namespace std;
int numOfOdd;
int oddTotal;
int numOfEven;
int evenTotal;
bool oddOReven(int n1);
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);

int main()
{
	int userInput;
	for (int i = 0; i < 10; i++)
	{
		cout << "Please input a number" << endl;
		cin >> userInput;
		oddOReven(userInput);
	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
//debug
//cout << numOfEven << endl;
//cout << numOfOdd << endl;
}

bool oddOReven(int n1)
{
	if (n1 % 2 == 0)
	{
	   numOfEven++;
	   evenTotal += n1;
	}
	else
	{
		numOfOdd++;
	    oddTotal += n1;
	}
	return n1;
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "Number of odd = " << numOfOdd << endl;
	cout << "Total number of odd numbers " << oddTotal << endl;
    cout << "Number of even = " << numOfEven << endl;
	cout << "Total number of even numbers " << evenTotal << endl; 
}