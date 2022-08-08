#include "cyclinder.h"

extern const double PI;//defined in Circle.cpp
Cylinder::Cylinder(double h, double r, int x, int y):Circle(r,x,y) {
	setheight(h);
}
void Cylinder::setheight(double h) {
	height = (h > 0) ? h : 0;
}
double Cylinder::getheight() const {
	return height;
}
double Cylinder::calculateArea() const {
	return 2 * Circle::calculateArea() + 2 * PI * radius * height;
}
double Cylinder::calculateVolume() const {
	return Circle::calculateArea() * height;
}
void Cylinder::print() const {
	Circle::print();
	cout << "\nheight is:" << height<<endl;
}
ostream& operator<<(ostream& out, const Cylinder& c) {
	out << static_cast<Circle>(c) << ": Height" << c.height;
	return out;
}