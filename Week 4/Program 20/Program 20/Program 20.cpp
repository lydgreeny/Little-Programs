#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool troo = true; 

void attackChoice(int n1); 
void playState();

int main()
{
	int playerChoice;
	while (true)
	{
		cout << "You have met a troll and you have 3 options to attack." << endl;
		cout << "1 = Sword" << endl;
		cout << "2 = use magic" << endl;
		cout << "3 = use axe" << endl;
		cout << "Choices have different effects" << endl; 
		cout << endl;
		cin >> playerChoice;

		attackChoice(playerChoice);
		playState();
	}
	return 0;
}

void attackChoice(int n1)
{
	const int swordDamage = 300;
	const int magicDamage = 650;
	const int axeDamage = 450;
	const int troll_sword = 350;
	const int troll_magic = 50;
	const int troll_axe = 100;
	cout << endl;

	switch (n1)
	{
	case 1:
		enemyHealth -= swordDamage;
		playerHealth -= troll_sword;
		cout << "You have hit the troll " << endl;
		cout << "The troll has hit you " << endl;

		if (playerHealth <= 0)
		{
			playerHealth = 0;
		}

		if (enemyHealth <= 0)
		{
			enemyHealth = 0;
		}

		cout << endl;

		cout << "Player health is " << playerHealth << endl; 
	    cout << "Enemy health is " << enemyHealth << endl;

		cout << endl;

		break;
	
	case 2:
		enemyHealth -= magicDamage;
		playerHealth -= troll_magic;
		cout << "You have hit the troll " << endl;
		cout << "The troll has hit you " << endl;

		if (playerHealth <= 0)
		{
			playerHealth = 0;
		}

		if (enemyHealth <= 0)
		{
			enemyHealth = 0;
		}

		cout << endl;

		cout << "Player health is " << playerHealth << endl;
		cout << "Enemy health is " << enemyHealth << endl;

		cout << endl;

	break;

	case 3:
		enemyHealth -= axeDamage;
		playerHealth -= troll_axe;
		cout << "You have hit the troll " << endl;
		cout << "The troll has hit you " << endl;

		if (playerHealth <= 0)
		{
			playerHealth = 0;
		}

		if (enemyHealth <= 0)
		{
			enemyHealth = 0;
		}
		cout << enemyHealth << endl;
		cout << endl;
	
		cout << "Player health is " << playerHealth << endl;
		cout << "Enemy health is " << enemyHealth << endl;
	
		cout << endl;
		 
	break;

defult: cout << "Not a valid choice" << endl;
	}
}

void playState()
{
	char playerChoice;

	if (enemyHealth == 0)
	{
		cout << "You killed the troll! Play again? " << endl;
	}
	else (playerHealth == 0)
	{
		cout << "You died! Play again? " << endl;
	}

		cin >> playerChoice;
		if (playerChoice == 'Y')
		{
			int playerHealth = 1000;
			int enemyHealth = 2000;
			troo = true;
		}
		else
		{
			troo = false;
		}
	}

  //  return true;

