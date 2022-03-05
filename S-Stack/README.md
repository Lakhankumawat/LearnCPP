## STACK 

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
5. Practical application : (<-)Back button present in a browser pushes the URLs of the visited sites on a stack. ## Infix To Postfix 

## Infix to postfix conversion
(information from geeksforgeeks)
- Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.

Why postfix representation of the expression? 
The compiler scans the expression either from left to right or from right to left. 
Consider the below expression: a op1 b op2 c op3 d 
If op1 = +, op2 = *, op3 = +
The compiler first scans the expression to evaluate the expression b * c, then again scans the expression to add a to it. The result is then added to d after another scan.
The repeated scanning makes it very in-efficient. It is better to convert the expression to postfix(or prefix) form before evaluation.
The corresponding expression in postfix form is abc*+d+. The postfix expressions can be evaluated easily using a stack. We will cover postfix expression evaluation in a separate post.

## Algorithm
(information from geeksforgeeks)
1. Scan the infix expression from left to right. 
2. If the scanned character is an operand, output it. 
3. Else, 
      1 If the precedence of the scanned operator is greater than the precedence of the operator in the stack(or the stack is empty or the stack contains a ‘(‘ ), push it. 
      2 Else, Pop all the operators from the stack which are greater than or equal to in precedence than that of the scanned operator. After doing that Push the scanned operator to the stack. (If you encounter parenthesis while popping then stop there and push the scanned operator in the stack.) 
4. If the scanned character is an ‘(‘, push it to the stack. 
5. If the scanned character is an ‘)’, pop the stack and output it until a ‘(‘ is encountered, and discard both the parenthesis. 
6. Repeat steps 2-6 until infix expression is scanned. 
7. Print the output 
8. Pop and output from the stack until it is not empty.


   - Its implementation is [here](InfixToPostfix.cpp)


   ![Infix to postfix conversion](https://prepinsta.com/wp-content/uploads/2020/06/Infix-to-Posting-Conversion-in-C-using-Stacks-2048x1453.png)

    - For more information about infix to postfix conversion [click here](https://prepinsta.com/data-structures/infix-to-postfix-conversion/)
