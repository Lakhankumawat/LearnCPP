/*
Insertion operation of linked list adds an item to the linked list. We know that whenever a data item 
is added to the linked list, we need to change the next pointers of the previous and next nodes of the 
new item that we have inserted.
In Linked list , we can add a new node -
At the beginning
At the end
At the middle.

Deleting a node from a linked list also involves various positions from where the node can be deleted. 
After deletion, we need to adjust the next pointer and the other pointers in the linked list appropriately 
so as to keep the linked list intact.
We can remove a node -
from beginning
from end
from a particular location.

*/


#include <iostream>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

//Declaring structure for node
struct node
{
    int number;
    struct node *next;
}*head,*curr,*p,*q,*r;

void display(struct node *curr);   //Declaring function to display nodes in list

int main()
{
   int ch,x,n,y,d;
   char c1;
    
   head=NULL;  //Initializing head pointer to NULL
   curr=(struct node*)malloc(sizeof(struct node));  //Creating first node
   std::cout<<"\nEnter the data:"<<std::endl;
   std::cin>>curr->number;
   if(head==NULL)
   head=curr;
   do
   {
       //creating next nodes in list
       std::cout<<"Do you want to create a new node?"<<std::endl;
       std::cin>>c1;
       if(c1=='y'|| c1=='Y')
       {
           p=(struct node*)malloc(sizeof(struct node));
           std::cout<<"Enter the data: "<<std::endl;
           std::cin>>p->number;   //It'll store next node's data
           curr->next=p;
           curr=p;
        }
    }
    while(c1=='y'|| c1=='Y');
       curr->next=NULL;   //To store NULL in last node's link
    display(head);
    
    do
    {
        std::cout<<"\n--------MENU--------"<<std::endl;
        std::cout<<"\n1.Insert \n2.Delete"<<std::endl;
        std::cout<<"\nEnter your choice: "<<std::endl;
        std::cin>>ch;
        switch(ch)
        {
            case 1: 
            std::cout<<"--------Insertion--------"<<std::endl;
            p=(struct node*)malloc(sizeof(struct node));   //To create new node
            std::cout<<"\nEnter the node data to be inserted: "<<std::endl;
            std::cin>>p->number; 
          
            std::cout<<"\n---MENU---"<<std::endl;
            std::cout<<"\n1.At beginning \n2.At middle \n3.At end"<<std::endl;
            std::cout<<"\nEnter your choice:"<<std::endl;
            std::cin>>x;
            if(x==1)   //To insert the data at beginning
            {
                p->next=head; 
                head=p;
                display(head);
            }
            else if(x==2)   //To insert the data at middle
            {
                std::cout<<"Enter the data after which new node is to be created "<<std::endl;
                std::cin>>n;
                curr=head;  
                while(curr->number!=n)  
                {
                    curr=curr->next;  
                }
                p->next=curr->next;
                curr->next=p;
                display(head);
            }
            else   //To insert the data at the end
            {
                p->next=NULL;
                curr=head;
                while(curr->next!=NULL)
                {
                    curr=curr->next;
                }
                curr->next=p;
                display(head);
            }
            break;
          
            case 2:
            std::cout<<"--------Deletion--------"<<std::endl;
            std::cout<<"\n---MENU---";
            std::cout<<"\n1.From beginning \n2.From middle \n3.From end"<<std::endl;
            std::cout<<"\nEnter your choice: "<<std::endl;
            std::cin>>y;
            if(y==1)    //To delete a node from beginning
            {
                q=head;
                head=head->next;
                q->next=NULL;
                free(q);
                display(head);
            }
            else if(y==2)   //To delete a node from middle
            {
                std::cout<<"Enter the data of the node which is to be deleted: "<<std::endl;
                std::cin>>d;
                curr=head;
                while(curr->next->number!=d)
                {
                    curr=curr->next;
                }
                p=curr->next;
                curr->next=p->next;
                free(p);
                display(head);
            }
            else   //To delete a node from the end
            {
                curr=head;
                while(curr->next->next!=NULL)
                {
                    curr=curr->next;
                }
                q=curr->next;
                curr->next=NULL;
                free(q);
                display(head);
            }
            break;
        }
    }while(ch<3);
    return 0;
}

void display(struct node *curr) //Defining displayfunction
{
    if(curr==NULL)
    {
        std::cout<<"\nList is empty"<<std::endl; //It'll show whether the list is empty or not
    }
    else
    {
        while(curr!=NULL)
        {
            std::cout<<"\t"<<curr->number<<std::endl; //It'll print the nodes in list
            curr=curr->next;
        }
    }
}

/*

Output :

Enter the data:
3
Do you want to create a new node?
y
Enter the data: 
2
Do you want to create a new node?
y
Enter the data: 
5
Do you want to create a new node?
y
Enter the data: 
1
Do you want to create a new node?
n
        3
        2
        5
        1

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
1
--------Insertion--------

Enter the node data to be inserted: 
4

---MENU---

1.At beginning 
2.At middle 
3.At end

Enter your choice:
1
        4
        3
        2
        5
        1

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
1
--------Insertion--------

Enter the node data to be inserted: 
6

---MENU---

1.At beginning 
2.At middle 
3.At end

Enter your choice:
2
Enter the data after which new node is to be created 
2
        4
        3
        2
        6
        5
        1

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
1
--------Insertion--------

Enter the node data to be inserted: 
7

---MENU---

1.At beginning 
2.At middle 
3.At end

Enter your choice:
3
        4
        3
        2
        6
        5
        1
        7

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
2
--------Deletion--------

---MENU---
1.From beginning 
2.From middle 
3.From end

Enter your choice: 
1
        3
        2
        6
        5
        1
        7

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
2
--------Deletion--------

---MENU---
1.From beginning 
2.From middle 
3.From end

Enter your choice: 
2
Enter the data of the node which is to be deleted: 
6
        3
        2
        5
        1
        7

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
2
--------Deletion--------

---MENU---
1.From beginning 
2.From middle 
3.From end

Enter your choice: 
3
        3
        2
        5
        1

--------MENU--------

1.Insert 
2.Delete

Enter your choice: 
3

*/