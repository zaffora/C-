// Domenico Zaffora
// CSC 114-401
// Homework 2

#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	float grade1, grade2, grade3, grade4, grade5, average;

	cout << "Enter 5 grades to see the average score. /n";

	cout << "Enter grade 1: ";
	cin >> grade1;

	cout << "Enter grade 2: ";
	cin >> grade2;

	cout << "Enter grade 3: ";
	cin >> grade3;

	cout << "Enter grade 4: ";
	cin >> grade4;

	cout << "Enter grade 5: ";
	cin >> grade5;
	
	average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

	cout << "Your Average score ie " << setprecision(1) << average << endl;

	_getch();
	return 0;
}