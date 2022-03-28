#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// the InsertAtHead have a head and a data
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
// the InsertAtTail have a tail and a data
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void oddevenchecker(Node *&head, Node *&tail, int d)
{
    //if statment to check if the node value is even then insert at head
    if (d % 2 == 0)
    {
        //call the InsertAtHead to insert value at head(start)
        InsertAtHead(head, d);
    }
    //else if statment to check if the node value is odd then insert at tail
    else if (d % 2 != 0)
    {
        //call the InsertAtTail to insert value at end
        InsertAtTail(tail, d);
    }
}

//Print function print all the linklist elements
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    //take the number of Node in linked list
    int N = 0;
    cout<<"Enter Number Of Nodes In Linked List : ";
    cin>>N;
    // take the input of the head node
    cout<<"Enter Head node : ";
    int headnode =0 ;
    cin>>headnode; 
    Node* headnod = new Node(headnode);
    Node *head = headnod;
    Node *tail = headnod;
    for (int i = 1; i < N; i++)
    {
        int nodes = 0;
        cout<<"Enter Nodes : ";
        cin>>nodes;
        oddevenchecker(head,tail,nodes);
    }

    cout<<"result is : ";
    print(head);

    return 0;
}
