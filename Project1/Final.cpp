#include <iostream>
#include "Final.h"

using namespace std;

void rectangle::setLength(double l)
{
	length = l;
}

void rectangle::setWidth(double w)
{
	width = w;
}

double rectangle::getWidth() const
{
	return width;
}

double rectangle::getLength() const
{
	return length;
}

double rectangle::getArea() const
{
	return width * length;
}

double rectangle::getCirc() const
{
	return (width * 2) + (length * 2);
}

void circle::setRadius(double r)
{
	radius = r;
}

double circle::getRadius() const
{
	return radius;
}

double circle::getArea() const
{
	return radius*radius*PI;
}

double circle::getCircumference() const
{
	return (2 * PI * radius);
}