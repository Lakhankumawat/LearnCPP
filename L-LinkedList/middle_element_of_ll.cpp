#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};
     
     //Function to add new nodes
     void push( node** head_node,int data_value)
     {
         node *new_node=new node(); //created a new node
         new_node->data= data_value;      //assigned value to new node
         new_node->next=*head_node;       
         *head_node= new_node;               //head pointing to new node
     }

     //Function to print linkedlist
     void printNode(class node*head)
     {  
         while(head!=NULL)
         {cout<<head->data<<"->";
         head=head->next;
         }
         cout<<"NULL"<<endl;
     }

     ////Function to find the middle element
     void middleElement(class node*head)
     {
         node* slow=head;
         node* fast=head;

        if(head!= NULL)
        { 
            while(fast!= NULL && fast->next!=NULL)
         {
             slow=slow->next;
             fast=fast->next->next;
         }
         cout<<"The middle Element is: "<<slow->data;
         }
         //here when either fast will reach to a point where fast or fast->next is null  at tht time slow will be at the middle element by taking 1 step at a time.

         //For odd no of Linkedlist : slow will reach at the middle element when fast itself will be null.
         // For even no of Linkedlist: slow will reach at the middle element when fast->next itself will be null.
     }
     
    //  ex:     5 -->       1 -->       9 -->       2 -->      6 -->      8 -->  Null
   //           slow(1)     slow(2)     slow(3)     slow(4)                     fast(4)
//              fast(1)                 fast(2)                fast(3) 


int main()
{
        class node*head=NULL;
        push(&head,8);
        push(&head,6);
        push(&head,2);
        push(&head,9);
        push(&head,1);
        push(&head,5);
        printNode(head);
        middleElement(head);
        return 0;
}

Time Complexity: O(N) // As we are traversing whole Linkedlist only once.
Space Complexity: O(1) // we are doing it in constant space 