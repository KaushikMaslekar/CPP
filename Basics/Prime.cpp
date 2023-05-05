#include <iostream>
#include <cmath>
using namespace std;
 
 int main()
 {
    int n;
    cout<<"enter the number\n";
    cin>>n;

    bool flag;

    for(int i = 2; i<n; i++)
    {
        if(n%i==0)
        {
            cout<<"non-prime";
            flag = 0;
            break;
        }
    }
    if(n%1!=0)
    {
        cout<<"prime";
    }
 }
 