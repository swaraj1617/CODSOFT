
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count =1;
    int task_count=0;
    char choice;
    char case_choice;
    int task_no;
    string status[20];
    string task_perform[100];
   while(true)
    {
    cout<<"______**LET US BEGIN WITH ToDo List**\n______";
    cout<<"what task you want to perform"<<endl<<
            "1: ADD THE NEW TASK"<<endl<<
            "2: REMOVE TASK"<<endl<<
            "3:EXIT\n";
            cin>>task_no;
    switch(task_no)
    {
        if(task_no<1 && task_no>3)
        {cout<<"INVALID";}
        case 1:
        while(true)
        {
            cin.ignore();
            cout<<"Enter the TASK:\n";
            getline(cin, task_perform[task_count]);
            cout<<"Enter the Status\n";
            getline(cin, status[task_count]);
            task_count++;
            cout<<" WANT TO CONTINUE YES->y or NO->n \n";
            cin>>choice;
            if(choice=='n')
            {
                break;
            }
        }
        break;
        case 2:
        cout<<"THE TASKS HAVE BEEN ENTERED\n";
        cout<<"Following are the tasks \n";
         for(int i=0;i<task_count;i++)
         {
           cout<<task_perform[i]<<"\t"<<status[i]<<"\n";
         }
        cout<<"Task you want to remove\n";
        cin>>count;
        //update task
        for(int i=count;i<task_count;i++)
        {   cout<<"TASK REMOVED:\t"<<task_perform[i]<<"\tstatus: COMPLETED\n";
            break;
        }
        for(int i=count;i<task_count;i++)
        {
            task_perform[i]=task_perform[i+1];
            status[i]=status[i+1];
        }
        break;

        case 3:
        cout<<"ENDED\n";
        cout<<"FINALLY:"<<endl<<"The Tasks are the following:\n";
         for(int i=0;i<task_count;i++)
         {
           cout<<task_perform[i]<<"\t"<<status[i]<<"\n";
         }

        break;
    }
    if(task_no==3)
    {break;}
    cout<<" DO YOU WANT NEXT STEP TO BE PERFORMED?? \n";
    }
    cout<<"EXIT";
    return 0;
    
}
