// Domenico Zaffora
// CSC 114
// Lab 6

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float wholesale, markup, retail;
	cout << "This program will ask for the wholesale price of a product and it's markup percentage to calculate the retail price.\n"
		<< "What is the wholesale price of the item?\n";
	cin >> wholesale;
	cout << "Whhat is the Markup percentage?";
	cin >> 


	_getch();
	return 0;
}

float calculateRetail(float wholesale, float markup)
{
	float retail;
	retail = wholesale + wholesale * (markup / 100);
	return retail;
}