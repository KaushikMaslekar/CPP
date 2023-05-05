#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;

class complex 
{
    int x, y;
    public:
    void read()
    {
        cout<<"Enter the real and imagnary parts of a complex number:";
        cin>>x>>y;
    }
    friend complex operator+(complex c1, complex c2);
    void display()
    {
        if(y<0)
        cout<<x<<y<<"i";
        else 
        cout<<x<<"+i"<<y;
    }
};

complex add (complex c1, complex c2)
{
    complex c;
    c.x = c1.x+c2.x;
    c.y = c1.y+c2.y;
    return 0;
}

int main()
{
    complex c1;
    complex c2; 
    complex c3;
    c1.read();
    c2.read();
    c3=c1.add(c2);
    c3.display();
    return 0;
}