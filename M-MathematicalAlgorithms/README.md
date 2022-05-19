<!-- Table of content -->
# Table of content:
-[Sieve Of Eratosthenes](#sieve-of-eratosthenes)

 -[Armstrong Number](#armstrong-number)

 -[Krishnamurthy Number](#armstrong-number)

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
  - [Armstrong Number Defination](#armstrong-number-defination)
  - [Algorithm of armstrong number](#algorithm-of-armstrong-number)
  - [Example](#example)
  - [Time_complexity](#time_complexity)

### Armstrong number Defination:

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




# Krishnamurthy number:
  - [Krishnamurthy Number](#Krishnamurthy-number)
  - [Algorithm of Krishnamurthy number](#algorithm-of-Krishnamurthy-number)
  - [Example of Krishnamurthy number](#example-of-Krishnamurthy-number)
  - [Time_complexity_Krishnamurthy_number](#Time_complexity_Krishnamurthy_number)

### Krishnamurthy number:

A Krishnamurthy number is a number whose sum of the factorial of digits is equal to the number itself.


### Algorithm of Krishnamurthy number:

1. Take the input from user.
2. Calculate the factorial of each digit of the input.
3. Sum up all the factorials we calculated in step2.
4. Check if (sum_of_factorials == input number).
5. If statement 4 is true then its a Krishnamurthy number.
6. Id statement 4 is false then its not a Krishnamurthy number.

### Example of Krishnamurthy number:

145 is a Krishnamurthy number because,

sum of factorial of each digits 
= 1! + 4! + 5!
= 1 + 24 + 120 
= 145


Example 1:
![image](<img width="880" alt="Screenshot 2022-05-19 at 6 05 07 PM" src="https://user-images.githubusercontent.com/71934168/169302431-8a7b2e54-c60d-44fc-8f2c-756463e98856.png">)

Example 2:
![image](<img width="880" alt="Screenshot 2022-05-19 at 6 05 28 PM" src="https://user-images.githubusercontent.com/71934168/169302496-12e906fa-3409-443f-beab-f92dc0b3c902.png">
)


### Time_complexity_Krishnamurthy_number:
Time complexity of armstrong number is 1.
