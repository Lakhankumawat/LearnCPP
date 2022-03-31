# To reverse a Linked List 
Given pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.
## Example
Input: Head of following linked list 
1->2->3->4->NULL 
Output: Linked list should be changed to, 
4->3->2->1->NULL
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
![image](https://user-images.githubusercontent.com/74498344/158961580-61a95b47-fa77-4547-bfe1-7288fb8aa88b.png)

