# Table of content

- [Recursion](#recursion)
  - [Different types of the recursion](#different-types-of-the-recursion)


# Recursion


- The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. 
- Using recursive algorithm, certain problems can be solved quite easily.
- Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.

## Different types of the recursion


* Direct Recursion.
* Indirect Recursion.
* Tail Recursion.
- [Head Recursion](#head-recursion)
  - [Algorithm](#head-recursion)
  - [Properties](#head-recursion)
  - [Advantages](#head-recursion)
  - [Disadvantages](#head-recursion)

* Direct Recursion.
- [Indirect Recursion](#indirect-recursion)
  - [Algorithm](#indirect-recursion)
  - [Properties](#indirect-recursion)
  - [Advantages](#indirect-recursion)
  - [Disadvantages](#indirect-recursion)
* Tail Recursion.
* Head Recursion.

* Linear recursion.
- [Tree Recursion](#tree-recursion)
  - [Algorithm](#algorithm)
  - [Properties](#properties)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantages)


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



# Head Recursion
 If a recursive function calling itself and that recursive call is the first statement in the function then it’s known as Head Recursion. There’s no statement, no operation before the call. The function doesn’t have to process or perform any operation at the time of calling and all operations are done at returning time.

Let’s understand the example by tracing tree of recursive function. That is how the calls are made and how the outputs are produced.
![image](https://user-images.githubusercontent.com/100334178/166974790-912ef94f-0e4a-4730-a374-25cf4dd146da.png)

*  If there is something before the recursive call then it is not a head recursion. If something is there before the function call, it is just a recursion. 


## Algorithm
- we pass n=5 in the function fun
-  each time call for function with value n-1 without printing it at first. 
-  As a result, fun(1) will be the first to execute completely and 1 is printed first. 
-  The function calls terminate when n=0,
-  _this is the Base Case of our Recursive function_
- We can see the call is not the last step in the function. The program above demonstrates Given a Number N Print 1 to N without Loop.
 ![image](https://user-images.githubusercontent.com/100334178/166975640-926924ba-2756-4666-add3-683bf93c56b2.png)

 
## properties
* Time Complexity For Head Recursion: O(n) 
* Space Complexity For Head Recursion: O(n)
 
## Advantages
* For a recursive function, you only need to define the base case and recursive case, so the code is simpler and shorter than an iterative code.
* Easy and understandable code.

## Disadvantages
* slower in terms of speed.
* It may require a lot of memory space to hold intermediate results on the system stacks.
Hard to analyze or understand the code.
* It is not more efficient in terms of space and time complexity.


# Indirect Recursion

 In this recursion, there may be more than one functions and they are calling one another in a circular manner.

int num()
{
	...
	...
	int sum();

}

int sum()
{
	...
	...
	int num();

}


* For indirect recursion, both the functions need to be declared before they are defined.

## Algorithm

* user input the value and that value will be given to fun(A) as input .
* Then under the fun(A) , fun(A) will call fun(B) with some modification.
* Then fun(B) will call fun(C) with some other modification.
* Then fun(C) again call fun(A) with some other modifications.

![image](https://user-images.githubusercontent.com/100334178/167283694-ce9a0db6-7856-4a47-a08c-93f713c976e2.png)


From the above diagram fun(A) is calling for fun(B), fun(B) is calling for fun(C) and fun(C) is calling for fun(A) and thus it makes a cycle.

Let’s understand the example by tracing tree of recursive function. That is how the calls are made and how the outputs are produced.
![image](https://user-images.githubusercontent.com/100334178/167283701-8fcbf238-ff9c-43d1-a596-0c2d0bde355d.png)

## Properties
* Time complexity of indirect recursion is O(2^n).
* Space complexity of indirect recursion is O(nm).

## Advantages
* For a recursive function, you only need to define the base case and recursive case, so the code is simpler and shorter than an iterative code.
* Some problems are inherently recursive, such as Graph and Tree Traversal.


## Disadvantages
* A recursive program has greater space requirements than an iterative program as each function call will remain in the stack until the base case is reached.
* It also has greater time requirements because each time the function is called, the stack grows and the final answer is returned when the stack is popped completely.
