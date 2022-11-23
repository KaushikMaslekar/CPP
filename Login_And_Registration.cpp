#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{
    int c;
    cout<<"\t\t\t_________________________________________\n\n\n";
    cout<<"\t\t\t           welcome to login page             \n\n\n";
    cout<<"\t\t\t____________________MENU___________________\n\n";
    cout<<"                                              ";
    cout<<"\t| press 1 to LOGIN              |"<<endl;
    cout<<"\t| press 2 to REGISTER           |"<<endl;
    cout<<"\t| press 3 to to forgot password |"<<endl;
    cout<<"\t| press 4 to exit               |"<<endl;

    cout<<"\n\t\t\t please enter your choice :";
    cin>>c;
    cout<<endl;

    switch(c)
    {
        case 1:
            login();
            break;

        case 2:
            registration();
            break;

        case 3:
            forgot();
            break();
        
        case 4:
            cout<<"\t\t\t Thank you! \n\n";
            break;

        default:
        cout<<"\t\t\t Please select from the option given above \n\n"<<endl;
        main();
    }


}

void login()
{
    int count;
    string userId, password, id, pass;
    
}