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
