/*Floyd's Cycle Detection Algorithm

It is a pointer algorithm that uses only two pointers here we using *p and *q.
It determine whether the linked list has a cycle or not. 
First, we have to keep two pointers *p and *q of the head node. 
At each iteration, we move *q by two steps and the *p by one step 
if they both meet at some point then we have found a cycle; otherwise, no cycle is present in list.

Its Time complexity is O(n) and space complexity is O(1).

Output:
Cycle found.

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}node , *head;

void check_loop(node *head);

node *new_node(int data)
{
    node *curr ;
    curr = (node*)malloc(sizeof(node));
    curr->data=data;
    curr->next=NULL;
    return curr;
    
}

int main()
{
    node *curr , *p , *q , *loop_node, *head;
    curr = new_node(1);
    head = curr;
    curr->next = new_node(2);
    curr->next->next = new_node(3);
    loop_node = curr->next->next;
    curr->next->next->next = new_node(4);
    curr->next->next->next->next = new_node(5);
    curr->next->next->next->next->next = new_node(6);
    curr->next->next->next->next->next->next = loop_node;
	
	/*if we do curr->next->next->next->next->next->next = NULL;
	then it'll show the Output as Cycle not found*/
	
    check_loop(head);
    return 0;
}

void check_loop(node *head)
{
    node *p=head;
    node *q=head;
    
    while(1)
    {
        p=p->next;
        q=q->next->next;
        if(p == NULL || q == NULL)
        {
            std::cout <<"\nCycle not found."<< std::endl;
            break;
        }
        p=p->next;
        q=q->next->next;
        if(p == q)
        {
            std::cout <<"\nCycle found."<< std::endl;
            break;
        }
    }
}