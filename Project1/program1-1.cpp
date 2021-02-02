/* CSC114 401
Domenico ZZaffora
project1-1*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double hours, rate, pay;

	cout << "How many hours did you work?";
	cin >> rate;

	cout << "How much do you get paid per hour?";
	cin >> hours;

	pay = hours * rate;
	cout << "You have earned $" << pay << endl;

	_getch();
	return 0;
}