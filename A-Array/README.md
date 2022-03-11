## Table of content:
- [Problem Statement](https://github.com/MRK04/LearnCPP/edit/main/A-Array/README.md#problem-statement)
- [Example](https://github.com/MRK04/LearnCPP/edit/main/A-Array/README.md#example)
- [Differnt Approches](https://github.com/MRK04/LearnCPP/edit/main/A-Array/README.md#differnt-approches)
  - [Brute force Approach (simple)](https://github.com/MRK04/LearnCPP/edit/main/A-Array/README.md#brute-force-approach-simple)
  - [Cumulative Sum Approach](https://github.com/MRK04/LearnCPP/edit/main/A-Array/README.md#cumulative-sum-approach)
  - [Efficient Approach: Kadane’s Algorithm](https://github.com/MRK04/LearnCPP/edit/main/A-Array/README.md#efficient-approach-kadanes-algorithm)

## Problem Statement:
Given an array of integers, the task is to find the maximum subarray sum possible of all the non-empty subarrays. \
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/kadane-Algorithm.png) \

## Example:
**Input:** [-3, -4, 5, -1, 2, -4, 6, -1] \
**Output:** 8 \
**Explanation:** Subarray [5, -1, 2, -4, 6] is the max sum contiguous subarray with sum 8. 

**Input:** [-2, 3, -1, 2] \
**Output:** 4 \
**Explanation:** Subarray [3, -1, 2] is the max sum contiguous subarray with sum 4. 

## Differnt Approches:
We would be solving the problem by following approaches –
1. Brute force approach
2. Cumulative sum approach
3. Efficient Approach: Kadane’s Algorithm

## Brute force Approach (simple)
The simple approach to solve this problem is to run three for loops and For each subarray arr[i..j], calculate its sum. Update maxSum if last calculated sum is smaller than the current sum. \
**Time Complexity: O(n^3) \
Space Complexity: O(1)**

## Cumulative Sum Approach:
For each subarray arr[i..j], calculate its sum. Using prefix sum can
reduce time to calculate the sum of arr[i..j] to O(1) \
**Time Complexity: O(n^2) \
Space Complexity: O(n)**

## Efficient Approach: Kadane’s Algorithm
Kadane’s Algorithm is an iterative dynamic programming algorithm. It calculates the maximum sum subarray ending at a particular position by using the maximum sum subarray ending at the previous position. Basic logic is to start taking the sum of the array, as soon as it gets negative, discard the current subarray, and start a new sum. Follow the below steps to solve the problem. 
  - Define two-variable currsum which stores maximum sum ending here and maxSum which stores maximum sum so far. 
  - Initialize currsum with 0 and maxSum with INT_MIN. 
  - Now, iterate over the array and add the value of the current element to currsum and check 
    - If currSum is less than zero, make currSum equal to zero. 
  - Update maxSum with the maximum value out of maxSum and currsum 
  - Finally, print the value of maxSum. 
  
**Time complexity: O(n),** Where n is the size of the array. \
**Space complexity: O(1)**
