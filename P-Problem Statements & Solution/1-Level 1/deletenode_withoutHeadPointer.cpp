#include <bits/stdc++.h>
using namespace std;

// class for node of linked list.
class node
{
public:
    int data;
    node *next;

    node()
    {
        next = NULL;
    }
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

// Global variable head pointer.
node *head = NULL;

// Function to insert nodes in linked list.
void insertInLinkedList(int data)
{
    node *p = new node(data);
    p->next = head;
    head = p;
}

// Function to DELETE NODE GIVEN THE NODE TO BE DELETED (WITHOUT HEAD POINTER)
void deleteNode(node *tobedeleted)
{
    // Logic will be that we will actually delete the next node of the node to be deleted.
    //  Copy the node's next node data value to the the node's data and then point that node to the next of next node.
    node *temp = tobedeleted->next;
    tobedeleted->data = tobedeleted->next->data;
    tobedeleted->next = tobedeleted->next->next;
    delete (temp);
}

// Display the linked list.
void display()
{
    node *p = head;
    while (p)
    {
        cout << p->data;
        if (p->next)
            cout << " -> ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    // Creating the linked list.
    for (int i = 0; i < 5; i++)
    {
        insertInLinkedList(i + 1);
    }

    cout << endl
         << "Linked list before deleting the node" << endl;
    // Display the linked list before deleting the node.
    display(); // 5 -> 4 -> 3 -> 2 -> 1

    // Deletenode function called to delete node (here 3)
    deleteNode(head->next->next);

    cout << endl
         << "Linked list after deleting the node" << endl;
    // Display the linked list after deleting the node.
    display();
    cout << endl;
    return 0;
}