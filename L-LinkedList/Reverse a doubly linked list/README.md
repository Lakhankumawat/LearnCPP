# Reverse a Doubly Linked List

## To reverse a doubly linked list, we need to follow these mentioned steps:
1. Swap prev and next pointers for all nodes.
2. Change prev of the head (or start).
3. Change the head pointer in the end.

## Time Complexity:
Time Complexity : O(n), where N denotes the number of nodes in the doubly linked list.

## Space Complexity:
Space Complexity : O(1), (since no extra space is used.)

## Algorithm
1. Keep traversing through the entire doubly linked list until current does not become equal to NULL.
2. While traversing, for each node store the value of the previous pointer of current node in a variable temp. => temp = current->prev;
3. Then place the value of current->next into current->prev.
4. Now put the value of temp into current -> next.
5. Now move to the next node by shifting current to current->prev, because the next node will now be accessible through the previous pointer since the values of the pointers have been swapped.
