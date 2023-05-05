#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(num%2==0)
    {
        cout<<"\nEntered number is even";
    }
    else 
    {
        cout<<"\nEntered the number is odd";
    }
    return 0;
}