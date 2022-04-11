## Linked Lists 
### [1.Singly Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/S-SinglyLinkedList)
### [2.Doubly Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/D-DoublyLinkedList)
### [3.Circular Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/C-CircularLinkedList)
### [4.Circular Doubly Linked Lists](https://github.com/Lakhankumawat/LearnCPP/tree/main/L-LinkedList/C-CircularDoublyLinkedList)
### [5.Searching in a linked list](#searching-in-a-linked-list)



# Iterative Solution 
## ALGORITHM

1) Initialize a node pointer, current = head.
2) Do following while current is not NULL
    a) current->key is equal to the key being searched return true.
    b) current = current->next
3) Return false 

## PROPERTIES
Time-Complexity-->O(n)
Space-Complexity-->O(n)

## EXAMPLES
Linked list-->11->23->45->56->13->50
->If we search for 45 then output will be
output-->Yes
->If we search for 4 then output will be
output-->No




# Recursive Solution 
## ALGORITHM
bool search(head, x)
1) If head is NULL, return false.
2) If head's key is same as x, return true;
3) Else return search(head->next, x) 

## PROPERTIES
Time-Complexity-->O(n)
Space-Complexity-->O(n)

# EXAMPLES
Linked list-->1->2->5->8->6->30
->If we search for 40 then output will be
output-->No
->If we search for 8 then output will be
output-->yes


