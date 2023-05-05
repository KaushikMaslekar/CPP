#include<iostream>
#include<conio.h>

using namespace std;

class School
{
    protected:
    char schName[20];
    char principalName[20];
    int Classes;
    public:
    void Accept_1()
    {
        cout<<"Enter the schName, PrincipalName, classes of the schools";
        cin>>schName>>principalName>>Classes;
    }
    void display_1()
    {
        cout<<schName<<principalName<<Classes;
    }
};
class Teacher : public School
{
    protected:
    char TeacherName[20];
    int TeacherID;
    int salary;
    public:
    void Accept_2()
    {
        cout<<"Enter the Teacher Name, principalName, salary";
        cin>>TeacherName>>TeacherID>>salary;
    }
    void display_2()
    {
        cout<<TeacherName<<TeacherID<<salary;
    }
};
class Student : public Teacher
{
    protected:
    char StudentName;
    int StudentID;
    public:
    void Accept_3()
    {
        cout<<"Enter the Student Name and Student ID";
        cin>>StudentName>>StudentID;
    }
    void display_3()
    {
        cout<<StudentName<<StudentID;
    }
};
int main()
{
    Student s;
    s.Accept_1();
    s.Accept_2();
    s.Accept_3();
    s.display_1();
    s.display_2();
    s.display_3();
    return 0;
}