//Add two numbers represented by linked lists
//Time complexity is O(N+M) N and M are the size of two linked lists
//Space complexity is O(MAX(N,M)) N and M are the size of two linked lists
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
//Function to insert a node
void insert(Node* &head,int d)
{
    Node* newNode=new Node(d);
    newNode->next=head;
    head=newNode;
}
//Function to reverse the list
Node* reverse(Node* head)
{
    Node* pre=NULL;
    Node* cur=head;
    Node* nextptr;
    while(cur!=NULL)
    {
        nextptr=cur->next;
        cur->next=pre;
        pre=cur;
        cur=nextptr;
    }
    return pre;
}
//Function to find sum of two list
Node* addTwoLists(Node* first,Node* second)
{
    Node* temp1=first;
    Node* temp2=second;
    temp1=reverse(temp1);//to reverse the first list
    temp2=reverse(temp2);//to reverse the second list
    Node* res=NULL;
    Node* cur=NULL;
    Node* temp;
    int s=0,c=0;//s to store sum and c to store carry
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1!=NULL && temp2!=NULL)
            s=temp1->data+temp2->data+c;
        else if(temp2==NULL)
            s=temp1->data+c;
        else
            s=temp2->data+c;
        c=s/10;
        s=s%10;
        temp=new Node(s);
        if(res==NULL)
            res=temp;
        else
        {       
            cur->next=temp;
            cur=temp;
        }
        cur=temp;
        if(temp1!=NULL)
            temp1=temp1->next;
        if(temp2!=NULL)
            temp2=temp2->next;
    }
    if(c>0)
    {
        temp=new Node(c);
        cur->next=temp;
        cur=temp;
    }
    res=reverse(res);//to reverse the list
    return res;
}
//function to print the list
void printList(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
//Main function
int main()
{
    Node* head1=NULL;
    Node* head2=NULL;
    Node* result;
    int num1,num2;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    while(num1>0)
    {
        int d=num1%10;
        insert(head1,d);
        num1=num1/10;
    }
    cout<<"First Number:\t";
    printList(head1);
    while(num2>0)
    {
        int d=num2%10;
        insert(head2,d);
        num2=num2/10;
    }
    cout<<"Second Number:\t";
    printList(head2);
    result=addTwoLists(head1,head2);
    cout<<"Answer:\t";
    printList(result);
    return 0;
}
//Example:
//First Number:  168
//Second Number: 689
//Answer:        857