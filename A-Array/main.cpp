// QuickSort on a Doubly Linked List

#include <bits/stdc++.h>
using namespace std;
// a node of a doubly linked list.
class Node
{
public:
    int data;
    Node *next;
     Node *prev;
};

/* A helper function to swap elements. */
void swap ( int* x, int* y ){ 
    
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}

// A helper function to find the last node of the linked list.
Node *lastNode(Node *head)
{
    Node *root = head;
while (root && root->next)
root = root->next;
return root;
}

//Consider the last element as pivot.
Node* partition(Node *start, Node *end)
{
// set pivot as end element.
int pivot = end->data;

// similar to i = l-1 for array implementation.
Node *i = start->prev;

for (Node *temp = start; temp != end; temp = temp->next)
{
if (temp->data <= pivot)
{
    
            if( i == NULL)
                i = start; 
            else
                i = i->next;

            swap(&(i->data), &(temp->data));
}
}

if( i == NULL)
                i = start;
    else
                i = i->next;
                
swap(&(i->data), &(end->data));
return i;
}

// implementation of quicksort.
void _quickSort(Node *start, Node *end)
{
if (end != NULL && start != end && start != end->next)
{
Node *pivot = partition(start, end);
_quickSort(start, pivot->prev);
_quickSort(pivot->next, end);
}
}

void quickSort(Node *root)
{
    
Node *end = lastNode(root);
Node *head = root;
_quickSort(head, end); 
}

// A helper function to print contents of arr.
void printList(Node *root)
{
while (root)
{
cout << root->data << " ";
root = root->next;
}
cout << endl;
}

//helper function to insert a node in the beginning. 
void push(Node** head, int data)
{
Node* node = new Node;
node->data = data;

node->prev = NULL;
node->next = (*head);

if ((*head) != NULL) 
    (*head)->prev = node ;


(*head) = node;
}

/* Driver code */
int main()
{
Node *root = NULL;
int n;
cout << "how many elements in the array: ";
cin >> n;
int arr[n];
for(int j = 0 ; j < n ; j++){
    cin >> arr[j];
}
for (int i = 0 ; i < n ;i++){
push(&root, arr[i]);
}

cout << "Linked List before sorting \n";
printList(root);

quickSort(root);

cout << "Linked List after sorting \n";
printList(root);
return 0;
}