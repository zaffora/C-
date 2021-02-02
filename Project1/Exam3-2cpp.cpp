//Domenico Zaffora
//CSC114
? ? Exam 3 - 2

#include <iostream>
#include <conio.h>

using namespace std;

double cakeCost(int)
double cookieCost(int)
void cakePerServing(int)


int main()
{
	string password;	
	int people = 0, choice = 0;
	double cost;

	cout << "Enter how many people: ";
	

	while (choice != 6)
	{
		cout << endl << "**********************************" << endl << endl;
		cout << "1 - Cake Cost\n" << "2 - Cookie Cost\n" << "3 - Approve Cake Discount\n"
			<< "4 - Cake price breakdown\n" << "6 - Exit\n" << endl
			<< "**********************************\n" << endl << "Enter Coice: ";
		cin >> choice;

		switch (choice)
		case 1:
			cout << "The cost of the cake is: $" << cakeCost(people) << endl;
			break;
		case 2:
			cout << "The cost for cookies is: $" << cookieCost(people) << endl;
			break;
		case 3:
			cout << "Please enter the password: ";
			cin password;
			if (password = 'Eagles')
			{
				cost = cakeCost(people) * 0.8;
				cout << "The discount of 20% has bee applied.\n";
			}
			else
			{
				cout << "You have entered the wrong password.\n";
			}
			break;
		case 4:
			cakePerServing(people);
			break;
		case 5:
			break;

	}

	if (choice = 6)
	{
		cout "Thanks! Good Bye.";
	}
	

	_getch();
	return 0;
}

double cakeCost(int people)
{
	double cakeCost;
	if (people <= 50)
		cakeCost = 300;
	else if (people > 50)
		cakeCost = 300 + (3 * (people - 50));

	return cakeCost;
}

double cookieCost(int people)
{
	double cookieCost;
	if (people <= 50)
		cookieCost = people;
	else if (people > 50)
		cookieCost = people * 0.75;

	return cookieCost;
}

void cakePerServing(int people)
{
	double cakePerServing;

	cakePerServing = cakeCost(people) / people;
	cout << "The cost of cake per serving is: $" << cakePerServing << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "Cost of cake for " << i << " people is: $" << cakePerServing * i << endl;
	}
}


		

}