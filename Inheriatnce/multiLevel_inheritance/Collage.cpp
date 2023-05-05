#include<iostream>
#include<conio.h>

using namespace std;

class Collage
{
    public:
    char name[20];
    int collageCode;
    void getCollage()
    {
        cout<<"Enter the Collage name";
        cin>>name;
        cout<<"Enter the collage code";
        cin>>collageCode;
    }
    void putCollage()
    {
        cout<<"Collage Name is "<<name;
        cout<<"Collage Code is"<<collageCode;
    }
};
class Student : public Collage
{
    public:
    char studentName[20];
    int RollNo;
    void getStudent()
    {
        cout<<"Enter the name of student";
        cin>>studentName;
        cout<<"Enter the Roll no of student";
        cin>>RollNo;
    }
    void putStudent()
    {
        cout<<"Student_Name:"<<studentName;
        cout<<"StudentRollNO:"<<RollNo;
    }
};

int main()
{
    Student s;
    s.getCollage();
    s.putCollage();
    s.getStudent();
    s.putStudent();
    return 0;
}