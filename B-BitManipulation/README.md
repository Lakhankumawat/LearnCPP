# Table of content
- [Subsets Generation using Bit Masking](#subsets-generation-using-bit-masking)
- [Count Set Bits](#count-set-bits)

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
Given a positive integer N, print count of set bits in it. 

## Examples
Example 1 : Input : N = 6

            Output : 2

Example 2 :  Input : N = 8

             Output : N = 1
             
 ![image](https://user-images.githubusercontent.com/94545831/169095943-17f56cab-2bea-4ce6-bf8a-cbbfb5abfd9c.png)

            
## Algorithm
- Given a number N.
- Run the loop till number is not 0.
- Do Bitwise AND operation of that number to its preceding number.
- Increment the counter by 1.
- Return the counter.

## Time Complexity and Space Complexity
Time Complexity : O(n log n)

Space Complexity : O(1)
