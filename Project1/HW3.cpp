//CSC114
//Domenico Zaffora
// Homework 3

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float l1, w1, l2, w2, a1, a2, dif;

	cout << "This program will compar two rectangles and determin wich has the greater area.\n";
	cout << "Please enter the width of the first rectangle.\n";
	cin >> w1;
	cout << "Please enter the length of the first rectangle.\n";
	cin >> l1;
	a1 = w1 * l1;

	cout << "Please enter the width of the second rectangle.\n";
	cin >> w2;
	cout << "Please enter the length of the second rectangle.\n";
	cin >> l2;
	a2 = l2 * w2;

	if (a1 > a2)
	{
		cout << "Rectangle One has the greater area.\n";
	}
	if (a1 < a2)
	{
		cout << "Rectangle two has the larger area.\n";
	}
	if (a1 == a2)
	{
		cout << "The rectangles have the same area.";
	}

	_getch();
	return 0;
}