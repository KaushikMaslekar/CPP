#include<iostream.h>
#include<conio.h>
class Account
{
    long int accNo, bal;
    char name[10];
public:
void getData()
{
    cout<<"\nEnter account number, balance and name ";
    cin>>accNo>>bal>>name;
}
void putData()
{
    if(bal>10000)
    {
    cout<<"\nThe Account Number is "<<accNo;
    cout<<"\nThe Balance is "<<bal;
    cout<<"\nThe Name is "<<name;
    }
}
};

void main()
{
    Account a[8];
    int i;
    for(i=0;i<8;i++)
    {
        a[i].getData();
    }
    for(i=0;i<8;i++)
    {
        a[i].putData();
    }
}