//program to demonstrate use of default constructor
#include<iostream>
using namespace std;

class Cube
{
    public:
    int side;
    Cube()
    {
        side=10;
    }
};

int main()
{
    Cube c1;
    cout<<c1.side<<endl;
    return 0;
}