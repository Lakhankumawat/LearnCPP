# Linked List:
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the image below:

![ll](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list. 

## Why Linked List ?

Arrays can be used to store linear data of similar types, but arrays have the following limitations. 
1. The size of the arrays is fixed: So we must know the upper limit on the number of elements in advance. Also, generally, the allocated memory is equal to the upper limit irrespective of the usage. 
2. Inserting a new element in an array of elements is expensive because the room has to be created for the new elements and to create room existing elements have to be shifted but in Linked list if we have the head node then we can traverse to any node through it and insert new node at the required position.
For example, in a system, if we maintain a sorted list of IDs in an array id[]. 
id[] = [1000, 1010, 1050, 2000, 2040]. 
And if we want to insert a new ID 1005, then to maintain the sorted order, we have to move all the elements after 1000 (excluding 1000). 
Deletion is also expensive with arrays until unless some special techniques are used. For example, to delete 1010 in id[], everything after 1010 has to be moved due to this so much work is being done which affects the efficiency of the code.

Advantages over arrays :
1. Dynamic size 
2. Ease of insertion/deletion

Drawbacks: 
1. Random access is not allowed. We have to access elements sequentially starting from the first node(head node). So we cannot do binary search with linked lists efficiently with its default implementation. Read about it here. 
2. Extra memory space for a pointer is required with each element of the list. 
3. Not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.

## Linked Lists can further be divided into 3 types of linked lists which are as follows :
1. Singly Linked List
2. Circular Linked List
3. Doubly Linked List 

Here we will be studying about Doubly Linked Lists.

# Doubly Linked List
A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.

![doubly_linked_list](https://user-images.githubusercontent.com/93239528/167244323-4c38727f-b2e9-4f07-afe6-ccabcc610243.jpg)


Following are the important terms to understand the concept of doubly linked list.

- Link − Each link of a linked list can store a data called an element.

- Next − Each link of a linked list contains a link to the next link called Next.

- Prev − Each link of a linked list contains a link to the previous link called Prev.

### Basic Operations

- Insertion − Adds an element at the beginning of the list.

- Deletion − Deletes an element at the beginning of the list.

- Insert Last − Adds an element at the end of the list.

- Delete Last − Deletes an element from the end of the list.

- Insert After − Adds an element after an item of the list.

- Delete − Deletes an element from the list using the key.

- Display forward − Displays the complete list in a forward manner.

- Display backward − Displays the complete list in a backward manner.

### Advantages over singly linked list 

1) A DLL can be traversed in both forward and backward direction. 
2) The delete operation in DLL is more efficient if pointer to the node to be deleted is given. 
3) We can quickly insert a new node before a given node. 

# Reverse a Doubly Linked List

Given a Doubly Linked List, the task is to reverse the given Doubly Linked List.

1. Original Doubly Linked List :

![ll](https://media.geeksforgeeks.org/wp-content/uploads/reverse_lincked-list1.jpg)

2. Reversed Doubly Linked List :

![ll](https://media.geeksforgeeks.org/wp-content/uploads/reverse_lincked-list2.jpg)


## To reverse a doubly linked list, we need to follow these mentioned steps:
1. Swap prev and next pointers for all nodes.
2. Change prev of the head (or start).
3. Change the head pointer in the end.

## Time Complexity:
Time Complexity : O(n), where N denotes the number of nodes in the doubly linked list.

## Space Complexity:
Space Complexity : O(1), (since no extra space is used.)

## Algorithm
1. Keep traversing through the entire doubly linked list until current does not become equal to NULL.
2. While traversing, for each node store the value of the previous pointer of current node in a variable temp. => temp = current->prev;
3. Then place the value of current->next into current->prev.
4. Now put the value of temp into current -> next.
5. Now move to the next node by shifting current to current->prev, because the next node will now be accessible through the previous pointer since the values of the pointers have been swapped.



We can also swap data instead of pointers to reverse the Doubly Linked List. Method used for reversing array can be used to swap data. Swapping data can be costly compared to pointers if the size of the data item(s) is more.
