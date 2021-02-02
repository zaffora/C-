/* Domenico Zaffora
dzaffor1
CSC114-404
Lab-2*/

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float  gas, distance, mpg;

	cout << "How many gallons can your car hold in it's tank?" << endl;
	cin >> gas;
	cout << "How far can your car drive on a full tank?" << endl;
	cin >> distance;

	mpg = distance / gas;

	cout << "your average MPG is" << mpg;

	_getch();

	return 0;

}