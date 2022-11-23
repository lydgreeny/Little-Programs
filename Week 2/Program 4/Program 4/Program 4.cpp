#include <iostream>
using namespace std;

typedef int health;
health hp = 13000;


enum Weapons
{
	SWORD = 1,
	DAGGER,
	MACE,
	TWIN_SWORDS,
	SAMURAI,
	WIZARD_STAFF,
	FIRE_POTION,
	ICE_BLADE,
	SMALL_KNIFE,
};



int main()
{
	cout << "My current health is " << hp << endl;
	cout << "And the ID of my weapon of choice is " << SAMURAI << endl;
}
