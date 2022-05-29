<!-- Table of content -->
# Table of content:
-[Sieve Of Eratosthenes](#sieve-of-eratosthenes)

 -[Armstrong Number](#armstrong-number)
 
 -[Bisection Method](#bisection-method)

#  Sieve Of Eratosthenes :
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

# Armstrong number:
  - [Armstrong Number](#armstrong-number)
  - [Algorithm of armstrong number](#algorithm-of-armstrong-number)
  - [Example](#example)
  - [Time_complexity](#time_complexity)

### Armstrong number:

An integer number is called Armstrong number if sum of the cubes of its digits is equal to the number itself.

![image](https://user-images.githubusercontent.com/100208233/161560743-43ad6e21-4183-4505-8868-8e0b44efbf42.png)

### Algorithm of armstrong number:

1. The number of digits in n is determined and found out.
2. The sum of digits of a number are found by performing n mod 10, where mod is called the remainder operation.
3. The individual digit is then raised to the power (number of digits) and stored.
4. The number is then divided by 10 in order to obtain the second digit.
5. All the above 3-steps numbered Steps 2, 3 and 4 are performed until the value of n is greater than 0.
6. When the n is less than 0, end the while loop.
7. Check the sum obtained or Armstrong value is the same as the original number
8. When yes, the number is labelled an Armstrong number

### Example:

371 is an armstrong number because:

371 =>
= 3*3*3 + 7*7*7 + 1*1*1
= 27 + 343 + 0
= 371

Example 1:
![image](https://user-images.githubusercontent.com/100208233/162582338-3a22a503-2afc-49c4-a957-fa553dd41b7e.png)

Example 2:
![image](https://user-images.githubusercontent.com/100208233/162582384-25ff197c-9f36-4758-b9e4-4828acd4cd14.png)


### Time_complexity:
Time complexity of armstrong number is n.





# Bisection Method :-
It is the binary search method used to find the roots of an equation in a given interval.
It is also called as the interval halving method.
The method is based on the Intermediate Value Theorem which states that if f(x) is a continuous function and there are two real numbers a and b such that f(a)*f(b) 0 and f(b) < 0), then it is guaranteed that it has at least one root between them.

### There are some conditions that are pre-assumed:-
1.	f(x) is a continuous function in interval [a, b]
2.	f(a) * f(b) < 0

### Procedure:-
1.	Find middle point c= (a + b)/2 .
2.	If f(c) == 0, then c is the root of the solution.
3.	Else f(c) is not equal to. 0
    If value f(a)*f(c) < 0 then root lies between a and c. So we check for a and c
    Else If f(b)*f(c) < 0 then root lies between b and c. So we check for  b and c.
    Else given function doesnt follow one of assumptions.
  
**Time Complexity**:- Depends upon The value of a function

 
