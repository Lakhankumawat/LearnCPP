## Quick Sort on Doubly Linked List
#### Approach
Let's talk about C++ implementation of Quick Sort on the Doubly Linked List. So the idea is quite simple, we will have to check the pointer to the last node. Once we are done with this then we can recursively sort the linked list using pointers to first and last nodes of a linked list, similar to the above recursive function where we pass indexes of first and last array elements.

#### Visualization:
![enter image description here](https://media.geeksforgeeks.org/wp-content/uploads/Doublylinkedlistquicksort1.jpg)

 1. At first we need to create a node. So we will define a class Node
   having the parameters of a node.
 2. After that as we need to find the last node so we will define a
    function which will basically find the last node of our linked list.
 3. Then, we will assume the last element as pivot & then place the
    pivot element at its correct position in the sorted array, and
    places all smaller (smaller than pivot) to left of pivot and all
    greater elements to right of pivot.
 4. Apart from that we will need to define another function for quick
    sort implementation (Recursive one). And once these all are defined
    we will create another function which will help in inserting a node
    at the beginning of the Doubly Linked List.
 5. At last we need to just print the list and that's it.

#### Time Complexity:
Average case -> **O(nLogn)**
Best case -> **O(nLogn)**
Worst case -> **O(nLogn)**

