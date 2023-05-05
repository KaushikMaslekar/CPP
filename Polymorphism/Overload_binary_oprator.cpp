#include<iostream.h>
#include<conio.h>
#include<string.h>

class opOv
{
    char str1[10];
    public:
    void getData()
    {
        cout<<"Enter the string";
        cin>>str1;
    }
    void operator +(opOv o)
    {
        cout<<strcat(str1, o.str1);
    }
};
int main()
{
    opOv o1, o2;
    o1.getData();
    o2.getData();
    o1 + o2;
    return 0;
}