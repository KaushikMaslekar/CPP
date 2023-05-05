#include<iostream>
#include<conio.h>

using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b; 
    b = temp;
    cout<<"integer values after swap"<<a<<" "<<b;
}

void swap(float x, float y)
{
    float temp1 = x;
    x = y;
    y = temp1;
    cout<<"Floating value after swap"<<x<<" "<<y;
}
int main()
{
    swap(10, 20);
    swap(10.7, 20.12);
    return 0;
}