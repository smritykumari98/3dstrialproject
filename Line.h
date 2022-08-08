#pragma once
#include "Point.h"
class Line {
public:
	Line(int x,int y);
	~Line();
	int calculateLength() const;
private:
	Point* start;
	Point* end;
};
