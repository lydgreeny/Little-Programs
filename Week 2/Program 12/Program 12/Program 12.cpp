#include <iostream>
using namespace std;

int rain = 1;
int snow = 2;

char weather;
char temp;


int main()
{
cout << "Tell me if its raining with 1 or snowing with 2" << weather << endl;
cin >> weather;

cout << "What is the temperature in celsius" << temp << endl;
cin >> temp;

if (weather == 1)
{
    if (temp >= 15)
    {
        cout << "Wear a light raincoat" << endl;
    }
    else(temp <= 15);
    {
        cout << "Wear a thick coat" << endl;
    }
}
if (weather == 2)
{
   if (temp > 5)
   {
        cout << "Wrap up arm" << endl;
   }
   else if (temp <= 0)
   {
        cout << "Wrap up super warm" << endl;
   }
   else
   {
        cout << "Have a nice day! It is neither raining or snowing" << endl;
   }
}
}

