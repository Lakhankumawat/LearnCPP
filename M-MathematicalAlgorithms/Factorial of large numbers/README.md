  # Table of contents :
  - [Breif Explanation](#definition-of-factorial)
  - [Approach](#approach-to-find-factorial-of-large-numbers)
  - [Algorithm](#algorithm)
  - [Practice Problem](#practice-problem)
  - [Time and Space Complexity](#time-and-space-complexity)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantages)

# Factorial of large numbers
## Definition of factorial
  ` N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1`
    
    For Example:
    4!= 4*3*2*1 = 24  
 **Why we use array ?**
 
  In CPP 64 bit compilers, the size of an unsigned long long is 8 bytes i.e 64bits. 8 bytes can hold a positive number in range 0 to 18,446,744,073,709,551,615.

20! (20 factorial) = 2,432,902,008,176,640,000

21! (21 factorial) = 51,090,942,171,709,440,000

**20! < range of (unsigned long long) < 21!**

Thus factorials beyond 20! cannot fit in the data type unsigned long long.

The idea behind this algorithm is to calculate and store the factorial in an integer array. Since calculating a factorial of a large number ‘N’ requires N-1 multiplications, we carry out all these multiplications using the same integer array that would store the end result i.e N!.

## Approach to find factorial of large numbers
 ### Approach
  The idea here is that we multiply according to the old school mathematics i.e we one by one multiply number x with every digit of res array.

The digits are multiplied from rightmost digit to leftmost digit, as the digits are stored in reverse order.

- initially the carry is 0.
- We need to multiply each digit of array with x therefore, for every i = 0 to size – 1 (i being the index of each digit),
- we first store the value of ```res[i] * x + carry``` in product variable and then store the last digit of product in res[i] and the remaining digits in carry variable.(similar to what we do in old school mathematics).

  Here we start from i=0 as the digits are placed in reverse order.
- Finally we insert the carry at the end of the **res** array and update the size variable.

<!-- <img src="https://www.algotree.org/images/Large_Factorial.svg" alt="drawing" width="800" /> -->
![](https://www.algotree.org/images/Large_Factorial.svg)

## Algorithm
  ```
  
   declare res array.
   initialize res array as 0
   initialize res[0]=1

   for i = 2 to n :
begin
   carry = 0
   for k=0 to size-1:
      product = res[k]*i+carry
      res[k] = product mod 10
      carry = product / 10
   
   while carry ≠ 0:
      insert (carry mod 10) at the end of res array
      carry = carry/10
end
```
## Practice Problem
- https://www.hackerrank.com/challenges/extra-long-factorials/problem?isFullScreen=true

## Time and Space Complexity
- Time Complexity: `O(n log n!)`
- Space complexity: `O(⌈log n!⌉)`

## Advantages
 - Used to find out factorial of large number.

 ## Disadvantages
 - Take lot of extra space.
