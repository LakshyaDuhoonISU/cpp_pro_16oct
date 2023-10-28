// program to demonstrate use of copy constructor
#include <iostream>
using namespace std;

class Wall
{
public:
    double length, height;
    Wall(double len, double hgt)
    {
        length = len;
        height = hgt;
    }
    Wall(Wall &obj)
    {
        length = obj.length;
        height = obj.height;
    }
    void displayArea()
    {
        cout << "Area: " << length * height << endl;
    }
    void displayPerimeter()
    {
        cout<< "Perimeter " <<  2*(length+height)<< endl;
    }
};

int main()
{
    Wall wall1(10, 5);
    Wall wall2 = wall1;
    wall1.displayArea();
    wall2.displayArea();
    return 0;
}
