# Table of content
- [Linked List With Header Node](#Linked-List-With-Header-Node)
    - [Implementation](LinkedListWithHeaderNode.cpp)
    - [Time Complexity](#Time-Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Linked List With Header Node

- Header linked list is linked list which have a header node at the beginning of the list and the list start from the second node .
- Header node can be used to store data like total number of nodes in the linkedlist or max/min element in the linked list or can be left empty to use in future for inserting some useful information about linked list.


![Linked-List-With-Header-Node](https://teachics.org/wp-content/uploads/2021/09/header-linked0list-2.png)

### Time Complexity
- For create_list()
  O(n) ,where n is the number of node
- For display()
  O(n) ,where n is the number of node
- For addatend()
  O(n) ,where n is the number of node
- For addbefore()
  O(n)
- For addatpos()
  O(n)
- For del()
  O(n)
- For  reverse()
  O(n) ,where n is the number of node

### Advantages 

- Can store some useful information about linked list.
- It make the program simple and faster as the list is never empty ,header node is always present . Therefore we can avoid cases for insertion or deletion at beginning.
- head or start will always point to header node what irrespective of the first node ,so no need to repoint the start to first node.

### Disadvantage

- Extra memory required for the header node .