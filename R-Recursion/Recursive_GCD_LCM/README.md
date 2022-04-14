# Finding GCD and LCM by using Recursion
# Table of contents :
- [Brief Explanation](#brief-explaination-about-gcd-and-lcm)
- [What is Recusion](#what-is-recursion)
- [Algorithm](#algorithm)
- [Time and Space Complexity](#time-and-space-complexity)
- [Advantages](#advantages)
- [Disadvantages](#disadvantages)


## Brief explainaion about GCD and LCM :
The least common multiple (LCM) of two integers is the smallest positive integer that is a multiple of both. The greatest common divisor (GCD) of two integers is the largest positive integer dividing both. The product of the two numbers is the product of the LCM and the GCD.

## What is Recursion : 
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function. Using recursive algorithm, certain problems can be solved quite easily. Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.

The Recursion can be demonstrted as base case and sub cases :
![](https://files.realpython.com/media/Thinking-Recursively-in-Python_Watermarked.1825397c00ea.jpg)

### Diference betwween iterative approach and recursive approach :
![](https://cdn-media-1.freecodecamp.org/images/1*QrQ5uFKIhK3jQSFYeRBIRg.png)

## Algorithm :
### Algorithm for GCD :

- Read two numbers a and b
- If(a is equal to 0) return b
- If(b is equal to 0) return a
- else return (b, a mod b)

### Algorithm for LCM

- Read two numbrs a and b
- return (a x b) / GCD(a, b)

## Time and Space Complexity
- Time Complexity: `O(n)`
- Space complexity: `O(n)`

## Advantages
 - The logic used by the program is simple to understand
 - time complexity of this program is less compared to other methods for finding GCD and LCM

 ## Disadvantages
 - As recursion uses stack, for large numbers, memory may become full due to stack full
