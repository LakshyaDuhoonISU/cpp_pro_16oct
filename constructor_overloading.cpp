// program to demonstrate constructor overloading
#include <iostream>
using namespace std;

class Rect
{
private:
    double area;

public:
    Rect()
    {
        area = 0;
    }
    Rect(double length, double breadth)
    {
        area = length * breadth;
    }
    void displayArea()
    {
        cout << "Area: " << area << endl;
    }
};

int main()
{
    Rect r1, r2(10, 5);
    r1.displayArea();
    r2.displayArea();
    return 0;
}