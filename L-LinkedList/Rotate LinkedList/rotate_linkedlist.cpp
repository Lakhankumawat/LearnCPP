
#include <bits/stdc++.h>
using namespace std;

/* Link list ListNode */
class ListNode
{
public:
    int data;
    ListNode *next;
};


void rotateRight(ListNode **head_ref, int k)
{
    // if ther is no ListNode than just return 0
    if (k == 0)
        return;

    ListNode *temp = *head_ref;

    // Traverse and find the tail
    while (temp->next != NULL)
        temp = temp->next;

        
    /* form a circle */
    temp->next = *head_ref;
    temp = *head_ref;


    for (int i = 0; i < k - 1; i++)
        temp = temp->next; // the tail ListNode is the (len-k)-th ListNode (1st ListNode is head)

    //disconnect circular linkedlist to make it linear again after ratating it k times
    *head_ref = temp->next;
    temp->next = NULL;
}

void push(ListNode **head_ref, int new_data)
{
    /* allocate ListNode */
    ListNode *new_node = new ListNode();

    /* put in the data */
    new_node->data = new_data;

    /* link the old list off the new ListNode */
    new_node->next = (*head_ref);

    /* move the head to point to the new ListNode */
    (*head_ref) = new_node;
}

/* Function to print linked list */
void display(ListNode *ListNode)
{
    while (ListNode != NULL)
    {
        cout << ListNode->data << " ";
        ListNode = ListNode->next;
    }
}

int main(void)
{
    /* Start with the empty list */
    ListNode *head = NULL;

    int n;
    cin >> n;
    int k;
    cin>>k;
    for (int i = n; i > 0; i -= 1)
    {
        int x;
        cin >> x;
        push(&head, x);
    }

    cout << "Given linked list \n";
    display(head);
    rotateRight(&head, k);

    cout << "\nRotated Linked list \n";
    display(head);

    return (0);
}
