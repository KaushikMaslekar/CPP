#include <iostream>
#include <conio.h>

using namespace std;

class series 
{
    private:
    int n, i, sum;
    public:
    void read()
    {
        cout<<"Enter the value of n";
        cin>>n;
    }
    int compute()
    {
        for(i=1; sum = 0; i++)
        {
            sum=sum+i*i;
        }
        return sum;
    }
    void display()
    {
        compute();
        cout<<"Value of the series="<<sum;
    }
};

int main()
{
    series s;
    s.read();
    s.display();
    getch();
}