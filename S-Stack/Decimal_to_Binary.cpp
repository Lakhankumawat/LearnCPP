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
    int x;
    if(s.top==-1)
      cout<<"underflow condition ";
    x=s.items[s.top];
    s.top--;
    return x;
}

//Pusing the elements into the stack
int push(int x)
{

    if(s.top==9)
        cout<<"stack overflow";
    s.top++;
    s.items[s.top]=x ;

}

int main()
{
    int a,b,c,x;
    initialization();

    //Taking the input of the number from the user 
    cout<<"enter the number : ";
    cin>>a;

    //finding the remainder and pushing it into the stack
    while(a!=0)
    {
      b=a%2;
      push(b);
      a=a/2;
    }

    //Printing the binary equivalent 
    while(empty()!=1)
    {
        x=pop();
        cout<<x;
    }
    return 0;
}
