// Domenico Zaffora
// CSC 114-401
// Lab-4

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int count = 0, total = 0;

	cout << "Enter a positive number that you want to see the sum of numbers for." << endl;
	cin >> count;
	while (count <= 0)
	{
		cout << "Please enter a valid positive integer.\n";

	}

	while (count > 0)
	{
		total = total + count;
		count--;
	}
	cout << "The sum is " << total;

	_getch();
	return 0;
}