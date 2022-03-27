//Stack implementation using singly linked list
//Time complexity is O(N) N is the size of the linked list
//Space complexity is O(N) N is the size of the linked lists
#include<iostream>
using namespace std;
//Node structure in linked list
class Node
{
    public:
        int  data;//value present in the linked list
        Node* next;//next pointer will point to the next node in the linked list
        Node(int data)//constructor to initialize node
        {
            this->data=data;
            this->next=NULL;
        }
};
Node* top;
//Function to insert a node
void push(int d)
{
    Node* temp=new Node(d);
    if(!temp)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    temp->next=top;
    top=temp;
}
//Function to check for stack underflow
bool isEmpty()
{
    if(top==NULL)
        return true;
    else
        return false;
}
//Function to get the top element
void peek()
{
    if(isEmpty()==true)//Check for stack underflow
        cout<<"Stack Underflow"<<endl;
    else
        cout<<"Top element: "<<top->data<<endl;
}
//Function to pop an element
void pop()
{
    Node* temp;
    if (isEmpty()==true)//Check for stack underflow
        cout<<"Stack Underflow"<<endl;
    else
    {
        temp=top;//Assign top to temp
        top=top->next;//Assign second node to top
        delete(temp);//Delete the node
    }
}
//Function to print the list
void printList()
{
    if(isEmpty()==true)//Check for stack underflow
        cout<<"Stack Underflow"<<endl;
    Node* temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//Main function
int main()
{
    int ch=0;
    int n;
    cout<<" 1:Push\n 2:Pop\n 3:Peek\n 4:Display\n 5:Exit"<<endl;
    while(ch!=5)
    {
        cout<<"Enter the choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter a number"<<endl;
                cin>>n;
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printList();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}