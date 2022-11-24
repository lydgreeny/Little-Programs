#include <iostream>
using namespace std;

int main()
{

	int mySavings = 2000;
	int yourPercentage = 50;
	int yourShare = (yourPercentage * (mySavings / 100));

	cout << "Your share: " << yourShare << endl;

	return 0;
}