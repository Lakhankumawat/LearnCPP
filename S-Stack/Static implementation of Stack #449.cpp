/*Define a one dimensional array of specific size and insert or delete the values into 
that array by using LIFO principle with the help of a variable called 'top'. 
Initially, the top is set to -1. Whenever we want to insert a value into the stack, 
increment the top value by one and then insert. Whenever we want to delete a value from the stack, 
then delete the top value and decrement the top value by one.

Push - This adds a data value to the top of the stack.
Pop - This removes the data value on top of the stack */


#include<iostream>
#include<stdlib.h>
#define MAX 10

using namespace std;

void display();
void push();
void pop();
int top=-1 , num ;
int stk[MAX];

int main()
{
    int ch ;
    
    do
    {
        std::cout<<"\n-------MENU-------"<<std::endl;
        std::cout<<"\n1.Push \n2.Pop \n3.Display \n4.Exit"<<std::endl;
        std::cout<<"\nEnter your choice : "<<std::endl;
        std::cin>>ch;
        
        switch(ch)
        {
            case 1: std::cout<<"\n-------Push-------"<<std::endl;
            push();
            break;
            
            case 2: std::cout<<"\n-------Pop-------"<<std::endl;
            pop();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            break;
        }
        
    }while(ch<5);
    return 0;
}

void display()
{
    if(top==-1)
    {
        std::cout<<"\nStack is empty."<<std::endl;
    }
    else
    {
        std::cout<<"\nThe Stack : "<<std::endl;
        for(int i=top ; i>=0 ; i--)
        {
            std::cout<<stk[i]<<std::endl;
        }
    }
}

void push()
{
    if(top==MAX-1)
        {
            std::cout<<"\nStack is full."<<std::endl;
        }
        else
        {
            std::cout<<"\nEnter the element which is to be pushed : "<<std::endl;
            std::cin>>num;
            top++;
            stk[top]=num;
        }
}

void pop()
{
    if(top==-1)
    {
        std::cout<<"\nStack is empty."<<std::endl;
    }
    else
    {
        num=stk[top];
        top--;
        std::cout<<"\nElement popped is : "<<num<<std::endl;
    }
}

/*
Output:
-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
1

-------Push-------
Enter the element which is to be pushed : 
8

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
1

-------Push-------
Enter the element which is to be pushed : 
4

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
1

-------Push-------
Enter the element which is to be pushed : 
3

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
3

The Stack : 
3
4
8

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
2

-------Pop-------
Element popped is : 3

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
2

-------Pop-------
Element popped is : 4

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
2

-------Pop-------
Element popped is : 8

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
2

-------Pop-------
Stack is empty.

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
3
Stack is empty.

-------MENU-------
1.Push 
2.Pop 
3.Display 
4.Exit

Enter your choice : 
4
*/