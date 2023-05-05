#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void get_no(int);
        void put_no(void);
};
class student :: get_no(int a)
{
    roll_no = a;
}
class  student :: put_no()
{
    cout<<"Roll Number"<<roll_no;
}

class test:public student
{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(int);
        void put_marks(void);
};
class test::get_marks(float a, float b)
{
    sub1 = x;
    sub2 = y;
}
class test::put_marks()
{
    cout<<"Marks in sub1"<<sub1;
    cout<<"Marks in sub2"<<sub2;
}

class result:public test
{
    protected:
        float total;
    public:
        void display(void);
}
class  result::display()
{
    total = sub1 + sub2;
    put_no();
    put_marks();
    cout<<"Total is"<<total;
}
main()
{
    result s;
    s.get_no(74);
    s.get_marks(45.0, 59.8);
    s.display();
    return 0;
}