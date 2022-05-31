# Table of Contents:
- [Stack](#stack)
- [Infix to postfix conversion](#infix-to-postfix-conversion)
- [Parenthesis Checker](#parenthesis-checker)
- [How To check parenthesis using Stack](#how-to-check-parenthesis-using-stack)
- [Converting decimal number to binary](#converting-decimal-number-to-binary)
- [Stack ADT using linked list](#stack-adt-using-linked-list)
- [Stack using queues](#stack-using-queues)
- [Infix to Prefix Notation using stack](#infix-to-prefix-notation-using-stack)
- [Implementing two stacks using a single array](#implementing-two-stacks-using-a-single-array)
- [Reverse Stack](#reverse-stack)
- [Sort a Stack](#sort-a-stack)


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

## How To check parenthesis using Stack
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


## Stack using queues

### Problem statement : 
    We are given queue data structure, the task is to implement stack using only given queue data structure. 
    There are two ways to do it:
    1. We make pop easy and push expensive
    2. We make push easy and pop expensive

### Approach-1

#### Functions : 
- Stack1 : This function creates new stack and initialis=zes the size as 0
- push : This function pushes data into the node
- pop : This function pops the data from the stack
- top : This function retrieves stack top
- size : This function returns the stack size

#### Algorithms:

- Push():
    1. Add the element in queue1.
    2. While queue2 is empty add all its elements to q1. //thereby reversing the order of elements 
    3. Swap the two queues.

    Time Complexity : O(n)
- Pop():
    1. Simply pop the front element of queue1

    Time Complexity : O(1)

- Top():
    1. Return the front of queue.

    Time Complexity : O(1)

- Size():
    1. Return N;    
    
    Time Complexity : O(1)

![image](https://static.studytonight.com/data-structures/images/stack-using-queue-1.png)

### Approach-2

#### Functions : 
- Stack2 : This function creates new stack and initialis=zes the size as 0
- push : This function pushes data into the node
- pop : This function pops the data from the stack
- top : This function retrieves stack top
- size : This function returns the stack size

#### Algorithms:

- Push():
    1. Add the element in queue1.

    Time Complexity : O(1)

- Pop():
    1. push the front element of queue1 into queue2 and pop from queue1 until it has only 1 element left
    2. pop the element remaining in queue1
    3. swap the two queues

    Time Complexity : O(n)

- Top():
    1. push the front element of queue1 into queue2 and pop from queue1 until it has only 1 element left
    2. store the value of the last element left of queue1 in a variable val
    3. push the last element of queue1 into q2 and pop it from queue1
    4. return val

    Time Complexity : O(n)

- Size():
    1. Return N;    
    
    Time Complexity : O(1)

![image](https://1.bp.blogspot.com/-t4p_sriB32M/WCTAKc_5rNI/AAAAAAAABa4/lbBiRe_qKbYnsyaMaqco2aepxenvPDhZgCLcB/s1600/implement-stack-using-queue-single-queue-algorithm.png)
=======
## Infix to Prefix Notation using stack

- The conventational method of representing an arithmatic expression is known as infix notation of an expression
- Prefix expression: The operator is placed before the operand in prefix notation .
- Infix: A+B
- Prefix: +AB

### Need of prefix Notation :
Although  this notation is not very readable by humans ,but proved very useful for compiler designers in generating machine language  code for evaluating arithmetic expression .

### Algorithm
```
1. Using cpp build a stack.
2. Reverse the infix expression
3. Read each character of Infix expression one by one from left to right.
4. If the character is an operand, add to output. 
5. Else If the character is ')', push in stack. 
6. Else If the character is '(', pop the stack and output the string upto character ')' .
7. Else, it is a operator , check precedence and push or pop accordingly 
      1.  If the precedence of the checked operator is greater than the precedence of the operator in the stack(or the stack is empty or the stack contains a '(' ), push it. 
      2. Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the checked operator. After doing that Push the checked operator to the stack. (If there is a parenthesis while popping then stop there and push the checked operator in the stack.)   
7. Repeat steps 4-7 upto the end of Infix expression. 
8. pop the remaining expression from the stack until stack is empty
9.reverse the resultant string.
9. print the result string that is the prefix notation.
```
- Its implementation is [here](InfixToPrefix.cpp)

<img width="400" src="https://www.helpmestudybro.com/wp-content/uploads/2020/06/Infix2Prefix-1397x1536.jpg"> 


- For more information about infix to postfix conversion [click here](https://www.javatpoint.com/convert-infix-to-prefix-notation)

### Properties:
- Time Complexity O(n) , where n is length of expression .
- Space Complexity O(n), where n is the length of expression.



## Implementing two stacks using a single array

### Problem statement : 
Implement two stacks in a single array, such that the one stack starts from beginning of an array and another stack starts from end of an array.

![image](https://user-images.githubusercontent.com/84305637/168421991-20c74e9e-0960-4d79-b66f-b6aac2ffff78.png)

### Implementation :

Impotant keywords :
- arr : This is the array which holds two stacks
- top_1 : A reference to top data of stack 1
- top_2 : A reference to top data of stack 2

There are 6 methods used in this program :
- push_1() : This function pushes the data into the stack 1
- push_2() : This function pushes the data into the stack 2
- pop_1() : This function pops the data from the stack 1
- pop_2() : This function pops the data from the stack 2
- dispaly_1() : This function displays the stack 1 elements
- display_2() : This functiom dispalys the stack 2 elements

### Algorithm :

1. stack_1 will start from index 0 and grow towards the right end of the array

2. stack_2 will start from index n-1 and grow towards the left end of the array

3. when both the stacks meet each other then we cant push an element in both stacks

### Properties : 
- Time complexity : O(1)
- Stable : Yes

### Advantages :

- It uses the less memory by having a single array.
- The size of the both stacks can be changed.

### Disadvantages :

- The size of the array is limited.

# Reverse Stack

## Problem Statement
You are given a stack St. You have to reverse the stack using recursion.

## Examples
Example 1 : Input: St = {3,2,1,7,6}
            Output: {6,7,1,2,3}

Example 2 : Input: St = {5,6,7,8}
            Output: {8,7,6,5}

## Algorithm
- We have to reverse a stack using recursion.
- First, we have called the reverse() function which will reverse our elements till stack is not empty.
- Then we have called insert() function inside reverse() which would add all elements at bottom of new stack.
- The insert() function will be the recursive function here.
- This function take out the topmost element, pop it and recursively call itself to insert elements.
- At last our original stack would get reversed.

## Time Complexity
- Time Complexity : O(N^2)
## Space Complexity
- Space Complexity : O(N) here N is the recursion stack space.


# Sort a Stack

## Problem Statement
Given a stack, the task is to sort it such that the top of the stack has the greatest element.

## Examples
Example 1 : Input: St = {11,2,32,3,41}

            Output: {41,32,11,3,2}

Example 2 : Input: St = {9,3,28,4,67}

            Output: {67,28,9,4,3}
            
 ![image](https://user-images.githubusercontent.com/94742536/168801681-a0bbfc3e-58da-411e-a54f-11a47d88254f.png)
        

## Algorithm
- Insert elements into stack.
- Declare a min heap.
- Run the loop till the stack is not empty.
- Run the loop till the min heap is not empty.
- While in main function, call sort and show function respectively.

## Time Complexity
- Time Complexity : O(N log N)
## Space Complexity
- Space Complexity : O(N) here N is the stack space.
