## STACK 

- A linear-data structure that follows LIFO (Last In First Out) principle.
- It is useful when we need to store data in a particular order like... function calls during recursion
- It can be implemented using Array or Linked List. (Each has its own pros and cons. Try thinking yourself)
- Implementation of the basic operations like push, pop, peek etc  provided [here](StacksWithoutSTL.cpp). 

![stack](https://user-images.githubusercontent.com/60391776/155890360-c291d4d6-1427-47f7-abb6-9246ea64e2fd.png)


## Algorithm:
1. PUSH:

if(top==MAX-1)
    std::cout<<"\nStack is full."<<std::endl;
else
    top++;
    stk[top]=num;

This will add element in Stack

2. POP:

if(top==-1)
    std::cout<<"\nStack is empty."<<std::endl;
else
    num=stk[top];
    top--;

This will remove element from Stack
        
## Properties:
Time Complexity: O(N)\
Space Complexity: O(N)

## Advantage:
It is more time efficient than Dynamic Implementation.

## Disadvantage:
In this static implementation , lots of effort are there to add or remove the value . 

Applications of stack :

1. Parenthesis Balancing
2. Infix to prefix or postfix conversion
3. To reverse a word or a string
4. _Call stack_ : To store list of functions that are either executing or waiting to be executed during runtime. ( stored in stack in memory)
5. Practical application : (<-)Back button present in a browser pushes the URLs of the visited sites on a stack.