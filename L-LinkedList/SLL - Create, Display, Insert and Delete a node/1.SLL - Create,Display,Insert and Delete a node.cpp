#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
} *first;

void createLL(int A[],int n)
{
    struct Node *temp , *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i=1; i<n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void displayLL(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void insertNode(struct Node *p,int new_data, int position)
{
    struct Node *t;
    int i;
    if (position <= 0)
    {
        return;
    }
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = new_data;
    if(position == 1)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (i=1;i<position-1;i++)
        {
            p=p->next;
        }
        t->next = p->next;
        p->next = t;
    }
    displayLL(first);
}
int deleteNode(struct Node *p,int position)
{
    struct Node *q = NULL;
    int i , x=-1;
    
    if (position <= 0)
    {
        return -1;
    }
    if (position == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for(i=0;i<position-1;i++)
        {
            q=p;
            p=p->next;
        }
    }
    q->next = p->next;
    x = p->data;
    free(p);
    return x;
}
int main()
{
    int i,n,ch=0,choice,x1,pos1,pos2;
    int A[100];
    cout<<"\nEnter total elements of Linked List :\n";
    cin>>n;
    cout<<"\nEnter elements of Linked List :\n";
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    
    createLL(A,n);
    
    cout<<"\nLinked List : ";
    
    displayLL(first);
    
    do
    {
        cout<<"\n--- Choose an Operation ---\n1.Insert a node. \n2.Delete a node \nEnter your choice : ";
        cin>>choice;
        switch(choice) 
        {
            case 1 : cout<<"\nLinked List : ";
                     displayLL(first);
                     cout<<"\nEnter an element you want to insert :";
                     cin>>x1;
                     cout<<"\nEnter a position where you want to insert an element :";
                     cin>>pos1;
                     while (pos1<=0 || pos1>n+1)
                     {
                        cout<<"\nYou have entered invalid position !";
                        cout<<"\nPosition should lie from 1 to total no of elements";
                        cout<<"\nEnter position where you want to insert an element again :";
                        cin>>pos1;
                     }
                     cout<<"\nLinked List : ";
                     insertNode(first,x1,pos1);
                     n++;
                     break;
                     
            case 2 : cout<<"\nLinked List : ";
                     displayLL(first);
                     cout<<"\nEnter a position where you want to delete an element :";
                     cin>>pos2;
                     while (pos2<=0 || pos2>=n+1)
                     {
                        cout<<"\nYou have entered invalid position !";
                        cout<<"\nPosition should lie from 1 to total no of elements";
                        cout<<"\nEnter position where you want to delete an element again :";
                        cin>>pos2;
                     }
                     deleteNode(first,pos2);
                     cout<<"\nLinked List : ";
                     displayLL(first);
                     n--;
                     break;
            default : cout<<"\nSorry! You have entered wrong choice.";
        }
        cout<<"\nPress 0 to continue operating on LL :";
        cin>>ch;
    }while (ch==0);
    
    return 0;
}



