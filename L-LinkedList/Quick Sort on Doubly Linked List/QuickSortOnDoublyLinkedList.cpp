// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

Node *lastNode(Node *root)
{
    while (root && root->next)
        root = root->next;
    return root;
}

Node *partition(Node *l, Node *h)
{
    int x = h->data;
    Node *i = l->prev;
    for (Node *j = l; j != h; j = j->next)
    {
        if (j->data <= x)
        {
            i = (i == NULL) ? l : i->next;

            swap(&(i->data), &(j->data));
        }
    }
    i = (i == NULL) ? l : i->next;
    swap(&(i->data), &(h->data));
    return i;
}

void quickS(Node *l, Node *h)
{
    if (h != NULL && l != h && l != h->next)
    {
        Node *p = partition(l, h);
        quickS(l, p->prev);
        quickS(p->next, h);
    }
}

void quickSort(Node *head)
{
    Node *h = lastNode(head);
    quickS(head, h);
}

void printList(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node; 
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

int main()
{
    Node *a = NULL;
    push(&a, 31);
    push(&a, 16);
    push(&a, 23);
    push(&a, 19);
    push(&a, 41);

    cout << "Linked List (Before sorting)\n";
    printList(a);

    quickSort(a);

    cout << "Linked List (After sorting)\n";
    printList(a);

    return 0;
}
