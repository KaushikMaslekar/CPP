#include<iostream>
#include<conio.h>

using namespace std;

class Data
{
    protected:
    int m1, m2, add, Sub, Mul, Div;
    public:
    void Accept()
    {
        cout<<"Enter the value of m1 and m2";
        cin>>m1>>m2;
    }
};

class Total : public Data
{
    public:
    void Calculate()
    {
        add = m1 + m2;
        Sub = m1 - m2;
        Mul = m1 * m2;
        Div = m1 / m2;
    }
    void display()
    {
        cout<<"ADD\n"<<add<<"SUB\n"<<Sub<<"MUL\n"<<Mul<<"DIV\n"<<Div;
    }
};

int main()
{
    Total d;
    d.Accept();
    d.Calculate();
    d.display();
    return 0;
}