### Doubly Linked List Options

1. Create a doubly linked list 
2. Display a doubly linked list:
    a. Display a whole list
    b. Dsiplay from a specific position to another using iterators
    c. Displat from position number of elements
3. Insert a node in doubly linked list 
    a. Insert a node in a specific position using iterator
    b. Insert a node in tail of list 
    c. Insert a node in a specific index (begins from 1)
4. Delete a node in doubly linked list 
    a. Delete a node in a specific position using iterator
    b. Delete a node in a specific index (begins from 1)
5. Create an iterator for a doubly linked list  

### Brief Intro
This header file is the implementation of Doubly Linked List similar to that provided in the C++ STL.
It provides an itertaor class to access any node(element) from the beginning, end or in the middle of the list.

### Steps of Implementation
 
1. Create a template class (to store any desired data type) for the list nodes, each node has a value and 2 pointers (previous and next).
2. Create a doubly linked list template class for the list itself in which it's implemented the iterator class and in which the nodes will be inserted. 

### Space Complexity

Space Complexity : O(n) 

### Time Complexity

* Insertion at head node - O(1).
* Insertion at last node - O(1).
* Insertion in middle - O(n). 
* Deletion at head node - O(1).
* Deletion at last node - O(n).
* Deletion in middle - O(1). 
* Displaying the first node - O(1).
* Displaying a node in between - O(n). 
* Displaying the last node - O(n). 