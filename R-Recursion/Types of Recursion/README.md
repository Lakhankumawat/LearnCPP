# Recursion

- The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. Using recursive algorithm, certain problems can be solved quite easily. Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.

# Different types of the recursion
* Direct Recursion.
* Indirect Recursion.
* Tail Recursion.
- [Head Recursion](#head-recursion)
  - [Algorithm](#head-recursion)
  - [Properties](#head-recursion)
  - [Advantages](#head-recursion)
  - [Disadvantages](#head-recursion)
* Linear recursion.
- [Tree Recursion](#tree-recursion)
  - [Algorithm](#algorithm)
  - [Properties](#properties)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantages)


# Tree Recursion


There are some problems for which we haven't explicitly described a recursive pattern for yet. Consider the following problem:

I want to go up a flight of stairs that has n steps. I can either take 1 or 2 steps each time. How many different ways can I go up this flight of stairs?

For example, in the case where n is 5, there are 8 possible ways:

1 1 1 1 1
2 1 1 1
1 2 1 1
1 1 2 1
1 1 1 2
1 2 2
2 1 2
2 2 1

 In order to solve this problem, we have to introduce a pattern called Tree Recursion. Tree Recursion is just a phrase to describe when you make a recursive call more than once in your recursive case. Why would we need to do this here? Consider one solution to the above problem:

![image](https://user-images.githubusercontent.com/100334178/165895477-0529fa51-0e9e-42ca-812f-0a4198877e63.png)


## Algorithm
![image](https://user-images.githubusercontent.com/100334178/165895307-45a41ced-b354-4c81-b3f5-595bd1dc73f1.png)

we call the function fib(4) which generates two more calls fib(3) and fib(2) , fib(2) makes a call for fib(1), and fib(0) which falls under our base case the sum of their returned value (1) is returned to parent fib(2). Similarly, for fib(3) it makes a call for fib(2) and fib(1), fib(1) falls under base case fib(2) follows the same procedure the sum (2) is returned to fib(3). At last, the sum of fib(2) and fib(3) is returned to the main parent call fib(4) giving 3 as our output.
 
## Properties
### Time Complexity For Tree Recursion: O(2^n) 
### Space Complexity For Tree Recursion: O(n)

### Advantages
* Some problems are more easily solved by thinking tree recursively. Try writing count-change using for loops in another language.
* Some problems are intractably hard, meaning the fastest known algorithms we have for them are still exponential in runtime.
* Turns out we can optimize tree recursive procedures without changing their shape

### Disadvantages
- As recursion uses stack, for large numbers, memory may become full due to stack full


# Head Recursion
 If a recursive function calling itself and that recursive call is the first statement in the function then it’s known as Head Recursion. There’s no statement, no operation before the call. The function doesn’t have to process or perform any operation at the time of calling and all operations are done at returning time.

Let’s understand the example by tracing tree of recursive function. That is how the calls are made and how the outputs are produced.
![image](https://user-images.githubusercontent.com/100334178/166974790-912ef94f-0e4a-4730-a374-25cf4dd146da.png)

*  If there is something before the recursive call then it is not a head recursion. If something is there before the function call, it is just a recursion. 


## Algorithm
we pass n=5 in the function fun, each time call for function with value n-1 without printing it at first. As a result, fun(1) will be the first to execute completely and 1 is printed first. The function calls terminate when n=0, this is the Base Case of our Recursive function. We can see the call is not the last step in the function. The program above demonstrates Given a Number N Print 1 to N without Loop.
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
