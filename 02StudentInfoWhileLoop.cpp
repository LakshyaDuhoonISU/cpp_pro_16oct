// program to read and print student information for BTech admission
#include <iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name, address, email, phone,date,month,year;
    bool eligible=true;
    double sum=0,avg;
};

class Detail : public Student
{
public:
    void setName()
    {
        cout << "Enter name: ";
        getline(cin, name);
    }
    void getName()
    {
        cout<<endl<<"Name: "<<name<<endl;
    }
    void setDob()
    {
        next:
        cout << "Enter Date of Birth(DD): ";
        cin >> date;
        if (date.length()>2 || date.length()<2)
        {
            cout<<"Wrong date. Please enter again"<<endl;
            goto next;
        }
        next1:
        cout<<"Enter Month of Birth(MM): ";
        cin>>month;
        if (month.length()>2 || month.length()<2)
        {
            cout<<"Wrong month. Please enter again"<<endl;
            goto next1;
        }
        next2:
        cout<<"Enter Year of Birth(YYYY): ";
        cin>>year;
        if (year.length()>4 || year.length()<4 )
        {
            cout<<"Wrong year. Please enter again"<<endl;
            goto next2;
        }
    }
    void getDob()
    {
        cout<<"Date of Birth: "<<date<<"/"<<month<<"/"<<year<<endl;
    }
    void setAddress()
    {
        cin.ignore();
        cout << "Enter Address: ";
        getline(cin, address);
    }
    void getAddress()
    {
        cout<<"Address: "<<address<<endl;
    }
    void setEmail()
    {
        cout << "Enter Email: ";
        getline(cin, email);
    }
    void getEmail()
    {
        cout<<"Email: "<<email<<endl;
    }
    void setPhone()
    {
        start:
        cout << "Enter Phone Number: ";
        cin >> phone;
        if (phone.length()>10 || phone.length()<10)
        {
            cout<<"Invalid phone number."<<endl;
            goto start;
        }
    }
    void getPhone()
    {
        cout<<"Phone Number: "<<phone<<endl;
    }
    void setPercentage()
    {
        double percentage[4];
        string exam[4]={"JEE","MHTCET","BOARDS(PCM)","CTO"};
        for (int i=0;i<4;i++)
        {
            cout << "Enter Percentage of "<<exam[i]<<" exam: ";
            cin >> percentage[i];
            sum+=percentage[i];
        }
        for (int i=0;i<4;i++)
        {
            if (percentage[i]<60)
            {
                eligible=false;
            }
        }
        avg=sum/4;
    }
    void getPercentage()
    {
        cout<<"Average: "<<avg<<endl;
        if (!eligible)
        {
            cout<<"Sorry, you are not eligible."<<endl;
        }
        else if (avg < 60)
        {
            cout << "You are ineligible.";
        }
        else if (avg>=60 && avg<70)
        {
            cout<<"You are eligible for- "<<endl<<"BTech Information Technology."<<endl;
        }
        else if (avg>=70 && avg<80)
        {
            cout<<"You are eligible for-"<<endl<<"BTech Electronics & Telecommunications."<<endl<<"BTech Information Technology."<<endl;
        }
        else if (avg>=80 && avg<90)
        {
            cout<<"You are eligible for-"<<endl<<"BTech Computer Engineering."<<endl<<"BTech Electronics & Telecommunications."<<endl<<"BTech Information Technology."<<endl;
        }
        else
        {
            cout<<"You are eligible for- "<<endl<<"BTech Artifical Intelligence and Data Science."<<endl<<"BTech Computer Engineering."<<endl<<"BTech Electronics & Telecommunications."<<endl<<"BTech Information Technology."<<endl;;
        }
    }
};

int main()
{
    Detail s1;
    s1.setName();
    s1.setDob();
    s1.setAddress();
    s1.setEmail();
    s1.setPhone();
    s1.setPercentage();
    s1.getName();
    s1.getDob();
    s1.getAddress();
    s1.getEmail();
    s1.getPhone();
    s1.getPercentage();
    return 0;
}
