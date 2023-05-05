#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int ch;
    float a, b, r, Addition, Subtraction, Multiplication, Division, Area_of_Circle, Area_of_Rectangle, Ans;
    cout<<"----MENU-----"<<endl;
    cout<<"1:Addition"<<endl;
    cout<<"2:Subtraction"<<endl;
    cout<<"3:Multiplication"<<endl;
    cout<<"4:Division"<<endl;
    cout<<"5:Area_of_Circle"<<endl;
    cout<<"6:Area_of_Rectangle"<<endl;
    cout<<"Enter to Choose your Choice";
    cin>>ch;
    cout<<"Thanks For choosing"<<endl;
    cout<<"Now, Enter The Two Numbers for calculating your Choice"<<endl;
    cin>>a>>b;
    // cin>>r;
    switch (ch)
    {
    case 1:
    Addition = a + b;
    cout<<"Your Addition is ="<<Addition; 
        break;
    case 2:
    Subtraction = a - b;
    cout<<"Your Subtraction is ="<<Subtraction;
        break;
    case 3:
    Multiplication = a * b;
    cout<<"Your Multiplication ="<<Multiplication;
        break;
    case 4:
    Division = a / b;
    cout<<"Your Division ="<<Division;
        break;
    case 5:
    Area_of_Circle = 3.14*r*r;
    cout<<"Area_of_Circle ="<<Area_of_Circle;
        break;
    case 6:
    Area_of_Rectangle = 2*3.14*r;
    cout<<"Area_of_Rectangle ="<<Area_of_Rectangle;
        break;
    default:
    cout<<"ERROR 404";
        break;
    }
    cout<<"ANSWER="<<Ans;
    return 0;
}