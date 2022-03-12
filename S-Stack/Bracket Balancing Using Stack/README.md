#  Bracket Balancing Using Stack

Here we will discuss how to check the balanced brackets using stacks. We not only check the opening and closing brackets but also check the ordering of brackets. For an example we can say that the expression **"[{} () {()}]"** it is correct, but **"{[}]"** it is not correct.
```
Input: Some expression with brackets "{()}[]"
Output: They are balanced
```

## Algorithim
```
Step 1: Define a stack to hold brackets
Step 2: Traverse the expression from left to right
Step 2.1: If the character is opening bracket (, or { or [, then push it into stack
Step 2.2: If the character is closing bracket ), } or ] Then pop from stack, and if the popped character is matched with the starting bracket then it is ok. otherwise they are not balanced.
Step 3: After traversal if the starting bracket is present in the stack then it is not balanced.
```
#### Below is representation of above approach

![ForBalancedParanthesisInanExoression1](https://user-images.githubusercontent.com/85986613/157252818-fc5e6215-255d-4cc2-bf1e-c93ea46d9269.png)


**Time Complexity:** O(n)  
**Auxiliary Space:** O(n) for stack.

### Test Case

![image](https://user-images.githubusercontent.com/85986613/158027991-5b591672-c5cc-42a5-af19-82eb57ab11d7.png)

![image](https://user-images.githubusercontent.com/85986613/158028015-ac57daa1-3753-4e10-8aba-2cedf5bf6452.png)

![image](https://user-images.githubusercontent.com/85986613/158028121-a6cafb9c-d15f-4cb5-8d03-71be620be167.png)
