#include<iostream>
#include<conio.h>

using namespace std;

struct employee
{
    int empid;
    char empName[20];
};

int main()
{
    employee e;
    cout<<"Enter the employee id and name";
    cin>>e.empid>>e.empName;
    cout<<"\nEmpid is"<<e.empid;
    cout<<"\nEmpName is"<<e.empName;
    return 0;
}