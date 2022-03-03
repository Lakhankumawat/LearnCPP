#include<stdio.h>
#include<stdlib.h>
//structure 
struct node
{
int data;
struct node * next;
} * head=NULL;
//funtion to create the link list.
void input()
{
struct node * cur, * ptr;
int n;
printf("enter the number of nodes ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
int a;
//creating the node cur
cur=malloc(sizeof(struct node));
cur->next=NULL;
printf("enter the value of node %d : ",i+1);
scanf("%d",&a);
cur->data=a;
if(head==NULL)
{head=cur;
cur->next=head;
ptr=cur;
}
else
{
cur->next=head;
ptr->next=cur;
ptr=cur;
}
}
}
//Function to display the link list. 
void display()
{
struct node * ptr;
printf("the entered link list is \n");
if(head!=NULL)
{
ptr=head;
while(ptr->next!=head)
{
printf("%d->",ptr->data);
ptr=ptr->next;
}
printf("%d\n",ptr->data);
}
else
{
printf("empty\n");
}
}
void checkEmpty()
{int c=0;
struct node * ptr;
if(head !=NULL)
{
ptr=head;
while(ptr->next!=head)
{
c++;
ptr=ptr->next;
}
c++;
}
if(c>0)
printf("the link list is not empty\n");
else
printf("the link list is empty\n");
}
//Function to count the number of nodes in the link list.
void countNode()
{int c=0;
struct node * ptr;
if(head !=NULL)
{
ptr=head;
while(ptr->next!=head)
{
c++;
ptr=ptr->next;
}
c++;
}
printf("the no. of nodes in the link list is %d\n",c);
}
//Function to search for a particular node in the link list.
void searchNode()
{int c=0;
int src;
printf("enter the element to be searched ");
scanf("%d",&src);
struct node * ptr;
if(head!=NULL)
{
ptr=head;
while(ptr->next!=head)
{
if(ptr->data==src)
{
printf("the searched element is found in the linked list\n");
c++;
break;
}
ptr=ptr->next;
}
}
if(c==0)
printf("the searched element is not found in the linked list\n");
}
//Function to insert a node in the link list at a position.
void insertNode()
{int pos,val;
printf("enter the value to be inserted ");
scanf("%d",&val);
printf("enter the position at which the value is to be inserted ");
scanf("%d",&pos);
struct node * cur,* temp;
//creating node cur
cur=malloc(sizeof(struct node));
cur->next=NULL;
cur->data=val;
if(head==NULL)
{
head=cur;
cur->next=cur;
}
if(pos==1)
{
temp=head;
while(temp->next!=head)
temp=temp->next;
cur->next=head;
head=cur;
temp->next=cur;
}
else
{
temp=head;
int i=1;
while(i<pos-1)
{
temp=temp->next;
i++;
}
cur->next=temp->next;
temp->next=cur;
}
display();
}
//Function to delete a particular given value.
void deletekey()
{int val;
printf("enter the value to be deleted ");
scanf("%d",&val);
struct node * ptr,* prev;
if(head==NULL)
printf("list is empty\n");
else
{
ptr=head;
while(ptr->data!=val && ptr->next!=head)
{
prev=ptr;
ptr=ptr->next;
}
if(ptr->next==head && ptr->data!=val)
printf("value not found\n");
else if(head==head->next)
{
head==NULL;
free(ptr);
printf("the link list is empty\n");
}
else if(ptr==head)
{
struct node * temp=head;
while(temp->next!=head)
temp=temp->next;
head=ptr->next;
temp->next=head;
free(ptr);
}
else
{
prev->next=ptr->next;
free(ptr);
}
}
display();
}
//Function to delete a node present at a particular position.
void deleteNode()
{int pos;
printf("enter position to delete \n");
scanf("%d",&pos);
struct node *ptr,*temp;
if(head==NULL)
printf("link list is empty");
if(pos==1)
{
ptr=head;temp=head;
while(temp->next!=head)
temp=temp->next;
head=ptr->next;
temp->next=head;
free(ptr);
}
else
{
int j=1;
ptr=head;
while(ptr->next!=head)
{
if(j==pos-1)
{
ptr->next=((ptr->next)->next);
break;
}
else
{
ptr=ptr->next;
j++;
}
}
}
display();
}
int main()
{ int op;
//calling the function to input numbers in the link list.
input();
//displaying the menu for all the functions available in the code. 
 do
   {
    printf("enter 1 if u want to traverse the link list\n");
    printf("enter 2 if u want to check whether the link list is empty\n");
    printf("enter 3 if u want to insert a node in the link list\n");
    printf("enter 4 if u want to delete a node from the link list\n");
    printf("enter 5 if u want to delete a node for the given key from the link list\n"); 
    printf("enter 6 if u want to count the nodes in the link list\n");
    printf("enter 7 if u want to search for a node in the link list\n");
    printf("enter 8 to quit\n");
    printf("enter the operation to be performed in the linked list\n");
    scanf("%d", &op);
    //switch case for all the operations available.
    switch (op)
    {
    case 1:
        printf("operation chosen: traversing the list \n");
        display();
        break;
    case 2:
        printf("operation chosen: checking if the linked list is empty \n");
        checkEmpty();
        break;
    case 3:
        printf("operation chosen: insertion node \n");
        insertNode();
        break;
   case 4:
        printf("operation chosen: deletion node \n");
        deleteNode();
        break;
    case 5:
        printf("operarion chosen:delete a node for a given key \n");
        deletekey();
        break;       
   case 6:
        printf("operation chosen: counting nodes \n");
        countNode();
        break;
   case 7:
        printf("operation chosen: searching nodes \n");
        searchNode();
        break;
    case 8:
        break;   
    }
    }while(op!=8);
}
