#include<iostream>
#include<conio.h>

using namespace std;

class Data
{
    protected:
    int stuid;
    char name[20];
    int age;
    char fav_Subject[20]; 
    public:
    void read()
    {
        cout<<"Enter the stuid, name, age, fav_subject";
        cin>>stuid>>name>>age>>fav_Subject;
    }
};

class Student : public Data
{
    public:
    void display()
    {
        cout<<"Student ID"<<stuid<<"Name"<<name<<"age"<<age<<"fav_subject"<<fav_Subject;
    }
};

int main()
{
    Student s;
    s.read();
    s.display();
    return 0;
}

