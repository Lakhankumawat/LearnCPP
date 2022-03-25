## Table of Content
- RedundantParenthesis


## RedundantParenthesis
Given a string of balanced expression, find if it contains a redundant parenthesis or not. A set of parenthesis are redundant if the same sub-expression is surrounded by unnecessary or multiple brackets. Print True if redundant, else False.
Note: Expression may contain ‘+‘, ‘*‘, ‘–‘ and ‘/‘ operators. Given expression is valid and there are no white spaces present.
For example:
- ((a+b)) can reduced to (a+b), this is Redundant
- (a+b*(c-d)) doesn't have any redundant or multiple
brackets


## Terms Explained:
### Stack : Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/stack.png)

Redundant : The expression should not have extra brackets.


## Algorithm
### We will use stack as a data structure to solve this problem.
1. We iterate through the given expression and for each character in the expression, if the character is an open parenthesis ‘(‘ or any operators, we push it to the stack.
2. If the character is close parenthesis ‘)’, then pop characters from the stack till matching open parenthesis ‘(‘ is found. 
For any sub-expression of expression, if we are able to pick any sub-expression of expression surrounded by (), then we again left with () as part of string, we have redundant braces. 
We iterate through the given expression and for each character in the expression, if the character is an open parenthesis ‘(‘ or any of the operators or operands, we push it to the stack. If the character is close parenthesis ‘)’, then pop characters from the stack till matching open parenthesis ‘(‘ is found. 
Now for redundancy two condition will arise while popping- 
1. If immediate pop hits an open parenthesis ‘(‘, then we have found a duplicate parenthesis. For example, (((a+b))+c) has duplicate brackets around a+b. When we reach the second “)” after a+b, we have “((” in the stack. Since the top of stack is an opening bracket, we conclude that there are duplicate brackets. 

2. If immediate pop doesn’t hit any operand(‘*’, ‘+’, ‘/’, ‘-‘) then it indicates the presence of unwanted brackets surrounded by expression. For instance, (a)+b contain unwanted () around a thus it is redundant. 


## Properties
### Time Complexity: O(n)
- Only one traversal of the loop is needed.
### Space Complexity: O(n)
- There is extra space required.


## Advantages
- Problem is solved in O(N) time complexity.
- Stack made it easier to understand.


## Disadvantages
- There is extra space required.
