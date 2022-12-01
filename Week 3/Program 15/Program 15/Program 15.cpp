#include <iostream>
using namespace std;

int playerInput;

int main()
{
   cout << "Enter a number ";
   cin >> playerInput;

   for (int i = 1; i <= playerInput; ++i)
   {
       for (int j = 1; j <= i; ++j)
       {
       cout << "* ";
       }
       cout << "\n";
   }
}

