// Domenico Zaffora
// CSC 114-401
// Lab-3

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int numeral;

	cout << "Enter an integer between 1 and 10 to convert to a Roman Numeral" << endl;
	cin >> numeral;

	
		switch (numeral)
		{
		case 1: cout << "1 is I " << endl;
			break;
		case 2: cout << "2 is II " << endl;
			break;
		case 3: cout << "3 is III " << endl;
			break;
		case 4: cout << "4 is IV " << endl;
			break;
		case 5: cout << "5 is V " << endl;
			break;
		case 6: cout << "6 is VI " << endl;
			break;
		case 7: cout << "7 is VII " << endl;
			break;
		case 8: cout << "8 is VIII " << endl;
			break;
		case 9: cout << "9 is IX " << endl;
			break;
		case 10: cout << "10 is X " << endl;
			break;
		default: cout << "You didn't enter valid number";
		}

	

	
	_getch();
	return 0;
}