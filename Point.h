#pragma once

#include "Shape.h"
#include<iostream>
using namespace std;

class Point:public Shape
{
	friend ostream& operator<<(ostream&, const Point&);
public:
	Point(int = 0, int = 0);//(int = 0, int = 0,int =0)
	void setPoint(int,int);
	int getX() const {return x;}
	int getY() const {return y;}
	virtual void drawShape() const { cout << "Point :"; }
	virtual void print() const;
	//void in_rc();
	//void dec_rc();
protected:
	
	int x;
	int y;
	//int refc;

};
