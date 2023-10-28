// program to demonstrate single inheritance of classes
#include <iostream>
using namespace std;

class Shape // base class
{
public:
    int width, height, base; // data members for base class Shape
    void setBase(int b) // member functions for base class Shape
    {
        base = b;
    }
    void setWidth(int w) 
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape // derived class Rectangle
{
public:
    int getArea() // member functions for derived class
    {
        return (width * height); // returning the value of area of rectangle
    }
};

class Triangle : public Shape // another derived class
{
public:
    int getArea() // member functions for derived class
    {
        return (0.5 * base * height); //returning the value of area of triangle
    }
};

int main()
{
    Rectangle Rect; //initialising an object Rect of class Rectangle
    Triangle Tri; //initialising an object Tri of class Triangle
    Rect.setWidth(5); //calling a function from base class
    Rect.setHeight(7); 
    Tri.setBase(10);
    Tri.setHeight(5);
    cout << "Total area of Rectangle: " << Rect.getArea() << endl; //calling a function from derived class Rectangle
    cout << "Total area of Triangle: " << Tri.getArea() << endl; //calling a function from derived class Triangle
    return 0;
}