#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Interest 
{
    private:
    static float rate;
    float principle, duration, sim_int;
    public:
    void accept()
    {
        cout<<"\nEnter principle amount and duration:";
        cin>>principle>>duration;
    }
    void calculate()
    {
        sim_int=principle*duration/100;
    }
    void display(){
        cout<<"\nSimple Interest ="<<sim_int;
    }
};
int main()
{
    Interest i;
    i.accept();
    i.calculate();
    i.display();
    return 0;
}