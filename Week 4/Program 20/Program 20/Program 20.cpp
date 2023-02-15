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
	while (troo)
	{
		cout << "You have met a troll and you have 3 options to attack." << endl;
		cout << "1 = Sword" << endl;
		cout << "2 = use magic" << endl;
		cout << "3 = use axe" << endl;
		cout << "Different choices have different effects" << endl;
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

		cout << endl;

		cout << "Player health is " << playerHealth << endl;
		cout << "Enemy health is " << enemyHealth << endl;

		cout << endl;

		break;

	    default:cout << "not a valid choice" << endl;
	}
}

void playState()
{
	char playAgain;

	if (enemyHealth == 0 || playerHealth == 0)
	{
		if (enemyHealth == 0)
			cout << "You have killed the troll and won" << endl;
		else
			cout << "You have been killed by the troll and lost" << endl;
		cout << "Play again? Y or N" << endl;
		cin >> playAgain;
		if ((playAgain) == 'Y')
		{
			playerHealth = 1000;
			enemyHealth = 2000;
			troo = true;
		}
		else if ((playAgain) == 'N')
		{
			troo = false;
		}
	}
}

