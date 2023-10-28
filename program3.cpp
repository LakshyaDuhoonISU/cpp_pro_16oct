// given that employee class content following members:
// data members: employee number, employee name, basic(salary), DA(daily allowance), net salary and print data members
// employee designations are: principal, HOD, professor, lab assistant

#include <iostream>
#include<string>
using namespace std;

class Employee
{
public:
    int post;
    string emp_name,emp_num,emp_post[4]={"Principal", "HOD", "Professor", "Lab Assistant"};
    double basic, da, netSalary;
};

class Detail : public Employee
{
public:
    void setPost()
    {
        start:
        cout<<"Select your post: "<<endl<<"1.Principal"<<endl<<"2.HOD"<<endl<<"3.Professor"<<endl<<"4.Lab Assistant"<<endl;
        cin>>post;
        if (post>4||post<1)
        {
            cout<<"Invalid post. Please select again."<<endl;
            goto start;
        }
    }
    void setNum()
    {
        cout << "Enter employee number: ";
        cin>>emp_num;
    }
    void setName()
    {
        cin.ignore();
        cout << "Enter employee name: ";
        getline(cin,emp_name);
    }
    void setBasic()
    {
        cout << "Enter basic salary: ";
        cin>>basic;
    }
    void setDA()
    {
        da=0.70*basic;
    }
    void getPost()
    {
        cout<<endl<<"Employee Post: "<<emp_post[post-1]<<endl;
    }
    void getNum()
    {
        cout << "Employee Number: " << emp_num << endl;
    }
    void getName()
    {
        cout << "Employee Name: " << emp_name << endl;
    }
    void getSalary()
    {
        cout << "Basic Salary: " << basic << endl;
        cout << "Daily Allowance: " << da << endl;
        cout << "Net Salary: " << basic + da << endl;
    }
};

int main()
{
    Detail d1;
    d1.setPost();
    d1.setNum();
    d1.setName();
    d1.setBasic();
    d1.setDA();
    d1.getPost();
    d1.getNum();
    d1.getName();
    d1.getSalary();
    return 0;
}
