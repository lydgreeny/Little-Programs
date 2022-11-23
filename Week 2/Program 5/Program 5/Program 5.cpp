#include <iostream>
using namespace std; 

int main()
{
	int num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << ++num << endl;
	cout << "num after +" << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << num++ << endl;
	cout << "num after +" << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << --num << endl;
	cout << "num after +" << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << num-- << endl;
	cout << "num after +" << num << endl;

}
