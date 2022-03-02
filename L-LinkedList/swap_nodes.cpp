/*
    You are given the head of a linked list, and an integer k.

    Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).
*/
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      ListNode *next;
      int val;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

    ListNode* swapNodes(ListNode* head, int k) {
        // repositioning head
        head = new ListNode(-1, head);
        // support variables
        ListNode *prev1 = head, *prev2 = head, *curr = head;
        // finding prev1
        while (--k) {
            prev1 = prev1->next;
            curr = curr->next;
        }
        curr = curr->next;
        // finding prev2
        while (curr->next) {
            prev2 = prev2->next;
            curr = curr->next;
        }
        // switching nodes, with n1 = prev1->next and n2 = prev2->next:
        // edge case: n1->next = n2
        if (prev1->next == prev2) {
            // storing n2 in curr
            curr = prev2->next;
            // attaching n2->next right after n1
            prev1->next->next = prev2->next->next;
            // attaching n1 after n2
            curr->next = prev1->next;
            // attaching n2 to prev1
            prev1->next = curr;
            return head->next;
        }
        // storing n1 in curr
        curr = prev1->next;
        // attaching n2 right after prev1
        prev1->next = prev2->next;
        // since prev1 is no longer needed, we will use it to store next2 = n2->next
        prev1 = prev2->next->next;
        // finishing splicing n2 in place
        prev2->next->next = curr->next;
        // adding n1 after prev2
        prev2->next = curr;
        // connecting n2->next riht after n1
        curr->next = prev1;

    }

    
/* Function to insertAtBeginning a node */
void insertAtBeginning(struct ListNode** head, int dataToBeInserted)
{
    struct ListNode* curr = new ListNode;
    curr->val = dataToBeInserted;
    curr->next = NULL;    
    if(*head == NULL)
            *head=curr; //If this is first node make this as head of list
        
    else
        {
            curr->next=*head; //else make the curr (new) node's next point to head and make this new node a the head
            *head=curr;
        }
        
        //O(1) constant time
}

//display linked list
void display(struct ListNode**node)
{
    struct ListNode *temp= *node;
    while(temp!=NULL)
        {
            if(temp->next!=NULL)
            cout<<temp->val<<"->";
            else
            cout<<temp->val;
            
            temp=temp->next; //move to next node
        }
        //O(number of nodes)
    cout<<endl;
}
    

int main()
{
    struct ListNode* head =NULL;
    insertAtBeginning(&head, 9);
    insertAtBeginning(&head, 8);
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    
    cout<<"Input linked list is: ";
    display(&head);
    int x = 2;
    swapNodes(head,x);
    cout<<"output LL after swapping "<<x<<" and is: ";
    display(&head);

}
