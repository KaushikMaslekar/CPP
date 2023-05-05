#include<iostream>
#include<conio.h>

using namespace std;

class student 
{
    public:
    int rNo;
    void getNumber()
    {
        cout<<"\nEnter the Roll no";
        cin>>rNo;
    }
    void putNumber()
    {
        cout<<"Number is"<<rNo;
    }
};

class Test: virtual public student
{
    public:
    int part1, part2;
    void getMarks()
    {
        cout<<"Enter Marks\n";
        cout<<"part 1";
        cin>>part1;
        cout<<"part 2";
        cin>>part2;
    }
    void putMarks()
    {
        cout<<"Marks Obtained in";
        cout<<"\n\tPart 1"<<part1;
        cout<<"\n\tPart 2"<<part2;
    }
};

class sport: virtual public student
{
    public:
    int score;
    void getScore()
    {
        cout<<"Enter the sport score";
        cin>>score;
    }
    void putScore()
    {
        cout<<"sport score is"<<score;
    }
};

class result: virtual public student
{
    public:
    int total;
    void display()
    {
        total = part1 + part2 + score;
        cout<<"\n\tTotal score is "<<total;
    }
};

int main()
{
    result obj;
    obj.getNumber();
    obj.putNumber();
    obj.getMarks();
    obj.putMarks();
    obj.getScore();
    obj.putScore();
    return 0;
}






















