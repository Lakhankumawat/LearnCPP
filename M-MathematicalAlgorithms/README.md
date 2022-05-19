<!-- Table of content -->
# Table of content:
-[Sieve Of Eratosthenes](#sieve-of-eratosthenes)

 -[Armstrong Number](#armstrong-number)

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

# Niven/Harshad number:
  - [Niven/Harshad Number](#Niven-number)
  - [Algorithm of Niven/Harshad number](#Algorithm-of-Niven-number)
  - [Example of Niven number](#ExampleforNiven-number)
  - [Time_complexity](#Time_complexityNivenNumber)


## Niven/Harshad Number

A number is said to be a Niven number/Harshad number if the number is divisible by the sum of the digits of the number.

![Niven main](https://user-images.githubusercontent.com/84588360/169084304-b35ca37c-176c-45e0-bf8b-3afefcca6ecc.png)

# Niven-number

## Algorithm
- ***Step 1 :*** Declare a variable temp(to store the value of entered input) &
                 a variable sum(to store the sum of digits of the entered number)
- ***Step 2 :*** Initialize variable temp with value of entered input and sum=0
- ***Step 3 :*** Extract each digits from the input number and add each digit to sum
- ***Step 4 :*** If the input number is divisible by sum then that number is Niven/Harshad number 

# Algorithm-of-Niven-number

## Properties
- Time-complexity : O(n)
- Space-complexity : O(1)

#Time_complexityNivenNumber

## Examples
7, 10, 14, 17, 34 are some of the Niven numbers as :

- 126/(1+2+6) = 126/9 = 14

- 153/(1+5+3) = 153/9 = 17

- 408/(4+0+8) = 408/12 = 34

# ExampleforNiven-number

Example (i) ![niven exmpl 1](https://user-images.githubusercontent.com/84588360/169362417-920248e3-17f1-42f9-ab46-3ddb59bbc788.png)

Example (ii) ![niven example 2](https://user-images.githubusercontent.com/84588360/169362412-2d93f818-f00b-49e2-a38e-3fe8a4105393.png)