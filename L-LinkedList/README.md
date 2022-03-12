
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
