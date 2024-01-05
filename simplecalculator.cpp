#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   int number1=0;
    int number2=0;
    int operation=0;
    float output=0; 
    cout<<"enter first number \n";
    cin>>number1;
    cout<<"enter second number \n";
    cin>>number2;
    char choice;
    while(true)
    {
    cout<<"Choose the operation you want to perform:"<<endl
        <<" 1:ADDITION" <<endl
        <<" 2:SUBTRACTION"<<endl 
        <<" 3:MULTIPLICATION"<<endl 
        <<" 4:DIVISION\n";
    cin>>operation;
    switch(operation)
    {
        case 1:
        output=number1+number2;
        cout<<"ADDITION of given numbers:\t"<<output<<"\n";
        break;

        case 2:
        if(number1>number2)
        {output=number1-number2;}
        else
        {output=number2-number1;}
        cout<<"SUBTRACTION of given numbers::\t"<<output<<"\n";
        break;

        case 3:
        output=number1*number2;
        cout<<"MULTIPLICATION of given numbers::\t"<<output<<"\n";
        break;

        case 4:
        if(number1>number2)
        {output=number1/number2;}
        else
        {output=number2/number1;}
        cout<<"DIVISION of given numbers::\t"<<output<<"\n";
        break;
        default: cout<<"Invalid operation entered\n";
    }
      cout<<"Want to continue performing other operations y or n\n";
      cin>>choice;
      if(choice=='n')
      { cout<<"ENDED";
        break;
      }
      else 
      cout<<"CONTINUE";
      continue;
    }
    return 0;
}

