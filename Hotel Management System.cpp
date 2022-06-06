/*******************************************************************/
/*                                                                 */
/*             Hotel Management Systems                            */
/*    This program checks the availabilty of the hotel and account */
/*         for the facilities that are available  at the hotel     */
/*                                                                 */
/*                                                                 */
/* By:Sriram                                                       */
/*******************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms=0,Qpasta=0,Qburger=0,Qnoodles=0,Qshake=0,Qchicken=0;
    //food items sold
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //Total price of items
    int Total_rooms=0,Total_pasta=0,Total_burger=0,Total_noodles=0,Total_shake=0,Total_chicken=0;
    
    
    cout<<"\n\t Quantity of items we have ";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin>>Qpasta;
    cout<<"\n Quantity of burger: ";
    cin>>Qburger;
    cout<<"\n Quantity of noodles: ";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin>>Qshake;
    cout<<"\n Quantity of chicken: ";
    cin>>Qchicken;
    
    m:
    cout<<"\n\t\t\t Please select from the menu options";
    cout<<"\n\n 1)Rooms";
    cout<<"\n\n 2)Pasta";
    cout<<"\n\n 3)burger";
    cout<<"\n\n 4)noodles";
    cout<<"\n\n 5)shake";
    cout<<"\n\n 6)Chicken-roll";
    cout<<"\n\n 7) Information regarding sales and collection";
    cout<<"\n\n 8) Exit";
    
    cout<<"\n\n Please enter your choice!";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
            cout<<"\n\n Enter the number of rooms you want:";
            cin>>quant;
            if(Qrooms-Srooms >=quant)
            {
                Srooms=Srooms+quant;
                Total_rooms=Total_rooms+(quant*1200);
                cout<<"\n\n\t\t"<<quant<<"room(s) have been alloted to you";
            }
            else
                cout<<"\n\tOnly "<<Qrooms-Srooms<<"Rooms remaining in hotel";
            
        break;
        
        case 2:
            cout<<"\n\n Enter the Pasta Quantity:";
            cin>>quant;
            if(Qpasta-Spasta >=quant)
            {
                Spasta=Spasta+quant;
                Total_pasta=Total_pasta+(quant*250);
                cout<<"\n\n\t\t"<<quant<<"pasta is the order! ";
            }
            else
                cout<<"\n\tOnly "<<Qpasta-Spasta<<"Pasta remaining in hotel";
            
        break;
        
        case 3:
            cout<<"\n\n Enter the Burger Quantity:";
            cin>>quant;
            if(Qburger-Sburger >=quant)
            {
                Sburger=Sburger+quant;
                Total_burger=Total_burger+(quant*120);
                cout<<"\n\n\t\t"<<quant<<"burger is the order! ";
            }
            else
                cout<<"\n\tOnly "<<Qburger-Sburger<<" Burgers remaining in hotel";
            
        break;
        
        case 4:
            cout<<"\n\n Enter the noodles Quantity:";
            cin>>quant;
            if(Qnoodles-Snoodles >=quant)
            {
                Snoodles=Snoodles+quant;
                Total_noodles=Total_noodles+(quant*140);
                cout<<"\n\n\t\t"<<quant<<"noodles is the order! ";
            }
            else
                cout<<"\n\tOnly "<<Qnoodles-Snoodles<<"Noodles remaining in hotel";
            
        break;
        
        case 5:
            cout<<"\n\n Enter the shake Quantity:";
            cin>>quant;
            if(Qshake-Sshake >=quant)
            {
                Sshake=Sshake+quant;
                Total_shake=Total_shake+(quant*120);
                cout<<"\n\n\t\t"<<quant<<" shakes is the order! ";
            }
            else
                cout<<"\n\tOnly "<<Qshake-Sshake<<" shakes remaining in hotel";
            
        break;
        
        case 6:
            cout<<"\n\n Enter the chicken Quantity:";
            cin>>quant;
            if(Qchicken-Schicken >=quant)
            {
                Schicken=Schicken+quant;
                Total_chicken=Total_chicken+(quant*150);
                cout<<"\n\n\t\t"<<quant<<" chicken roll is the order! ";
            }
            else
                cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken remaining in hotel";
            
        break;
        
        case 7:
                cout<<"/********************************************/";
                cout<<"/*                                          */"; 
                cout<<"\n\t\tDetails of sales and collections";
                cout<<"/*                                          */";
                cout<<"/********************************************/";
                
                cout<<"\n\n Number of rooms we had: "<<Qrooms;
                cout<<"\n\n Number of rooms sold:"<<Srooms;
                cout<<"\n\n Remaining rooms to be sold: "<<Qrooms-Srooms;
                cout<<"\n\n Total rooms collections for the day:"<<Total_rooms;
                
                cout<<"\n\n Number of Pastas we had: "<<Qpasta;
                cout<<"\n\n Number of Pastas sold:"<<Spasta;
                cout<<"\n\n Remaining Pastas to be sold: "<<Qpasta-Spasta;
                cout<<"\n\n Total Pastas collections for the day:"<<Total_pasta;
                
                cout<<"\n\n Number of burgers we had: "<<Qburger;
                cout<<"\n\n Number of burger sold:"<<Sburger;
                cout<<"\n\n Remaining burger to be sold: "<<Qburger-Sburger;
                cout<<"\n\n Total burger collections for the day:"<<Total_burger;
                
                cout<<"\n\n Number of shakes we had: "<<Qshake;
                cout<<"\n\n Number of shakes sold:"<<Sshake;
                cout<<"\n\n Remaining shakes to be sold: "<<Qshake-Sshake;
                cout<<"\n\n Total shakes collections for the day:"<<Total_shake;
                
                cout<<"\n\n Number of chicken-rolls we had: "<<Qchicken;
                cout<<"\n\n Number of chicken-rolls sold:"<<Schicken;
                cout<<"\n\n Remaining chicken-rolls to be sold: "<<Qchicken-Schicken;
                cout<<"\n\n Total chicken-rolls collections for the day:"<<Total_chicken;
                
                cout<<"\n\n Total Revenue:"<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
                break;
                
        case 8:
                exit(0);
        default:
                cout<<"\n Please select the number mentioned above!";
        
    }
    goto m;
    
}