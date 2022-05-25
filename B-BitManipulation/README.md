# Table of content
- [Subsets Generation using Bit Masking](#subsets-generation-using-bit-masking)
- [Count Set Bits](#count-set-bits)
- [Maximize Expression](#maximize-expression)

## Subsets Generation using Bit Masking
Algorithm that uses bit masking to generate all possible subsets from a given array with a chosen data type.<br>

![image](https://user-images.githubusercontent.com/29145628/168311842-09469392-c4b9-4472-a03b-24a388a9ecf6.png)

### Algorithm
<pre>
1) Template is used to give the flexibility of chooseing the data type.
2) Create 2D vector of size (1<<(array size)) = 2^(array size)
3) Loop on all masks of size (2^(array size))
4) In each mask iteration loop on the given array
5) if((mask >> i) & 1) is the i-th bit of this mask 1?
    true: push in result vector of mask as index the array element.
    false: continue
</pre>

### Properties

- Time Complexity : O(N * 2^N)
- Space Space : O(N * N)

### Advantages

- Trivial to iterate over all possible subsets of N-element, as a N-bit value represents a subset.

### Disadvantage

- Problem must have small constraints as Bitmasking takes up to exponential time.


# Count Set Bits

## Problem Statement 
Given a positive integer N, print count of set bits in it. Set Bits are the no. of bits that are 1.

## Examples
Example 1 : Input : N = 6

            Output : 2

Example 2 :  Input : N = 8

             Output : 1
             
 ![image](https://user-images.githubusercontent.com/94545831/169095943-17f56cab-2bea-4ce6-bf8a-cbbfb5abfd9c.png)

            
## Algorithm
   - This algorithm is of fast approach as mentioned in code.
- Given a number N.
- Run the while loop till number is greater than 0.
- Do Bitwise AND operation of that number to its preceding number.
- Assign the result to that original number.
- Increment the counter by 1.
- Return the counter.

## Time Complexity and Space Complexity
Time Complexity : O(n log n)

Space Complexity : O(1)

# Maximize Expression

## Problem Statement 
Given two positive integers X and Y. Let’s define W such that Y AND W = W. The task is to maximize the expression X XOR Y.

## Examples
Example 1 : Input: X = 11 Y = 4
            Output: 15 

Example 2 :  Input: X = 9 and Y = 13
             Output: 13
             
<img src="https://user-images.githubusercontent.com/98539013/170197593-162feef0-f03d-47e3-bf26-678cdda3a72e.png" width="400" height="300" />
            
## Algorithm
- Take the two inputs X and Y, pass through the function (Maximize Expression) to maximize the expression.
- We initialize our result with A.
- Next we will consider the ith bit of W to be 1.
- Next step will invlove calculating the value of (Y and bitofW).
- We check if the bitofW satifies the expression- (Y and W=0).
- Finally we check if bitofW can maximize (X xor W).
- And thus, we return our ans.

## Time Complexity and Space Complexity
Time Complexity : O(MAX)

Space Complexity : O(1)
