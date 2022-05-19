#include<iostream>
#include<windows.h>           //sleep
#include<iomanip>             //setw setfill
#include<string.h>            //string              
#include<conio.h>             //for getch
#include<stdlib.h>            //for system("cls")
using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;
void displayClock()
{
    system("cls");
    cout << "*********************     TIMER    ********************** " << endl;
    cout << "------------------------------------------------" << endl;
    //  it will show us a hour minutes ans seconds on screen
    cout <<hours<<":"<<minutes<<":"<< seconds << "\t  sec " << endl;
    cout << "------------------------------------------------" << endl;

}

void timer()
{
    while (true)
    {
        displayClock();
        Sleep(1000);
        seconds++;

        if (seconds == 7)
        {
            break;

        }
    }
}
int main()
{  
    system("cls");
    int count=0;
        char EXIT;
        char encrypted_pass[6];
        char password[]="ya445";
        int n,a;
        string name;
    do
    {   START:
        // 
       cout<<"ENTER YOUR PASSWORD::";
       for(int i=0;i<=5;i++)
       {   
       n=getch();
       if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z') || (n >= '0' && n <= '9'))
       {
       encrypted_pass[i]=n;
       cout<<"*";
       }
       else if(n=='\b' && i>=1)   //backslash
       {
       cout<<"\b \b";        //rub the character behind the cursor
       --i;
       }
       else if(n=='\r')   //enter is clicked
       {
       encrypted_pass[i] ='\0';   //null means end of string.
        break;
       }
       }
       cout<<"\n";
       cout<<"ENTER YOUR USER NAME::";
       cin>>name;
       ++count;
        //   cout<<"count"<<count<<"\n";
       if(name=="tarun")
       {    /* this line will check whether input password is equal to 
       predefined password or not*/
       a=strcmp(encrypted_pass,password);
       {
                // cout<<"password"<<encrypted_pass<<"\n";
       if(a==0)
        { 
        cout<<"WELCOME!!!!!!!!!!";
        
        break;
        }
       
       else
        {
        cout<<"ENTER CORRECT PASSWORD"<<"\n";
       
        goto START;
        }
      }
    }
     else
    {       
     if(count<3)
    {
    cout<<"ENTER YOUR CORRECT USER NAME"<<"\n";
    // this line will take you to starting of main 
    /*The goto statement is a jump statement which is
    s sometimes also referred to as unconditional jump statement.   */       
    goto START;
            
    }
    else
     {
    system("cls");
    cout << "\n Too many login attempts!\n" << endl;
 
    cout << "If you want to retry press any key and wait for 5 secoends" << endl<< "If not then press 0" << endl;
 
    cin >> EXIT;
 
    if (EXIT == '0')
     {
      exit(0)   ;
      }
    else
               
    {
    //this will take you a function named timer which counted for 6sec    
    timer();
    count = 0;
    goto START;

            
    } 
}

           
}
} while(count<3);
}