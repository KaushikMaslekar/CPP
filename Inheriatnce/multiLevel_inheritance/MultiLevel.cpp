#include<iostream>
#include<conio.h>

using namespace std;

class carManufacturer
{
    public:
    char Name[10];
    void getCarName()
    {
        cout<<"Enter the name of car";
        cin>>Name;
    }
    void putCarName()
    {
        cout<<"\nName of car is"<<Name;
    }
};

class carModel : public carManufacturer
{
    public:
    char modelName[10];
    int modelNo;
    void getCarModel()
    {
        cout<<"\nEnter Car Model Name and Model No. ";
        cin>>modelName>>modelNo;
    }
    void putCarModel()
    {
        cout<<"\nEnter Car Model Name and Model No."<<modelName<<" "<<modelNo;
    }
};

class Car: public CarModel
{
    public:
    char colour[10], CarNo[10];
    void getCar()
    {
    cout<<"\nEnter Car colour and car number";
    cin>>colour>>CarNo;
    }
    void putCar()
    {
        cout<<"\nEnter Car colour and car number "<<colour<<"
    "<<CarNo;
    }
};
int main()
{
    Car c;
    c.getCarName();
    c.getCarModel();
    c.getCar();
    c.putCarName();
    c.putCarModel();
    c.putCar();
    getch();
}