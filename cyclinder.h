#pragma once
#include "Circle.h"

class Cylinder :public Circle {
	friend ostream& operator<<(ostream&, const Cylinder&);
public:
	Cylinder(double = 0, double = 0, int = 0, int = 0);
	void setheight(double h);
	double getheight() const;
	//double calculateArea() const;
	//double calculateVolume() const;
	virtual double calculateArea() const;
	virtual double calculateVolume() const;
	virtual void drawShape() const { cout << "Cylinder:"; }
	virtual void print() const;

protected:
	double height;
};