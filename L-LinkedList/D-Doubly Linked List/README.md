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
 
1. Create a node template class (to store any desired data type) for the list nodes, each node has a value and 2 pointers (previous and next).
2. Create a doubly linked list template class for the list itself in which it's implemented the iterator class and in which the nodes will be inserted. 
3. DLL class contains an iterator class, insert function, erase function and display function.


### Space Complexity

Space Complexity : O(n) 

### Time Complexity

* Insertion at head node - O(1). 
* Deletion at head node - O(1). 
* Displaying the first node - O(1).
* Displaying a node in between - O(n). 
* Displaying the last node - O(n). 

### Doubly Linked List advantages and disadvantges:

## Advantages
1. Doubly linked list is more efficient than singly linked list in accessing nodes(elements) as forward and backward traversal is possible.
2. Time complexity of inserting and deleting using iterator is O(1) but in singly linked list it's O(n).
3. Doubly linked list is preferrable in searching.

## Disadvantages
1. Conusme more space than a singly linked list as each node has previous pointer.
2. No direct access.