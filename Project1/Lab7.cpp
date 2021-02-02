//Domenico Zaffora
//CSC 114
//Lab7

#include <iostream>
#include <conio.h>
#include <time.h> // for time
#include <stdlib.h> // for srand & rand



using namespace std;

int coinToss(int);

int main()
{
	int flips;

	int coin;
	srand(time(NULL));
	coin = rand() % 1 + 1;

	printf ( "How many times would you like to flip the coin?\n");
	cin >> flips;
	for (int i = 1; i <= flips; i++)
	{
		coinToss(coin);
	}

	_getch();
	return 0;
}

int coinToss(int coin)
{
	
	if (coin = 1)
	{
		cout << "Heads\n";
	}
	if (coin = 2)
	{
		cout << "Tails\n";
	}
}