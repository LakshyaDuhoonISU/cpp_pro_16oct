// program to demonstrate use of parameterised constructor
#include <iostream>
using namespace std;

class Area
{
public:
    double length, height;
    Area(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    void displayArea()
    {
        cout << "Area: " << length * height << endl;
    }
};

int main()
{
    double len,hgt;
    cout<<"Enter length: ";
    cin>>len;
    cout<<"Enter height: ";
    cin>>hgt;
    Area wall1(10, 5);
    wall1.displayArea();
    return 0;
}