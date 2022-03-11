# STACK 

- A linear-data structure that follows LIFO (Last In First Out) principle.
- It is useful when we need to store data in a particular order like... function calls during recursion
- It can be implemented using Array or Linked List. (Each has its own pros and cons. Try thinking yourself)
- Implementation of the basic operations like push, pop, peek etc  provided [here](StacksWithoutSTL.cpp). 

![stack](https://user-images.githubusercontent.com/60391776/155890360-c291d4d6-1427-47f7-abb6-9246ea64e2fd.png)

Applications of stack :

1. Parenthesis Balancing
2. Infix to prefix or postfix conversion
3. To reverse a word or a string
4. _Call stack_ : To store list of functions that are either executing or waiting to be executed during runtime. ( stored in stack in memory)
5. Practical application : (<-)Back button present in a browser pushes the URLs of the visited sites on a stack.




# LINKED LIST IMPLEMENTATION OF A STACK

### Problem statement : 
    Implement all the possible basic stack functions using linked list implemenetation. Design the program in such a way that it should work for all the data types whenever used. Also in main function demenostarte the functions using any data type.

### Key Terms : 
- Head : A meta data structure hwich contains link to top pointeer and count.
- Push : Inserting a new element into the Stack
- Pop : Removing the topmost element
- Count : Number of elemets in a Stack

### Functions : 
- createStack : This function creates new stack
- pushstack : This function pushes data into the node
- popStack : This function pops the data from the stack
- stackTop : This function retrieves stack top
- emptyStack : This function checks whether the stack is empty
- stackCount : This function return the stack count

### Properties

- Time Complexity :
  - Worst case time	: O(1)
  - Best case time : O(1)
  - Average case time : O(1)
- Auxillary Space : O(1)
- Stable : Yes

### Advantages

- Uasge of a Linked List in a program makes it better efficient than stack using array.

### Disadvantage

- Working with linked list and void pointers is little bit difficult.
