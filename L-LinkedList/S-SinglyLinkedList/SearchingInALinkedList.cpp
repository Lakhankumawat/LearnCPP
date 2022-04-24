#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int key;
	Node* next;
};

// Given a reference (pointer to pointer) to the head of a list and an int, push a new node on the front of the list. 
void push(Node** head_ref, int new_key)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the key */
	new_node->key = new_key;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

// Iterative C++ program to search an element in linked list
bool IterativeSearch(Node* head, int x)
{
	Node* current = head; // Initialize current
	while (current != NULL)
	{
		if (current->key == x)
			return true;
		current = current->next;
	}
	return false;
}



//Recursive C++ program to search an element in linked list
bool RecursiveSearch(struct Node* head, int x)
{
    // Base case
    if (head == NULL)
        return false;
     
    // If key is present in current node, return true
    if (head->key == x)
        return true;
 
    // Recur for remaining list
    return RecursiveSearch(head->next,x);
}

/* Driver program to test count function*/
int main()
{
	/* Start with the empty list */
	Node* head = NULL;

	/* Use push() to construct below list
	14->21->11->30->10 */
	push(&head, 10);
	push(&head, 30);
	push(&head, 11);
	push(&head, 21);
	push(&head, 14);
        int y;
	cout<<"Enter the value of node you want to be searched"<<endl;
	cin>>y;
	RecursiveSearch(head, y)? cout<<"Yes" : cout<<"No";
	return 0;
}
