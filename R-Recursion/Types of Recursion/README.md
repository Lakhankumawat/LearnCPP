# Table of content

- [Recursion](#recursion)
  - [Different types of the recursion](#different-types-of-the-recursion)


# Recursion


- The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function. 
- Using recursive algorithm, certain problems can be solved quite easily.
- Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.


## Different types of the recursion


- [Direct Recursion](#direct-recursion)
  - [Algorithm](#direct-recursion)
  - [Properties](#direct-recursion)
  - [Advantages](#direct-recursion)
  - [Disadvantages](#direct-recursion)


- [Head Recursion](#head-recursion)
  - [Algorithm](#head-recursion)
  - [Properties](#head-recursion)
  - [Advantages](#head-recursion)
  - [Disadvantages](#head-recursion)

- [Indirect Recursion](#indirect-recursion)
  - [Algorithm](#indirect-recursion)
  - [Properties](#indirect-recursion)
  - [Advantages](#indirect-recursion)
  - [Disadvantages](#indirect-recursion)
- [Tail Recursion](#tail-recursion)
  - [Algorithm](#tail-recursion)
  - [Properties](#tail-recursion)
  - [Advantages](#tail-recursion)
  - [Disadvantages](#tail-recursion)


- [Linear recursion](#linear-recursion)
  - [Algorithm](#linear-recursion)
  - [Properties](#linear-recursion)
  - [Advantages](#linear-recursion)
  - [Disadvantages](#linear-recursion)


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









# Direct Recursion

If a function calls itself, it’s known as direct recursion. This results in a one-step recursive call: the function makes a recursive call inside its own function body.

#### Structure of the direct recursion

fun()  
{  
// write some code  
fun();  
// some code  
}  

In the above structure of the direct recursion, the outer fun() function recursively calls the inner fun() function, and this type of recursion is called the direct recursion.

## Example

int testfunc(int num)
{
  if (num == 0)
    return 0;
  else
    return (testfunc(num - 1));
}

* First we pass the value in the testfunc function
* if value is equals to 0 we return 0 simply without doing any operation.
* else we have to call the same function with with decreasing value of num by 1
* This fuction will recursively calls itself until the value of num not reaches to 0.

Here, the function ‘testfunc’ calls itself for all positive values of num.

## Algorithm

*  only one function is called by itself.
* The direct recursion called by the same function
*  when function called next time, value of local variable will stored
*  it engaged memory location

![image](https://user-images.githubusercontent.com/100334178/168663839-3a11c6dc-f132-4ec2-a9fd-e16ec7951352.png)


## properties
* Time Complexity For Head Recursion: O(n) 
* Space Complexity For Head Recursion: O(n)


## Advantages 

* For a recursive function, you only need to define the base case and recursive case, so the code is simpler and shorter than an iterative code.
* Some problems are inherently recursive, such as Graph and Tree Traversal.

## Disadvantages 

* A recursive program has greater space requirements than an iterative program as each function call will remain in the stack until the base case is reached.
* It also has greater time requirements because each time the function is called, the stack grows and the final answer is returned when the stack is popped completely.

# Linear Recursion

A linear recursive function is a function that only makes a single call to itself each time the function runs (as opposed to one that would call itself multiple times during its execution). The factorial function is a good example of linear recursion.

Another example of a linear recursive function would be one to compute the square root of a number using Newton's method (assume EPSILON to be a very small number close to 0):


## Algorithm
   ![image](https://user-images.githubusercontent.com/100334178/168443835-9b4cc6fc-3ed8-410b-840c-7e3cecb1cdf5.png)

   
We begin by considering the factorial function, defined by


         n! =  n  * (n-1) * (n-2) .....3 * 2 * 1

There are many ways to compute factorials. One way is to make use of the observation that n! is equal to n times (n-1)! for any positive integer n:


        n! = n * [(n-1) * (n-2)....3 * 2 * 1] = n (n-1)

Thus, we can compute n! by computing (n-1)! and multiplying the result by n. If we add the stipulation that 1! is equal to 1, this observation translates directly into a procedure:

(define (factorial n)
  (if (= n 1)
      1
      (* n (factorial (- n 1)))))


## Properties
* Time complexity->O(n)
* Space complexity->O(n)


## Advantages
* For a recursive function, you only need to define the base case and recursive case, so the code is simpler and shorter than an iterative code.

## Disadvantages
* slower in terms of speed.
* It may require a lot of memory space to hold intermediate results on the system stacks.
Hard to analyze or understand the code.
* It is not more efficient in terms of space and time complexity.


