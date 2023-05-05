#include<iostream>
#include<conio.h>

class Teacher
{
    protected:
    char name[20];
    int empid;
};
class student
{
    protected:
    char sname[20];
    int rollNo;
};

class info:public Teacher, public student
{
    public:
void acceptT()
{
    cout<<"\nEnter data for teacher:";
    cout<<"\nName:";
    cin>>Name;
    cout<<"\nEmployee id:";
    cin>>empid;
}
void displayT()
{
    cout<<"\nTeacher's data is:";
    cout<<"\nName:"<<Name;
    cout<<"\nEmployee id:"<<empid;
}                                                               
void acceptS()
{
    cout<<"\nEnter student's data:";
    cout<<"\nName:";
    cin>>sname;
    cout<<"\nRoll no:";
    cin>>rollNo;
}
void displayS()
{
    cout<<"\nStudent's data is:";
    cout<<"\nName:"<<sname;
    cout<<"\nRoll no:"<<rollNo;
}
};
void main()
{
    Info I;
    I.acceptT();
    I.displayT();
    I.acceptS();
    I.displayS();
    getch();
}