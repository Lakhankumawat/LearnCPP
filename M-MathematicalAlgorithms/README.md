<!-- Table of content -->
# Table of content
- [Strong Number/Krishnamurty Number](#Strong-Number)
  - [About Strong Number](#what_is_strong_number)
  - [How to check if the number is strong or not](#How_to_check)
 
- [Sieve Of Eratosthenes](#sieve-of-eratosthenes)
  - [Algorithm](#algorithm)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantage)
  - [Problems](#problems) 
  

# About Strong Number :
Also known as Krishnamurti Number, is a number which was discovered by Dr. Jiddu Krishnamurty and Dr. Peterson. The uniqueness of the number is that the sum of the factorial of each digits is equal to the original number.

# How to check if number is Strong number or not?
Keep on taking the remainder of the number, using while loop, untill it reaches 0 or lesser, and keep on adding the sum of the factorials of the remainders obtained. If the sum is equal to the original number, then it is a strong number.

```

```

### example
- 145 , Here factorial of 1 + factorial of 4 (44) + factorial of 5 (120) = 145




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
