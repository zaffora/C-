// Domenico Zaffora
// CSC 114
// HW6

#include <iostream>
#include <conio.h>

using namespace std;
void findLowest(int, int, int, int, int);

int main()
{
	int north = 0, south = 0, east = 0, west = 0, center = 0;

	cout << "This program will ask you for the number of crashes for 5 areas of the city\n"
		<< "then tell you the area that is the safest to drive.\n"
		<< "Please enter the information.\n"
		<< "How many accedents were there in the North?";
	cin >> north;
	while (north < 0)
	{
		cout << "The anser has to be more then 0.\n";
		cin >> north;
	}
	cout << "How many accedents were there in the South?";
	cin >> south;
	while (south < 0)
	{
		cout << "The anser has to be more then 0.\n";
		cin >> south;
	}
	cout << "How many accedents were there in the  East?";
	cin >> east;
	while (east < 0)
	{
		cout << "The anser has to be more then 0.\n";
		cin >> east;
	}
	cout << "How many accedents were there in the West?";
	cin >> west;
	while (west < 0)
	{
		cout << "The anser has to be more then 0.\n";
		cin >> west;
	}
	cout << "How many accedents were there in the Center?";
	cin >> center;
	while (center < 0)
	{
		cout << "The anser has to be more then 0.\n";
		cin >> center;
	}

	findLowest(north, south, east, west, center);

	_getch();
	return 0;
}

void findLowest(int n, int s, int e, int w, int c)
{
	int array[5] = { n, s, e, w, c };
	int lowest, area;
	for (int i = 0; i < 5; i++)
	{
		lowest = array[0];
		if (lowest >= array[i])
		{
			lowest = array[i];
			area = i;
		}				
	}

	switch (area)
	{
	case 0: cout << "The area that is safest to drive is the North with " << lowest << " crashes\n";
		break;
	case 1: cout << "The area that is safest to drive is the South with " << lowest << " crashes\n";
		break;
	case 2: cout << "The area that is safest to drive is the East with " << lowest << " crashes\n";
		break;
	case 3: cout << "The area that is safest to drive is the West with " << lowest << " crashes\n";
		break;
	case 4: cout << "The area that is safest to drive is the Center with " << lowest << " crashes\n";
		break;
	}

}