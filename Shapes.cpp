// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "cyclinder.h"
#include "Shape.h"

int main()
{
    //Point p(30, 50);
    //cout <<"=====Point p:=====\n"<< p;
    Point* pointPtr = 0, p(30, 50);
    Circle* circlePtr = 0, c(2.7, 120, 89);
    cout << "======Point p:====\n " << p << "\n=====Circle=======\n" << c << "\n";
    pointPtr = &c;//base class pointer pointing to the object of child class...we can do in this way
    cout << "\nCircle c (via *pointPtr): " << *pointPtr << "\n";  

   
    circlePtr = static_cast<Circle*>(pointPtr);//in case we need to point to base class object use static_cast
    cout << "\nCircle c (via *circlePtr):" << *circlePtr\
        << "\nArea of circle (via *circlePtr):" << circlePtr->calculateArea() << "\n";


    pointPtr = &p;//pointer points to base class object ..we can access child class fun but not real value
    circlePtr = static_cast<Circle*>(pointPtr);
    cout << "\nPoint p(via *circlePtr):" << *circlePtr\
        << "\nArea of object circlePtr point to:" << circlePtr->calculateArea() << "\n";


    Cylinder cy(5.7,2.5,12,23);
    cout << "\n=======Cylinder Area=======\n";
    cout << cy.calculateArea();
    cout << "\n=======Cylinder Volume======\n";
    cout << cy.calculateVolume();
    cout << "\n===========For Shapes===========\n";
    Point p1(2, 4);
    p1.drawShape();
    p1.print();
    cout << "Area is " << p1.calculateArea() << " and volume is " << p1.calculateVolume()<< endl;
    cout << "\n";
    Circle c1(2,4,5);
    c1.drawShape();
    c1.print();
    cout << "\n";
    cout << "Area is " << c1.calculateArea() << " and volume is " << c1.calculateVolume() << endl;
    Cylinder c2(6, 4, 7, 9);
    c2.drawShape();
    c2.print();
    cout << "\n";
    cout << "Area is " << c2.calculateArea() << " and volume is " << c2.calculateVolume() << endl;
    cout << "\n";
    cout << "\n=======Using address======\n";
    Shape* shape[3] = { &p1,&c1,&c2 };
    for (int i = 0; i < 3; i++)
    {
        virtualViaPointer(shape[i]);
    }
    cout << "\n=======Using reference======\n";
    for (int i = 0; i < 3; i++)
    {
        virtualViaReference(*shape[i]);
    }
    return 0;   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
