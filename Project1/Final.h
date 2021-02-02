#pragma once
# define FINAL_H

class rectangle
{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
	double getCirc() const;
};

class circle
{
private:
	double radius;
	double PI = 3.14159;
public:
	void setRadius(double);
	double getRadius() const;
	double getArea() const;
	double getCircumference() const;
};