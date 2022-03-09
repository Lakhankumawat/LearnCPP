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

## Image for Reference
![image](https://user-images.githubusercontent.com/74498344/157373186-14c6049b-aee4-44af-8d42-50d413cc77f1.png)

