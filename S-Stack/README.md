## STACK 

- A linear-data structure that follows LIFO (Last In First Out) principle.
- It is useful when we need to store data in a particular order like... function calls during recursion
- It can be implemented using Array or Linked List. (Each has its own pros and cons. Try thinking yourself)
- Implementation of the basic operations like push, pop, peek etc  provided [here](StacksWithoutSTL.cpp). 

![stack](https://user-images.githubusercontent.com/60391776/155890360-c291d4d6-1427-47f7-abb6-9246ea64e2fd.png)

Applications of stack :

1. Parenthesis Balancing
2. Infix to prefix or postfix conversion

   ## Infix To Postfix Conversion 
   its implementation is [here](InfixToPostfix.cpp)

   ![stack](https://prepinsta.com/wp-content/uploads/2020/06/Infix-to-Posting-Conversion-in-C-using-Stacks-2048x1453.png)

    for more information about infix to postfix conversion [click here](https://prepinsta.com/data-structures/infix-to-postfix-conversion/)

3. To reverse a word or a string
4. _Call stack_ : To store list of functions that are either executing or waiting to be executed during runtime. ( stored in stack in memory)
5. Practical application : (<-)Back button present in a browser pushes the URLs of the visited sites on a stack.