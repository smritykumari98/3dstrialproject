#include "Shape.h"
#include <iostream>
using namespace std;
void virtualViaPointer(const Shape* baseptr) {
	baseptr->drawShape();
	baseptr->print();
	cout << "Area is " << baseptr->calculateArea() << \
		"and volume is" << baseptr->calculateVolume() << endl;
}
void virtualViaReference(const Shape &baseptref) {
	baseptref.drawShape();
	baseptref.print();
	cout << "Area is " << baseptref.calculateArea() << \
		"and volume is" << baseptref.calculateVolume() << endl;
}