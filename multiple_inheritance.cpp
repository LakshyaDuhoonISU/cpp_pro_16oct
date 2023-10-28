// program to demonstrate use of multiple inheritance
#include <iostream>
using namespace std;

class A //base class A
{
public:
    int x;
    void getx()
    {
        cout << "Enter value of x: ";
        cin >> x;
    }
};

class B //base class B
{
public:
    int y;
    void gety()
    {
        cout << "Enter value of y: ";
        cin >> y;
    }
};

class C : public A, public B //derived class C from base class A and B
{
private:
    int z;

public:
    void getz()
    {
        cout << "Enter value of z: ";
        cin >> z;
    }
    void sum()
    {
        cout << "Sum is: " << x + y + z << endl;
    }
};

int main()
{
    C obj1;
    obj1.getx();
    obj1.gety();
    obj1.getz();
    obj1.sum();
    return 0;
}