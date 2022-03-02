#include <iostream>

using namespace std;
struct node{
    int data;
    node *prev;
    node *next;
};
node *temp,*head;
void insertStartandAny(int position,int num)
{
    node *newnode=new node;
    newnode->data=num;
    newnode->prev=0;
    newnode->next=0;
    if(position==1)  //to insert at starting
    {
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    else
    {
        int i=1;
        node *temp2=head;
        while(i<position-1)   // to insert at any position
        {
            temp2=temp2->next;
            i++;
        }
        newnode->next=temp2->next;
        newnode->prev=temp2;
        temp2->next=newnode;
        newnode->next->prev=newnode;
    }
}
void insertEnd(int num)
{
    node *newnode=new node;
    node *temp=head;
    newnode->data=num;
    newnode->next=0;
    while(temp->next!=0)    // To insert at End
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
void display(){
    node *temp2=head;   
    while(temp2!=0)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<"\n";
}

int main()
{
    int choice=1;
    while(choice)
    {
        node *newnode=new node;
        cin>>newnode->data;
        newnode->next=0;
        newnode->prev=0;
        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
        }
        cout<<"Enter 1 continue or 0 to terminate "<<"\n";
        cin>>choice;
    }
    display();
insertStartandAny(1,5);
cout<<"After inserting at start : ";
display();
insertStartandAny(2,8);
cout<<"Afterinserting at 2ndPos : ";
display();
insertEnd(90);
cout<<"Afterinserting at End  : ";
display();
    return 0;
}
// Time complexity to insert node at any position in doubly linked list is O(n)
