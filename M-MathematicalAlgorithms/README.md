<!-- Table of content -->
# Table of content
- [Sieve Of Eratosthenes](#sieve-of-eratosthenes)
  - [Algorithm](#algorithm)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantage)
  - [Problems](#problems)

# Sieve Of Eratosthenes :
The sieve of Eratosthenes is an algorithm for finding all prime numbers up to any given limit. 
It does so by iteratively marking as composite (i.e., not prime) the multiples of each prime, starting with the first prime number, 2.

### Algorithm
```
- Create a boolean list of number from 0 to n and assign each of them with the value true
- Mark 0th and 1st index as false
- Start from the first prime number i.e. 2 and mark all the multiples of 2 as false
- Move to the next element. If it is marked as true, then mark all its multiples as false
- Do till you don't reach n
- Now the numbers which are marked as true will be the prime numbers from 0 to n.
```

### Advantages

- It reduces the time complexity of Finding prime numbers in a range.

### Disadvantage

- It takes up O(n) of extra space


### Problems
 ```
   Given a number n.
   Express it as a sum of two prime numbers if it is possible else print -1.

   Example 1: 
   n=24
   Output: 5 19


   Example 2: 
   n=1
   Output: -1 -1

   Example 3: 
   n=100
   Output: 3 97
 ```
 ```
```
//Time Complexity : O(n*log(log(n)))
//Space Complexity :O(n)
```
 
Solution Link: 


 ```
 
 
 //Bisection Method:-----
 
 
 
 It is the binary search method used to find the roots of an equation in a given interval.
i.e.  finding value of x for which f(x)=0.
It is also called as the interval halving method.
The method is based on the Intermediate Value Theorem which states that if f(x) is a continuous function and there are two real numbers a and b such that f(a)*f(b) 0 and f(b) < 0), then it is guaranteed that it has at least one root between them.


There are some conditions that are pre-assumed:
1.	f(x) is a continuous function in interval [a, b]
2.	f(a) * f(b) < 0

Procedure:
1.	Find middle point c= (a + b)/2 .
2.	If f(c) == 0, then c is the root of the solution.
3.	Else f(c) is not equal to. 0
If value f(a)*f(c) < 0 then root lies between a and c. So we check for a and c
Else If f(b)*f(c) < 0 then root lies between b and c. So we check for  b and c.
               Else given function doesn’t follow one of assumptions.

Time complexicity:
   Depends upon the value of a function.

