# Table of content

- [Recursion](#recursion)
  - [# Different types of the recursion](#different-types-of-the-recursion)
    - [Tree Recursion](#tree-recursion)
      - [Algorithm](#algorithm)
      - [Time Complexity](#time-complexity)
      - [Space Complexity](#space-complexity)
      - [Advantages](#advantages)
      - [Disadvantages](#disadvantages)



# Different types of the recursion
* Direct Recursion.
* Indirect Recursion.
- [Tail Recursion](#tail-recursion)
  - [Algorithm](#tail-recursion)
  - [Properties](#tail-recursion)
  - [Advantages](#tail-recursion)
  - [Disadvantages](#tail-recursion)

  
* No Tail/ Head Recursion.
* Linear recursion.
- [Tree Recursion](#tree-recursion)
  - [Algorithm](#algorithm)
  - [Properties](#properties)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantages)

# Recursion


- The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. 
- Using recursive algorithm, certain problems can be solved quite easily.
- Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.

## Different types of the recursion
- Direct Recursion.
- Indirect Recursion.
- Tail Recursion.
- No Tail/ Head Recursion.
- Linear recursion.


## Tree Recursion

- There are some problems for which we haven't explicitly described a recursive pattern for yet. Consider the following problem:
- I want to go up a flight of stairs that has n steps. I can either take 1 or 2 steps each time. How many different ways can I go up this flight of stairs?

- For example, in the case where n is 5, there are 8 possible ways:

```
1 1 1 1 1
2 1 1 1
1 2 1 1
1 1 2 1
1 1 1 2
1 2 2
2 1 2
2 2 1
```

- In order to solve this problem, we have to introduce a pattern called Tree Recursion. Tree Recursion is just a phrase to describe when you make a recursive call more than once in your recursive case. Why would we need to do this here? Consider one solution to the above problem:

![image](https://user-images.githubusercontent.com/100334178/165895477-0529fa51-0e9e-42ca-812f-0a4198877e63.png)


### Algorithm

![image](https://user-images.githubusercontent.com/100334178/165895307-45a41ced-b354-4c81-b3f5-595bd1dc73f1.png)

- we call the function fib(4) which generates two more calls fib(3) and fib(2).
- fib(2) makes a call for fib(1). 
- BASE CASE: fib(0) which falls under our base case the sum of their returned value (1) is returned to parent fib(2). 
- Similarly, for fib(3) it makes a call for fib(2) and fib(1).
- fib(1) falls under base case fib(2) follows the same procedure the sum (2) is returned to fib(3). 
- At last, the sum of fib(2) and fib(3) is returned to the main parent call fib(4) giving 3 as our output.
 
### Time Complexity
```
- For Tree Recursion: O(2^n) 
```

### Space Complexity 
```
For Tree Recursion: O(n)
```

### Advantages

- Some problems are more easily solved by thinking tree recursively. Try writing count-change using for loops in another language.
- Some problems are intractably hard, meaning the fastest known algorithms we have for them are still exponential in runtime.
- Turns out we can optimize tree recursive procedures without changing their shape

### Disadvantages

- As recursion uses stack, for large numbers, memory may become full due to stack full



# Tail Recursion
* Tail Recursion
 If a recursive function calling itself and that recursive call is the last statement in the function then it’s known as Tail Recursion. After that call the recursive function performs nothing. The function has to process or perform any operation at the time of calling and it does nothing at returning time.

## Algorithm
 Let’s understand the example by tracing tree of recursive function. That is how the calls are made and how the outputs are produced.
 ![image](https://user-images.githubusercontent.com/100334178/166622562-760c951c-aa00-4fe0-a107-0563aa98d223.png)
The tail recursive functions considered better than non tail recursive functions as tail-recursion can be optimized by the compiler. Compilers usually execute recursive procedures by using a stack. This stack consists of all the pertinent information, including the parameter values, for each recursive call. When a procedure is called, its information is pushed onto a stack, and when the function terminates the information is popped out of the stack. Thus for the non-tail-recursive functions, the stack depth (maximum amount of stack space used at any time during compilation) is more. The idea used by compilers to optimize tail-recursive functions is simple, since the recursive call is the last statement, there is nothing left to do in the current function, so saving the current function’s stack frame is of no use.

## Properties
Time Complexity For Tail Recursion : O(n) 
Space Complexity For Tail Recursion : O(n)

## Advantages
Advantage of using tail-recursion := so that the compiler optimize the code and convert it to a non-recursive code. Advantage of non-recursive code over recursive one := the non-recursive code requires less memory to execute than a recursive one. This is because of idle stack frames that the recursion consumes

## Disadvantages
 - it doesn't save a lot of run time.
 - As recursion uses stack, for large numbers, memory may become full due to stack full

