# Table of content
- [Linked List With Header Node](#Linked-List-With-Header-Node)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Linked List With Header Node

- Header linked list is linked list which have a header node at the beginning of the list and trhe list start from the second node .
- Header node can be used to store data like total number of nodes in the linkedlist or max/min element in the linked list or can be left empty to use in future for inserting some useful information about linked list.


![Linked-List-With-Header-Node](https://teachics.org/data-structures/header-linked-list/)

### Time Complexity
- For create_list()
  O(n) ,where n is the number of node
- For display()
  O(n) ,where n is the number of node
- For addatend()
  O(n) ,where n is the number of node
- For addbefore
  O(1) ,constant
- For addatpos
  O(1) ,constant
- For del()
  O(1) ,constant
- For  reverse()
  O(n) ,where n is the number of node

### Advantages 

- Can store some useful information about linked list.
- It make the program simple and faster as the list is never empty ,header node is always present . Therefore we can avoid cases for insertion or deletion at beginning.
- head or start will always point to header node what irrespective of the first node ,so no need to repoint the start to first node.

### Disadvantages

- Extra memory required to store the header node