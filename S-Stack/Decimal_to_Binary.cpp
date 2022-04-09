#include <iostream>
using namespace std;

#define true 1
#define false 0
//Implementing stack using array 
struct stack
{
    int top;//variable
    int items[20];//array
};
struct stack s;

//Initializing the Stack
void initialization()
{
    s.top=-1;
}

//Checking if the stack is empty
int empty()
{
    if(s.top==-1)
        return true;
    else
        return false;
}

//Printing the element from top of the stack 
int pop()
{
    int temp;
    if(s.top==-1)
      cout<<"underflow condition ";
    temp=s.items[s.top];
    s.top--;
    return temp;
}

//Pusing the elements into the stack
void push(int num)
{

    if(s.top==9)
        cout<<"stack overflow";
    s.top++;
    s.items[s.top]=num;
}

int main()
{
    int num,temp,bin;
    initialization();

    //Taking the input of the number from the user 
    cout<<"Enter the number : ";
    cin>>num;

    //finding the remainder and pushing it into the stack
    while(num!=0)
    {
      temp=num%2;
      push(temp);
      num=num/2;
    }

    //Printing the binary equivalent 
    cout<<"The Binary Equivalent is : ";
    while(empty()!=1)
    {
        bin=pop();
        cout<<bin;
    }
    return 0;
}
