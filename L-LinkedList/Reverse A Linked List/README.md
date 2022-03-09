# To reverse a Linked List 
### To reverse a linked list, do the following.
1. Initialize three pointers prev as NULL, curr as head and next as NULL
2. Iterate through the linked list. In loop, do following,
    next = curr->next
    curr->next = prev 
    prev = curr 
    curr = next
## Time Complexity and Space Complexity
1.Time Complexity: O(n) 
2.Space Complexity: O(1)



