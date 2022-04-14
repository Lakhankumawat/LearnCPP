# Table of Contents:
- [Stack](#stack)
- [Infix to postfix conversion](#infix-to-postfix-conversion)
- [Parenthesis Checker](#parenthesis-checker)
- [How To check parenthesis using Stack ?](#how-to-check-parenthesis-using-stack)
- [Converting decimal number to binary](#converting-decimal-number-to-binary)
- [Stack ADT using linked list](#stack-adt-using-linked-list)

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

## Infix to postfix conversion

- The conventational method of representing an arithmatic is known as infix
- Postfix expression: if the operater is placed after the operand then this notation is called postfix or reverse polish notation .
- Infix A+B
- Postfix AB+

Need of postfix Notation :
Although  this notation is not very reable by humans , but proved very useful for compiler designers in generating machine language  code for evaluating arithmetic expression .

Algorithm
```
- Time Complexity O(n) , where n is length of expression .
1. Using cpp built stack , For stack operation .
2. check each character of Infix expression one by one from left to right.
3. If the character is an operand, add to output. 
4. Else If the character is ‘(‘, push in stack. 
5. Else If the character is ‘)’, pop the stack and output the string upto character '(' .
6. Else, it is a operator , check precedence and push or pop accordingly 
      1.  If the precedence of the checked operator is greater than the precedence of the operator in the stack(or the stack is empty or the stack contains a ‘(‘ ), push it. 
      2. Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the checked operator. After doing that Push the checked operator to the stack. (If thjere is a parenthesis while popping then stop there and push the checked operator in the stack.)   
7. Repeat steps 3-6 upto the end of Infix expression. 
8. pop the remaining expression from the stack until stack is empty
9. print the result string that is the postfix notation.
```
- Its implementation is [here](InfixToPostfix.cpp)

![Infix to postfix conversion](https://prepinsta.com/wp-content/uploads/2020/06/Infix-to-Posting-Conversion-in-C-using-Stacks-2048x1453.png)

- For more information about infix to postfix conversion [click here](https://prepinsta.com/data-structures/infix-to-postfix-conversion/)

## Parenthesis Checker

A parentheses is said to be balanced if each left parenthesis has its respective right parenthesis to match its pair in a well-nested format.

In computer science, valid parentheses(balanced parentheses) are a notation used to simplify expressions written in an operator-precedence parser by allowing the programmer to explicitly mark the operator precedence and associativity of a given expression. 

Note that an input string is valid if:

1.Open brackets must be closed by the same type of brackets
2.Open brackets must be closed in the correct order.

## How To check parenthesis using Stack ?
```
1. Declare stack S.
2. Now traverse the string expression using a pointer. 
    if the current pointer is at opening bracket ('(' or '{' or '[') then push it to stack S.
    else the current pointer is at closing bracket (')' or '}' or ']') then pop from the stack 
        if the popped bracket is the matching opening bracket then brackets are valid 
        else brackets are not valid.

After complete traversal, if there is some starting bracket left in the stack then "not valid"
```
![image](https://user-images.githubusercontent.com/91210199/159122082-2a5e98d2-bdd4-4f9d-9131-1d2048a5f60f.png)
 
## Converting decimal number to binary

For converting a decimal number to binary we first have to recursively divide the number by 2 and store its remainder. Then remainders are popped one at a time and converted into its Binary equivalent.

![image](https://user-images.githubusercontent.com/91279248/162764333-a8b6929f-5c5e-4f92-add0-d1ed2233f2db.png)

### Key Terms:
- **Binary Equivalent:** A binary number is a number expressed in the base-2 numeral system or binary numeral system, a method of mathematical expression which uses only two symbols: one and zero.

For example:

![image](https://user-images.githubusercontent.com/91279248/162582678-e84410dd-d018-4bca-8b52-630411a8cde5.png)

### Algorithm for decimal to binary conversion:

1. Take a number in decimal
2. while the number is greater than 0
3. Push the remainder after dividing the number by 2 into stack.
4. set the number as number / 2.
5. Pop elements from stack and print the binary number

**Time Complexity** is O(n)

## Stack ADT using Linked List

### Problem statement : 
    Implement all the possible basic stack ADT functions using linked list implemenetation. Design the program in such a way that it should work for all the data types whenever used. Also in main function demenostarte the functions using any data type.

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

![image](https://prepinsta.com/wp-content/uploads/2019/07/ll.png)
