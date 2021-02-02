//Domenico Zaffora
//CSC114
//HW4

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float income, expence;

	cout << "This program takes your monthly income and then\n"
		<< "asks for your monthly expences and tells you if you\n"
		<< "have money left over at the end of the month, or not.\n"
		<< "To stop entering expences, just enter: 0\n"
		<< "\n What is your monthly income?\n";
	cin >> income;
	cout << "And what is your first expence?\n";
	cin >> expence;

	while (expence)
	{
		income = income - expence;
		cout << "And the next expence?\n";
		cin >> expence;
		if (expence == 0)
		{
			break;
		}
	}

	cout << "At the end of the month you will have $"
		<< income << " Left.";

	_getch();
	return 0;
}