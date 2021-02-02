// Domenico Zaffora
// CSC 114 401
// Exam 1

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int sodas, c_pizza, s_pizza;
	float subtotal, total, tip, soda_total, cpizza_total, spizza_total;
	char spizza_type, tip_choice;
	bool supream = 0; /*used to see if they chose a supream pizza or not*/

	cout << "Welcome to Pizza USA!\n"
		<< "How many of the following items would you like to order? \n";

	cout << "Sodas?";
	cin >> sodas;
	cout << "Cheese pizzas?";
	cin >> c_pizza;
	cout << "Specialty pizzas?";
	cin >> s_pizza;

	// This is for the total to charge for sodas
	if (sodas > 0)
	{
		soda_total = sodas * 1.75;
	}
	else 
	{
		soda_total = 0;
	}

	//This is to charge the total for cheese pizzas 
	if (c_pizza > 0)
	{
		cpizza_total = c_pizza * 10;
	}
	else
	{
		cpizza_total = 0;
	}

	//This lets the customer select what type of specialty pizza they
	//want and charges the correct amount acordingly
	if (s_pizza > 0)
	{
		cout << "What type of specialty pizza would you like? \n"
			<< "Enter s for Supream \n"
			<< "Enter v for veggie \n"
			<< "Enter m for meat lover's \n";
			cin >> spizza_type;

		switch (spizza_type)
		{
		case 's': spizza_total = s_pizza * 20;
			supream = 1;
			break;
		case 'v': spizza_total = s_pizza * 18;
			break;
		case 'm': spizza_total = s_pizza * 18;
		default: spizza_total = 0;
		}

		
	}
	else
	{
		spizza_total = 0;
	}

	//This lets the customer choose the percentage of tip they would like to leave
	cout << "Would you like to add a tip \n"
		<< "y for yes, or n for no \n";
	cin >> tip_choice;

	if (tip_choice == 'y')
	{
		cout << "What percentage would you like to leave as a tip? \n";
		cin >> tip;
	}
	else
	{
		tip = 0;
	}

	cout << "Your total bill is: \n"
		<< "Sodas: " << sodas << "x $1.75 = $" << soda_total << endl;
	cout << "Cheese Pizza: " << c_pizza << " x $10.00 = $" << cpizza_total << endl;
	if (supream == 1)
	{
		cout << "Speciality Pizza: " << s_pizza << " x $20.00 = $" << spizza_total << endl;
	}
	else
	{
		cout << "Speciality Pizza: " << s_pizza << " x $18.00 = $" << spizza_total << endl;
	}

	subtotal = soda_total + cpizza_total + spizza_total;
	total = subtotal + (tip / 100) * subtotal;

	cout << "Subtotal: $" << subtotal << endl;
	cout << "Total with tip (if any): $" << total << endl;

	_getch();
	return 0;
	 
}
