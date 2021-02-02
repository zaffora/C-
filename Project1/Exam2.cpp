//Domenico Zafffora
//CSC 114
//Exam 2

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int drinks, pizzas = 0, milkshakes, sodas = 0;
	float soda_total, milkshake_total, pizza_total, subtotal = 0, total = 0, tax = 0;
	char drink_type;

	cout << "Welcome to Pizza World!\n"
		<< "(You can enter 7777 for number of Pizzas or drinks to exit this program and calculate your total bill)\n"
		<< "How many pizzas would you like?\n";
	cin >> pizzas;
	while (pizzas) 
	{
		if (pizzas = 7777)
		{
			pizzas = 0;
				break;
		}

		
		pizza_total = pizzas * 12.00;

		cout << "How many drinks would you like?\n"
			<< "(You can enter 7777 for number of Pizzas or drinks to exit this program and calculate your total bill)";
		cin >> drinks;
		
		while (drinks < 0)
		{
			cout << "You entered an invalid number. Try again.\n";
			cin >> drinks;			
		}

		if (drinks = 7777)
			break;

		cout << "You can choose m for milkshakes or s for sodas, which would you like?\n";
		cin >> drink_type;
		
		switch (drink_type)
		{
		case 'm': milkshakes = drinks;
			milkshake_total = milkshakes * 4.50;
			break;
		case 's': sodas = drinks;
			soda_total = sodas * 1.75;
			break;
		default: cout << "You entered an invalid selection.";
		}

		cout << "How many pizzas would you like?\n";
		cin >> pizzas;
	}

	cout << "############################\n"
		<< "Your itemized bill :\n"
		<< "Pizzas :" << pizzas << " X $12.00 = $" << pizza_total << endl
		<< "Milkshakes : " << milkshakes << " X $4.50 = $" << milkshake_total << endl
		<< "Sodas : " << sodas << " X $1.75 = $" << soda_total << endl
		<< "-----------------------------\n";
	subtotal = pizza_total + milkshake_total + soda_total;
	cout << "Subtotal = $" << subtotal << endl;
	tax = subtotal * .06;
	cout << "Tax at 6% = $" << tax << endl;
	total = subtotal + tax;
	cout << "Total = $" << total << endl;
	

	
	_getch();
	return 0;
}