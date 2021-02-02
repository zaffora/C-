/* Domenico Zaffora
dzaffor1
CSC114-404
Lab-1*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string name = "John Smith";
	char grade = 'B';
	const float GPA = 3.0;
	int age = 19;

	cout << "Name: " << name << endl;
	cout << "Course Grade: " << grade << endl;
	cout << "GPA: " << GPA << endl;
	cout << "Age: " << age << endl;

	_getch();

	return 0;

}