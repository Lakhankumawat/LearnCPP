
# Factorial of large numbers

## Definition of factorial
  ` N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1`
    
    For Example:
    4!= 4*3*2*1 = 24

## Approach to find factorial of large numbers
 ### Approach
  The idea here is that we multiply according to the old school mathematics i.e we one by one multiply number x with every digit of res array.

The digits are multiplied from rightmost digit to leftmost digit, as the digits are stored in reverse order.

- initially the carry is 0.
- We need to multiply each digit of array with x therefore, for every i = 0 to size – 1 (i being the index of each digit),
- we first store the value of ```res[i] * x + carry``` in product variable and then store the last digit of product in res[i] and the remaining digits in carry variable.(similar to what we do in old school mathematics).

  Here we start from i=0 as the digits are placed in reverse order.
- Finally we insert the carry at the end of the **res** array and update the size variable.

## Algorithm:
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
