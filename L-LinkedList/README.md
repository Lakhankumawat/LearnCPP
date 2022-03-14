In a circular Singly linked list, the last node of the list contains a pointer to the first node of the list.

Why circular?

In a singly linked list, for accessing any node of the linked list, we start traversing from the first node. 
If we are at any node in the middle of the list, then it is not possible to access nodes that precede the given node. 
This problem can be solved by slightly altering the structure of a singly linked list. 
In a singly linked list, the next part (pointer to next node) is NULL. 
If we utilize this link to point to the first node, then we can reach the preceding nodes.

Why have we taken a pointer that points to the last node instead of the first node?

For the insertion of a node at the beginning, we need to traverse the whole list. 
Also, for insertion at the end, the whole list has to be traversed. 
If instead of start pointer, we take a pointer to the last node, then in both cases there won’t be any need to traverse the whole list. 
So insertion at the beginning or at the end takes constant time, irrespective of the length of the list.
