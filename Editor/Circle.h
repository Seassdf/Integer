#pragma once
#include "Figure.h"

class Circle : public Figure

{
private:
	double radius;
public:
	Circle(): Figure(), radius(0) {}
	Circle(double radius,int x, int y) : Figure(x,y), radius(radius) {}

	int getRadius();
	int getRadius();

	void setRadius();
	void setRadius();

	double perimetr(double radius);
	virtual double square(double radius);
	virtual string draw();
};

