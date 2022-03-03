# Delete a node in Linked List 
## For Deletion From Beginning, End, Specified Position & Key

### To delete a node from linked list, we need to do following steps.
1. Find previous node of the node to be deleted.
2. Change the next of previous node.
3. Free memory for the node to be deleted.

## Time omplexity
1. Deleting the first node -> O(1)
2. Deleting a node in between -> O(n)
3. Deleting the last node -> O(n)

## Space Complexity:  
Space Complexity: O(1) (since no extra space is used.)

## Algorithm

If the node to be deleted is the head node, then simply point the head to the second node of the linked list.
For all other nodes:
Traverse the linked list and for the current node curr, check whether the next node contains the key that needs to be deleted.
If true, point curr -> next to curr -> next -> next.
Else, keep traversing the list until the end of the linked list.
The following illustration will make the approach more clear.

![ll](https://user-images.githubusercontent.com/75165587/156487339-0cbead17-c8c7-4ec2-8ee5-45120dcca7db.PNG)

## CODE

```
Node *deleteNode(Node *head, int i){
    if (i == 1)  return head->next; // if we want to delete the head node then return the next node after head
    Node *copyhead = head;
    int c = 1;
    while (c != i - 1){ // traverse the linked list just one before node which you want to delete    
        copyhead = copyhead->next;
        c++;
    }
    copyhead->next = copyhead->next->next; // make the new connection
    return head;
}

```
