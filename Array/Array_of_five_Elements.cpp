#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a[5], smallest, i;
    cout<<"Enter an element";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<5;i++)
    {
        if(a[i]<smallest)
        {
            smallest = a[i];
        }
    }
    cout<<"Smallest Number"<<smallest;
    return 0;
}
