// Domenico Zaffora
// CSC 114
// Homework 11

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int students, movies, total = 0, average;
	int *student_ptr;

	cout << "This program will ask for how many college students are being surveyed\n"
		<< "then will ask for how many movies each student has seen\n"
		<< "and then will tell you the average.\n"
		<< "\n How many students are being surveyed? ";
	cin >> students;

	student_ptr = new int[students];

	for (int i = 0; i < students; i++) {
		cout << "Please enter the number of movies watched by student "
			<< i + 1 << endl;
		cin >> movies;
		*(student_ptr + i) = movies;
	}

	for (int j = 0; j < students; j++) {
		total += *(student_ptr + j);
	}

	average = total / students;

	cout << "The average number of movies watched per student is: " << average;


	delete[]student_ptr;
	_getch();
	return 0;
}