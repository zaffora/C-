//Domenico Zaffora
//CSC114
//Lab 5

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int square;

	cout << "This program will create a square of 'X's of a given size.\n"
		<< "Please enter a positive integer between 1 and 15 to make a square.\n";
	cin >> square;

	for (int i = 1; i <= square; i++)
	{
		for (int j = 1; j <= square; j++)
		{
			cout << "X";
		}
		cout << endl;
	}

	_getch();
	return 0;
}