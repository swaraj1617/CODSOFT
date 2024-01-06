#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random_number=0;
    int guess_number=0;
    char choice;
    int trials=0;
    srand(time(0));
    random_number=(rand()%100)+1;
    cout<<"Begin with the game y or n\n";
    cin>>choice;


    while(choice=='y')
    {   char hint;
        ++trials;
    cout<<"Please enter the guessed number b/w 1 to 100 \n";
    cin>>guess_number;
    if(random_number==guess_number)
    {
        cout<<"YOUR GUESS IS RIGHT "<<trials<<"TRIALS\n";
        cout<< "random_number="<<random_number<<"\tguessed_number="<<guess_number;
        break;
    }
    else
    {
        cout<<"do you want the hint\n";
        cin>>hint;
        if(hint=='y')
        {
            if(random_number>guess_number)
            {
                cout<<"random_number is greater than your guessed_num\n";

            }
            else
            {
                cout<<"random_number is less than your guessed_num\n";

            }
        } 
        else
        {cout<<"HAVE FAITH IN YOURSELF\n";}
    }

    cout<<"Do you want to continue with the guessing the numbers\n";
    cin>>choice;
    if(choice=='n')
    {   
        cout<<"BEST OF LUCK FOR NEXT TIME\n";
        break;
    }
    }
   cout<<"\nEND";
   return 0;

}


