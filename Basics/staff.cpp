#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

class staff
{
    private:
    char name[20], dept[20];
    public:
    void accept()
    {
        cout<<"Enter name and department";
        cin>>name>>dept;
    }
    void display()
    {
        cout<<name<<"\t"<<"\n"<<dept<<"\t"<<"\n";
    }
};
int main()
{
    int i;
    staff s[10];
    for(i=0; i<=9; i++)
    {
        s[i].accept();
        cout<<"Name\tDepartment\n";
    }
    
    for(i=0;i<=9;i++)
    {
        s[i].display();
    }
    getch();
}