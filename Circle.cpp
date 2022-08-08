#include "Circle.h"

extern const double PI = 3.14159;
Circle::Circle(double r, int x, int y) :Point(x, y){//calling point constructor for x and y
	setRadius(r);
	
}
void Circle::setRadius(double r){
	radius = (r > 0) ? r : 0;
}
double Circle::getRadius() const{
	return radius;
}
double Circle::calculateArea() const{
	return PI * radius * radius;
}
void Circle::print() const {
	Point::print();
	cout << "Radius:" << radius;
}
ostream& operator<<(ostream& out, const Circle& c) {
	out << "Centre at " << static_cast<Point>(c)\
		<< "radius at " << c.radius << " is " << c.calculateArea();
	return out;
}
void foo() {
	cout << "for git\n";
}
