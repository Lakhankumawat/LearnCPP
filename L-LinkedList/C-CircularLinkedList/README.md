
### [Circular Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/C-CircularLinkedList)
<!-- Table of content -->
#### Table of content
 - [Circular Linked List](#circular-linked-list)
 - [Circular Linked List complexity](#circular-linked-list-complexity)
 - [Why circular linked list](#why-circular-linked-list)
 - [Applications of circular linked list](#applications-of-circular-linked-list)
 - [Operations of circular linked lit](#operations-of-circular-linked-list)
   - [Inserting](#1insert-operation)
   - [Deleting](#2-delete-operation)
   - [Traversal](#3traversal)



#### Circular Linked List

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
 
 
 

<a name="circularLinkedListComplexity"></a>
#### Circular Linked List Complexity	
 ```

1) Insertion Operation	O(1) or O(n)	
2) Deletion Operation	O(1)
 ```
<a name="whycircularLinkedList"></a>
#### Why Circular Linked List?
 ```

1) The NULL assignment is not required because a node always points to another node.
2) The starting point can be set to any node.
3) Traversal from the first node to the last node is quick.
 ```
<a name="applicationsofCircularLinkedlist"></a>
#### Applications Of Circular Linked List
 ```
1) It is used in multiplayer games to give a chance to each player to play the game.
2) Multiple running applications can be placed in a circular linked list on an operating system. The os keeps on iterating over these applications.
```
### Operations Of Circular Linked List

### 1)Insert Operation

### Algorithm 
The first operation we're going to cover is the insertion of new nodes. While inserting a new element we'll need to handle two cases :

1)The head node is null, that is there are no elements already added. In this case, we'll make the new node we add as both the head and tail of the list since there is only one node.
2)The head node isn't null, that is to say, there are one or more elements already added to the list. In this case, the existing tail should point to the new node and the newly added node will become the tail. 
3)In both of the above cases, the nextNode for tail will point to head.

### Complexity
 Complexity of insert operation in best case can cost O(1) whereas in worst case can cost O(n)
 
 #### 2) Delete Operation
 
 ### Algorithm
 
 Generally speaking, after we delete an element, we need to update the nextNode reference of the previous node to point to the nextNode reference of the node that has been deleted.

However, there are some special cases we need to think about:

1)The circular linked list has only one element, and we want to remove the element – In this case, we just need to set the head node and tail node to null.
2)The element to delete is the head node – We must make head.nextNode as the new head.
3)The element to delete is the tail node – We need to make the previous node of the node we want to delete as the new tail.

#### Complexity
Complexity of delete operation can cost us O(1).

### 3)Traversal

#### Algorithm
For traversal we fix the currentNode as head and traverse through the entire list using the nextNode of this node until current node will not be equal to the head of the list

#### Complexity
Complexity for traversal can cost us O(n).






  


 
