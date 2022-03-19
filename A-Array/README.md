main
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

# Table of contents:
- [Trace and Normal of Matrix](trace-and-normal-of-matrix)
- [Sort an Array of 0s, 1s and 2s](sort-an-array-of-0s-1s-and-2s)
- [Prefix Sum](#prefix-sum)

# Trace and Normal of Matrix
  - [Trace](#trace)
  - [Normal](#normal)
  - [Properties_of_trace_matrix](#properties-of-trace-matrix)
  - [Example](#example)
  - [Algorithim](#algorithim)
  - [Time complexity](#time-complexity)

## Trace:

The trace of a matrix A, defined by tr(A), is the sum of the diagonal elements of a matrix. Trace of a matrix is only possible for square matrix.

## Normal:

The normal of matrix is the sum of all the elements of a matrix and then the square root of sum.

## Properties of trace matrix:
```
 --> tr(A + B) = tr(A) +tr(B)
 --> tr(cA) = ctr(A)  ** c represents scalars
 --> tr(A) = tr(A^T)  ** T means transpose of matrix 
```
## Example: 

![image](https://user-images.githubusercontent.com/100208233/158046978-b535dc41-9ad6-4d5b-ad27-0580fa836415.png)

### Trace:

we have taken following as the elements of a matrix 
2 3 5
7 4 5
8 5 4

we have to add all the elements of the matrix and store it in sum variable,sum = 2+3+5+7+4+5+8+5+4 then we will find the square root of sum we get 6.55
so, normal of matrix = 6.55

### Normal:

Now we will first check the conditions for trace of matrix (i.e. row==column) then we will add all the diagonal elements 
trace = 2+4+4  so, trace of matrix = 10

## Algorithm:
```
1. Enter the order of a matrix (eg: 3X3 or 2X2 etc...)
2. Using loop enter the elements of a matrix .
3. Printing the elements of the matrix .
4. Finding the sum of all the elements of the matrix .
5. Then the square root of the sum using sqrt() to find the normal of the matrix and store it in variable normal.
6. Using the condition row == column we can find the sum of diagonal elements of a matrix , value of sum will be store in
 variable trace .
7. Print the value of normal and trace of a matrix .
```
## Time complexity:
```
Time complexity of trace of a matrix is n^2.
Time complexity of normal of a matrix is n^2.
```



# Sort an Array of 0s, 1s and 2s

    - [1. Sort an Array of 0s, 1s and 2s](#1-sort-an-array-of-0s-1s-and-2s)
    - [Dutch National Flag Algorithm](#dutch-national-flag-algorithm)
    - [Properties](#properties)
    - [Sample Output](#sample-output)
    


## [Sort an Array of 0s, 1s and 2s](https://github.com/Lakhankumawat/LearnCPP/blob/main/A-Array/Sort_0_1_2.cpp)
main


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
 main
**Time Complexity: O(n^3) \
Space Complexity: O(1)** 

 main


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

- For More Reference Please Check Out -> 
[Geeks For Geeks](https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/)


# Prefix Sum

Given an array of N integers. Given Q queries and in each query given L and R print sum of array elements from index L to R (both inclusive)

### Naive Approach
Use a loop to calculate the sum of numbers from l to r for each query.

Time Complexity: `O(N) + O(Q*N) = 10^ 10`   
Space Complexity: `O(1)`

### Optimial Approach


Use prefix sum , a pre-computation technique , to calculate the sum .

We declare a prefix[] array which stores the sum of numbers from 1 to ith index.
prefix[i] --->  Stores the sum of numbers from 1 to ith index

So, to calculate the sum of numbers from l to r , we deduce a formula:

prefix[r] ----> Stores sum of numbers from 1 to rth index
prefix[l-1] ----> Stores sum of numbers from 1 to (l-1)th index

So, to output the sum of numbers from l to r , we use this:   
prefix[r]-prefix[l-1]        (O(1) time complexity)

 Time Complexity:  `O(N) + O(N) + O(Q) =  10^5 `
 Space Complexity: `O(N)  + O(N) (Using prefix array)`

 main
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


main
