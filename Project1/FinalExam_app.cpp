#include <iostream>
#include <conio.h>
#include "Final.h"

using namespace std;

double largestA(double area[]);
double smallestC(double circ[]);

int main()
{
	rectangle r1, r2;
	circle c1, c2;
	double w, l, r;
	double area[4], circ[4];

	cout << "This program will creat 2 rectangles & 2 Circles,\n"
		<< "then tell you the largest area and smallest circumerfence.\n"
		<< "Please enter the length of the first rectangle: ";
	cin >> l;
	r1.setLength(l);
	cout << "Please enter the width of the first rectangle: ";
	cin >> w;
	r1.setWidth(w);

	cout << "Please enter the length of the second rectangle: ";
	cin >> l;
	r2.setLength(l);
	cout << "Please enter the width of the second rectangle: ";
	cin >> w;
	r2.setWidth(w);

	cout << "The area of the first rectangle is " << r1.getArea() << " and it's circumference is " << r1.getCirc() << endl;
	cout << "The area of the second rectangle is " << r2.getArea() << " and it's circumference is " << r2.getCirc() << endl;

	cout << "Please enter the radius of the first circle: ";
	cin >> r;
	c1.setRadius(r);
	cout << "Please enter the radius of the second circle: ";
	cin >> r;
	c2.setRadius(r);
	cout << "The area of the first circle is " << c1.getArea() << " and it's circumference is " << c1.getCircumference() << endl;
	cout << "The area of the second circle is " << c2.getArea() << " and it's circumference is " << c2.getCircumference() << endl;

	area[0] = r1.getArea();
	area[1] = r2.getArea();
	area[2] = c1.getArea();
	area[3] = c2.getArea();
	circ[0] = r1.getCirc();
	circ[1] = r2.getCirc();
	circ[2] = c1.getCircumference();
	circ[3] = c2.getCircumference();

	cout << "The largest area is: " << largestA(area) << endl;
	cout << "The smallest circumference is: " << smallestC(circ) << endl;

	_getch();
	return 0;
}

double largestA(double area[]){
	double largest = 0;
	
	largest = area[0];
	for (int i = 0; i < 3; i++) {
		if (area[i] <= area[i + 1]) {
			largest = area[i + 1];
		}
	}
	return largest;
}

double smallestC(double circ[])
{
	double smallest = 0;
	smallest = circ[0];
	for (int i = 0; i < 3; i++) {
		if (circ[i] >= circ[i + 1]) {
			smallest = circ[i + 1];
		}
	}
	return smallest;
}