## Linked Lists 
### [1.Singly Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/S-SinglyLinkedList)
### [2.Doubly Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/D-DoublyLinkedList)
### [3.Circular Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/C-CircularLinkedList)
### [4.Circular Doubly Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/C-CircularDoublyLinkedList)




### Circular Linked List
A circular linked list is a type of linked list in which the first and the last nodes are also connected to each other to form a circle.

There are basically two types of circular linked list:

1. Circular Singly Linked List

Here, the address of the last node consists of the address of the first node.

 <!--image to help better understanding of the concept-->

 ![image](https://user-images.githubusercontent.com/91210199/163720997-48b4d350-8a7e-418f-a891-36453725d40b.png)



2. Circular Doubly Linked List

Here, in addition to the last node storing the address of the first node, the first node will also store the address of the last node.

<!--image to help better understanding of the concept-->

 ![image](https://user-images.githubusercontent.com/91210199/163721018-1a167845-aac5-4ff9-b05e-728323427a48.png)


## Circular Linked List Complexity	(Time Complexity	Space Complexity)

 1) Insertion Operation	O(1) or O(n)	
 2) Deletion Operation	O(1)

## Why Circular Linked List?

1) The NULL assignment is not required because a node always points to another node.
2) The starting point can be set to any node.
3) Traversal from the first node to the last node is quick.

## Applications Of Circular Linked List

 1) It is used in multiplayer games to give a chance to each player to play the game.
 2) Multiple running applications can be placed in a circular linked list on an operating system. The os keeps on iterating over these applications.



 
