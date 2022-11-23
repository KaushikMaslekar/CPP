#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int Quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qpizza = 0;
    //food item sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Spizza = 0;
    //Total process of item
    int Total_rooms = 0, Total_burger = 0, Total_pasta = 0, Total_noodles = 0, Total_shake = 0, Total_pizza = 0;

    cout<<"\n\tQuantity of item we have";
    cout<<"\nRooms Available";
    cin>>Qrooms;
    cout<<"\nQuantity of pasta";
    cin>>Qpasta;
    cout<<"\nQuantity of Burger";
    cin>>Qburger;
    cout<<"\nQuantity of noodles";
    cin>>Qnoodles;
    cout<<"\nQuantity of shake";
    cin>>Qshake;
    cout<<"\nQuantity of pizza";
    cin>>Qpizza;


    m:
    cout<<"\n\t\t\t Please select from the menu options ";
    cout<<"\n\n1. Rooms";
    cout<<"\n2. pasta";
    cout<<"\n3. burger";
    cout<<"\n4. noodles";
    cout<<"\n5. shake";
    cout<<"\n6. pizza";
    cout<<"\n7. Information regrading sales and collection";
    cout<<"\n8. Exit";

    cout<<"\n\n Please Enter your choice";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n\nEnter the number of rooms you wants";
            cin>>Quant;
            if(Qrooms - Srooms >= Quant)
            {
                Srooms = Srooms+Quant;
                Total_rooms = Total_rooms+Quant+1200;
                cout<<"\n\n\t\t"<<Quant<<"rooms have been alloted to you";
            }
            else
            {
                cout<<"\n\tOnly"<<Qrooms-Srooms<<"Rooms remaining in hotel";
                break;
            }

        case 2:
            cout<<"\n\nEnter the number of pasta Quantity you wants";
            cin>>Quant;
            if(Qpasta - Spasta >= Quant)
            {
                Spasta = Spasta+Quant;
                Total_pasta = Total_pasta+Quant+250;
                cout<<"\n\n\t\t"<<Quant<<"pasta is the ordered";
            }
            else
            {
                cout<<"\n\tOnly"<<Qpasta-Spasta<<"pasta remaining in hotel";
                break;
            }    
        case 3:
            cout<<"\n\nEnter the number of Burger Quantity you wants";
            cin>>Quant;
            if(Qburger - Sburger >= Quant)
            {
                Sburger = Sburger+Quant;
                Total_burger = Total_burger+Quant+150;
                cout<<"\n\n\t\t"<<Quant<<"Burger is the ordered";
            }
            else
            {
                cout<<"\n\tOnly"<<Qburger-Sburger<<"pasta remaining in hotel";
                break;
            }  
        case 4:
            cout<<"\n\nEnter the number of Noodles Quantity you wants";
            cin>>Quant;
            if(Qnoodles - Snoodles >= Quant)
            {
                Snoodles = Snoodles+Quant;
                Total_noodles = Total_noodles+Quant+200;
                cout<<"\n\n\t\t"<<Quant<<"noodels is the ordered";
            }
            else
            {
                cout<<"\n\tOnly"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
                break;
            }    
        case 5:
            cout<<"\n\nEnter the number of shake Quantity you wants";
            cin>>Quant;
            if(Qshake - Sshake >= Quant)
            {
                Sshake = Sshake+Quant;
                Total_shake = Total_shake+Quant+180;
                cout<<"\n\n\t\t"<<Quant<<"shake is the ordered";
            }
            else
            {
                cout<<"\n\tOnly"<<Qshake-Sshake<<"shake remaining in hotel";
                break;
            }    
        case 6:
            cout<<"\n\nEnter the number of pizza Quantity you wants";
            cin>>Quant;
            if(Qpizza - Spizza >= Quant)
            {
                Spizza = Spizza+Quant;
                Total_pizza = Total_pizza+Quant+300;
                cout<<"\n\n\t\t"<<Quant<<"pizza is the ordered";
            }
            else
            {
                cout<<"\n\tOnly"<<Qpizza-Spizza<<"pizza remaining in hotel";
                break;
            } 
        case 7:
            cout<<"Details of sales and collection";
            cout<<"\n\n Number of rooms we had :"<<Qrooms;
            cout<<"\n\n Number of rooms we give for rents :"<<Srooms;
            cout<<"\n\n Remaining rooms :"<<Qrooms - Srooms;
            cout<<"\n\nTotal Rooms Collection of the day :"<<Total_rooms;

            cout<<"\n\n Number of pasta we had :"<<Qpasta;
            cout<<"\n\n Number of pasta we give for rents :"<<Spasta;
            cout<<"\n\n Remaining pasta :"<<Qpasta - Spasta;
            cout<<"\n\nTotal pasta Collection of the day :"<<Total_pasta;

            cout<<"\n\n Number of noodles we had :"<<Qnoodles;
            cout<<"\n\n Number of noodles we give for rents :"<<Snoodles;
            cout<<"\n\n Remaining noodles :"<<Qnoodles - Snoodles;
            cout<<"\n\nTotal noodles Collection of the day :"<<Total_noodles;

            cout<<"\n\n Number of burger we had :"<<Qburger;
            cout<<"\n\n Number of burger we give for rents :"<<Sburger;
            cout<<"\n\n Remaining burger :"<<Qburger - Sburger;
            cout<<"\n\nTotal burger Collection of the day :"<<Total_burger;

            cout<<"\n\n Number of shake we had :"<<Qshake;
            cout<<"\n\n Number of shake we give for rents :"<<Sshake;
            cout<<"\n\n Remaining shake :"<<Qshake - Sshake;
            cout<<"\n\nTotal shake Collection of the day :"<<Total_shake;

            cout<<"\n\n Number of pizza we had :"<<Qpizza;
            cout<<"\n\n Number of pizza we give for rents :"<<Spizza;
            cout<<"\n\n Remaining pizza :"<<Qpizza - Spizza;
            cout<<"\n\nTotal pizza Collection of the day :"<<Total_pizza;

            case 8:
                exit(0);

                default:
                    cout<<"\nplease Select the numbers mentioned above";

    }
    goto m;
}