#include<iostream>
#include<conio.h>

using namespace std;

class Employee
{
    int empid, empCode;
    public:
    void emp()
    {
        cout<<"\nEnter the employee id";
        cin>>empid;
        cout<<"\nEnter the employee code";
        cin>>empCode;
    }
    void display_1()
    {
        cout<<"\nEmployee id is "<<empid;
        cout<<"\nEmployee code is"<<empCode;
    }
};

class Programmer : public Employee
{
    char Skill[10];
    public:
    void skill()
    {
        cout<<"Enter the skill of the programmer";
        cin>>Skill;
    }
    void display()
    {
        cout<<"\nThe programmer skill is"<<Skill;
    }
};
class manager : public Programmer
{
    char dept[10];
    public:
    void Dept()
    {
        cout<<"Enter the name of department";
        cin>>dept;
    }
    void display_3()
    {
        cout<<"\nname of department is"<<dept;
    }
};

int main()
{
    manager m;
    m.emp();
    m.display_1();
    m.skill();
    m.display();
    m.Dept();
    m.display_3();
    return 0;
}