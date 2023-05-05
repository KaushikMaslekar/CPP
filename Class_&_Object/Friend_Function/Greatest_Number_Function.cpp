#include<iostream>
#include<conio.h>

using namespace std;

class second;
class first
{
    int x;
    public:
    void getX()
    {
        cout<<"Enter the value of x";
        cin>>x;
    } 
    friend void max(first, second);
};

class second
{
    int y;
    public:
    void getY()
    {
        cout<<"Enter the value of y";
        cin>>y;
    }
    friend void max(first, second);
};

void max (first a, second b)
{
    if(a.x>b.y)
    {
        cout<<"Greater value is "<<a.x;
    }
    else
    {
        cout<<"Greater value is "<<b.y;
    }
}

int main()
{
    first a;
    second b;
    a.getX();
    b.getY();
    max(a, b);
    return 0;
}