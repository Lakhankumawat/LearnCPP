//Implementation of Stack with its operations.

#include <iostream>
using namespace std;
#define MAX 5

//Declaration of Stack
class Stack
{
    private:
        int top;
        int ele[MAX];
    public:
        Stack();
        bool     isFull();
        bool    isEmpty();
        void    push(int item);
        int     pop(int *item);
};

//Initialization of stack
Stack:: Stack()
{
    top = -1;
}

//Check stack is full or not
bool Stack:: isFull()
{
    return top==MAX-1;
}

//Check stack is empty or not
bool Stack:: isEmpty()
{
    return top==-1;
}

//Insert item into stack
void Stack:: push( int item )
{
    if( isFull() )
    {
        cout<<"\nStack Overflow";
        return;
    }

    top++;
    ele[top] = item;

    cout<<"\nInserted item : "<< item;
}

//Delete item from stack
int Stack:: pop( int *item )
{
    if( isEmpty() )
    {
        cout<<"\nStack Underflow";
        return -1;
    }

    *item = ele[top--];
    return 0;
}

int main()
{
    int item = 0;

    Stack s = Stack();

    for(int i=1;i<=MAX;i++)
    s.push(i*10);

//There will be Overflow
    s.push(60);

    while( s.pop(&item)== 0 ){
        cout<<"\nDeleted item : "<< item;
    }
    cout<< endl;

    return 0;
}
