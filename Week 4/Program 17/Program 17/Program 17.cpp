#include <iostream>
using namespace std; 

void addTwo(int n1);


int main()
{
    int n1 = 6;
    cout << "MAIN [before]: n1 = " << n1 << endl;
    addTwo(n1);
    cout << "MAIN [after]: n1 = " << n1 << endl;
}

void addTwo(int n1)
{
    n1 += 2;
    cout << "Function: num = " << n1 << endl;
}