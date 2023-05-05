#include<iostream>
#include<conio.h>

using namespace std;

class Data
{
    protected:
    char Employee_name[20];
    int Empid;
    int age;
    int salary;
    char feild[30];
    public:
    void Accept()
    {
        cout<<"Enter the Employee name, Employee ID, Age, Salary and Feild";
        cin>>Employee_name>>Empid>>age>>salary>>feild;
    }
};

class Employee : public Data
{
    public:
    void display()
    {
        cout<<"Employee_Name\n"<<Employee_name<<"Empid\n"<<Empid<<"Age\n"<<age<<"salary\n"<<salary<<"feild\n"<<feild;
    }
};

int main()
{
    Employee e;
    e.Accept();
    e.display();
    return 0;
}