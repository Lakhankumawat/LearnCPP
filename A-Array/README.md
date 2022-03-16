## Table of content:
- [Maximum Sum of Subarray](#maximum-sum-of-subarray)
- [Example](https://github.com/MRK04/LearnCPP/new/main/A-Array#example)
- [Differnt Approches](https://github.com/MRK04/LearnCPP/new/main/A-Array#differnt-approches)
  - [Brute force Approach (simple)](https://github.com/MRK04/LearnCPP/new/main/A-Array#1-brute-force-approach-simple)
  - [Cumulative Sum Approach](https://github.com/MRK04/LearnCPP/new/main/A-Array#2-cumulative-sum-approach)
  - [Efficient Approach: Kadane’s Algorithm](https://github.com/MRK04/LearnCPP/new/main/A-Array#3-efficient-approach-kadanes-algorithm)


## Maximum Sum of Subarray:
Given an array of integers, the task is to find the maximum subarray sum possible of all the non-empty subarrays. \
![image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/kadane-Algorithm.png) 


## Example:
 
|Sr. No.|              Input            | Output|                                  Explanation                                       |
|:----: | :----------------------------:|:-----:| :--------------------------------------------------------------------------------- |
|   1   | [-3, -4, 5, -1, 2, -4, 6, -1] |   8   | The subarray [5, -1, 2, -4, 6] has the maximum sum among all subarrays with sum 8. |
|   2   |         [-2, 3, -1, 2]        |   4   | The subarray [3, -1, 2] has the maximum sum among all subarrays with sum 4.        |
|   3   |   [-5, 8, 9, -6, 10, -15, 3]  |   21  | The subarray [8, 9, -6, 10] has the maximum sum among all subarrays with sum 21.   |
|   4   |       [-4, -7, -1, 5,-2]      |   4   | The subarray [-1, 5] has the maximum sum among all subarrays with sum 4.           |


## Differnt Approches:
We would be solving the problem by following approaches –
1. Brute force approach
2. Cumulative sum approach
3. Efficient Approach: Kadane’s Algorithm


## 1. Brute force Approach (simple)
The simple approach to solve this problem is to run three for loops and For each subarray arr[i..j], calculate its sum. Update maxSum if last calculated sum is smaller than the current sum. 
  #### Algorithm:
  ```
  int maxSubarraySum1 ( int a [] , int n) 
  { 
    int maxSum = INT_MIN
    for(i = 0 to n-1) 
    { 
      for(j = i to n-1) 
      { 
        int sum = 0 
        for(k = i to j) 
          sum = sum + a[k] 
        Update maxSum if its smaller than sum with the maxSum value 
      } 
    } 
return maxSum
}

```
**Time Complexity: O(n^3) \
Space Complexity: O(1)** 


## 2. Cumulative Sum Approach:
For each subarray arr[i..j], calculate its sum. Using prefix sum can
reduce time to calculate the sum of arr[i..j] to O(1) 
#### Algorithm:
```
int maxSubarraySum2 ( int a [] , int n) 
{ 
  int currsum[n+1]
  Currsum[0] = 0
  int maxSum = INT_MIN
  for(i = 1 to n-1) 
  { 
	  cumsum[i] = cumsum[i - 1] + a[i];
  }
  for(i = 1 to n-1) 
  { 
    int sum = 0 
    for(j = 0 to i) 
      sum = currsum[i - currsum[j] 
      Update maxSum if its smaller than sum with the maxSum value 
  } 
return maxSum
} 

```
**Time Complexity: O(n^2) \
Space Complexity: O(n)**


## 3. Efficient Approach: Kadane’s Algorithm
Kadane’s Algorithm is an iterative dynamic programming algorithm. It calculates the maximum sum subarray ending at a particular position by using the maximum sum subarray ending at the previous position. Basic logic is to start taking the sum of the array, as soon as it gets negative, discard the current subarray, and start a new sum. 
  #### Algorithm:
  ```
  Initialize:
    currsum = 0
    maxSum = INT_MIN
    
Loop for each element of the array
  (a) currsum = currsum + a[i]
  (b) if(currsum  < 0)
            currsum = 0
	  Othewise maxSum = currsum
return max_so_far

```
**Time complexity: O(n),** Where n is the size of the array. \
**Space complexity: O(1)**
