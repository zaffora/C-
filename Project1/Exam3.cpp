// Domenico Zaffora
// CSC114
// Exam 3

#include <iostream>
#include <conio.h>

using namespace std;

float deliveryCharge(int);


int main()
{
	
	int delivery;
	
	cout << "Where would you like to have the food delivered?\n"
		<< "North =1\n"
		<< "South = 2\n"
		<< "East = 3\n"
		<< "West = 4\n"
		<< "Center = 5\n";
	cin >> delivery;
	delivery = delivery - 1;

	cout << "The delivery charge will be: $" << deliveryCharge(delivery);

	_getch();
	return 0;
}

float deliveryCharge(int delivery)
{
	// area * .025 + number of accidents * 0.1 + delivery charge of a fixed rate of $3.
	int area[5] = {3, 2, 4, 1, 0};
	int crashes[5] = { 132, 60, 289, 27, 49 };
	float charge;
	charge = (area[delivery] * 0.025) + (crashes[delivery] * 0.1) + 3;

	return charge;

}