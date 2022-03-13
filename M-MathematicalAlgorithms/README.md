<!-- Table of content -->
# Table of content
1. [Sieve Of Eratosthenes](#sieve-of-eratosthenes)
  - [Algorithm](#algorithm)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantage)
  - [Problems](#problems)

2. [Perfect Number](#perfect-number)
  - [Algorithm](#Algorithm)
  - [Example](#Example)
  - [properties](#properties)


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

# Perfect Number:

 A perfect number is a positive integer that is equal to the sum of its positive divisors, 
excluding the number itself.

 ![image](https://user-images.githubusercontent.com/100208233/158046110-e5602331-b5ad-46ef-936d-aa95bab21330.png)

 ### Algorithm:

1. Enter the number.
2. finding the divisors of the number. 
3. adding the devisors in variable sum.
4. checking weather a number is a perfect number or not. 
5. printing the result.

### Example: 

 ![image](https://user-images.githubusercontent.com/100208233/158046167-33dbb048-640a-4911-a9fd-cb8703d999c5.png)

6 is a positive number that is completely divisible by 1, 2, and 3. 
We know that the number is also divisible by itself but we will not include it in the addition of divisors. 
When we add these divisors (1 + 2 + 3 = 6), it gives 6, which is equal to the number that we have chosen.
 So, we say that 6 is a perfect number.

### properties:

--> If 2k -1 is prime for k>1, then 2k-1(2k -1) is a perfect number.
--> A perfect number is called Ore Harmonic number if the harmonic mean of its divisor is an integer.