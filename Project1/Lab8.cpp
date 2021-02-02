// Domenico Zaffora
// CSC 114
// Lab 8

#include <iostream>
#include <conio.h>

using namespace std;

double high(double value[]);
double low(double value[]);

int main()
{
	double value[10];

	cout << "This program will take 10 values and tell you the lowest & highest values.\n";

	for (int i = 0; i < 10; i++) {
		cout << "Please enter value " << i + 1 << ": ";
		cin >> value[i];
	}

	cout << "The highest value is: " << high(value) << endl;
	cout << "The lowest value is: " << low(value);
	
	_getch();
	return 0;
}

double high(double value[])
{
	double high;
	high = value[0];
	for (int i = 0; i < 9; i++) {
		if (value[i] <= value[i + 1]) {
			high = value[i + 1];
		}
	}
	return high;
}

double low(double value[])
{
	double low;
	low = value[0];
	for (int i = 0; i < 9; i++) {
		if (value[i] >= value[i + 1]) {
			low = value[i + 1];
		}
	}
	return low;
}