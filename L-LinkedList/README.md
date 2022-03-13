
Palindrome linked list
---

In this approach, I have used a stack to store all the elements after the middle
element so that We have to compare only (n/2)-1 elements to find out the list is palindrome or not.

To check weather the given list is palindrome or not we need to follow these steps
---
* Find the middle node of the linked list
* Add all the elements after the middle element in the stack
* Compare the elements of the linked list with the top element of the stack
* If the element of the stack and the linked list is same,
  Iterate to the next element in the linked list and pop the element of the stack
* Repeate 4th point till stack is empty (or we have reached the middle element of the list)
* If we have successfully poped all the element of the stack, Return 1

  Else Return 0
  
Time complexity
---
* The time complexity of this approach will be O(n)
  - But we have to compare only (n/2)-1 time as we have stored all the elements after the middle in the stack and we are comparing 
    the elements of the linked list only till the previous of the middle node.
    
Space complexity
---
* Space complexity will be O(1).

Adwantage
---
* Less comparision
* Easy approach
=======

Insert a node at nth position in the linked list
---
To insert a node at nth position, we need to follow these steps-
* Create a new node
* Iterate to the previous of the nth node
* Set newnode's ‘next’ pointer to the ‘next’ pointer of the previous of the nth node
* Set previous node's next to the new node
* Return the head pointer

Time Complexity
------------------------
* Insertion at head node - O(1).
* Insertion at last node - O(n).
* Insertion in middle - O(n). 

Space Complexity
-----------
* Space complexity: O(1).


Image to show the insertion
---

![insertion-in-singly-linked-list-at-beginning](https://user-images.githubusercontent.com/86103131/157711281-4a6a00be-1a58-4fca-af71-e5b5a1a31e89.png)

