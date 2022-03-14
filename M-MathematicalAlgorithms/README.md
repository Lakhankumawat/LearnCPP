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
