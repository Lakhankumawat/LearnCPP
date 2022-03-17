# Cycle in Linked List
## Algorithm used: [Floyd's Algorithm or Hare-Tortoise Algorithm]

## Approach
- This is the fastest method to detect cycle in linked list
- Traverse linked list by using two pointers.
- Move one pointer(slow) by one step and second pointer(fast) by   two step.
- If these pointers meet at the same node then there is a cycle. If pointers do not meet then linked list doesn’t have a cycle present.

# Complexity Analysis:  
## Time Complexity: O(n)
- Only one traversal of the loop is needed.

## Space Complexity: O(1)
- There is no space required.

You can also see different approches [here](https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/)