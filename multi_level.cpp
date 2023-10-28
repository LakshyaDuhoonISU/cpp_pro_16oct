// program to demonstrate use of multi level class
#include <iostream>
using namespace std;

class Base //base class 
{
public:
    int x;
    void getData()
    {
        cout << "Enter value of x: ";
        cin >> x;
    }
};

class Derive1 : public Base //derived class from base class Base(inheriting members of Base class as public members in derived class)
{
public:
    int y;
    void readData()
    {
        cout << "Enter value of y: ";
        cin >> y;
    }
};

class Derive2 : public Derive1 //derived class from derived class Derive1(base class Base)
{
private:
    int z;

public:
    void inData()
    {
        cout << "Enter value of z: ";
        cin >> z;
    }
    void product()
    {
        cout << "Product: " << x * y * z << endl;
    }
};

int main()
{
    Derive2 obj;
    obj.getData();
    obj.readData();
    obj.inData();
    obj.product();
    return 0;
}