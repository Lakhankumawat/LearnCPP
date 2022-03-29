# Table of contents:
- [Maximum Sum of Subarray](#maximum-sum-of-subarray)
- [Trace and Normal of Matrix](trace-and-normal-of-matrix)
- [Sort an Array of 0s, 1s and 2s](sort-an-array-of-0s-1s-and-2s)
- [Prefix Sum](#prefix-sum)
- [First Negative Integer In Every K size Window](#first-negative-integer-in-every-k-size-window)

 
# Maximum Sum of Subarray:
- [Maximum Sum Subarray](#maximum-sum-subarray)
- [Example](#example)
- [Differnt Approches](#differnt-approches)
  - [Brute force Approach (simple)](#1-brute-force-approach-simple)
  - [Cumulative Sum Approach](#2-cumulative-sum-approach)
  - [Efficient Approach: Kadane’s Algorithm](#3-efficient-approach-kadanes-algorithm)

## [Maximum Sum Subarray:](https://github.com/MRK04/LearnCPP/blob/main/A-Array/MaximumSumSubarray.cpp)
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

**Time Complexity:** `O(n^3)`, Where n is the size of the array. \
**Space Complexity:** `O(1)`

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
**Time Complexity:** `O(n^2)`, Where n is the size of the array.\
**Space Complexity:** `O(n)`

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
**Time complexity:** `O(n)`, Where n is the size of the array. \
**Space complexity:** `O(1)` 

# Trace and Normal of Matrix
  - [Trace](#trace)
  - [Normal](#normal)
  - [Properties_of_trace_matrix](#properties-of-trace-matrix)
  - [Example](#example)
  - [Algorithim](#algorithm)
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

![Snap](https://user-images.githubusercontent.com/53018678/156426951-61050466-bf4a-4685-be42-e81a5cf623cb.png)


> Given an array consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
<hr>

### Dutch National Flag Algorithm
```
begin sortArray(array)
   int low = 0
   int mid = 0
   int high = array.size() - 1

   while(mid <= high)
      if (array[mid] == 0)
         swap(array[low], array[mid])
         low++
         mid++
      else if (array[mid] == 1)
         mid++
      else
         swap(array[mid], array[high])
         high--
      end if
   end while

   return array

end sortArray
```

### Properties
* Time Complexity: O(n)
* Space Complexity: O(1)
* In-Place: Yes
* Stable: Yes

### Sample Output
![Snap2](https://user-images.githubusercontent.com/53018678/156428828-324bda09-356d-47dc-bfaa-793bae0a3dff.png)

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




# First negative integer in every k size window:
- [Example](#few-examples)
- [Approach Used](#approach-used---sliding-window-approach)
- [Algorithm](#algorithm-4)
- [Time Complexity](#time-and-space-complexity)

## [First negative integer in every k size window:](https://github.com/arzitmahajan/LearnCPP/blob/new_branch/A-Array/FirstNegativeInEveryWindow.cpp)
Given an array and a positive integer k, find the first negative integer for each window(contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window. \
```

  Input : arr[] = {-8, 2, 3, -6, 10}, k = 2
  Output : -8 0 -6 -6
  First negative integer for each window of size k
  {-8, 2} = -8
  {2, 3} = 0 (does not contain a negative integer)
  {3, -6} = -6
  {-6, 10} = -6

  Input : arr[] = {12, -1, -7, 8, -15, 30, 16, 28} , k = 3
  Output : -1 -1 -7 -15 -15 0

```

## Few Examples:
|Sr. No.|              Input            |        Output          |                                  Explanation                                       |
|:----: | :----------------------------:|:----------------------:| :--------------------------------------------------------------------------------- |
|   1   | [-3, -4, 5, -1, 2, -4, 6] , 3 | [-3, -4, -1, -1, -4]   | [-3, -4, -1, -1, -4] are  the first negative  integer  of every window of size 3.  |
|   2   |         [-2, 3, -1, 2] , 2    |    [-2, -1, -1]        | [-2, -1, -1] are  the first negative  integer  of every window of size 2.          |
|   3   | [-5, 8, 9, -6, 10, -15, 3] , 3| [-5, -6 ,-6, -6, -15]  | [-5, -6 ,-6, -6, -15] are  the first negative  integer  of every window of size 3. |
|   4   |       [-4, -7, 1, 5,2] , 2    |   [-4, -7, 0, 0]       | [-4, -7, 0, 0] are  the first negative  integer  of every window of size 2.        |

## Approach Used -> Sliding Window Approach:
For every k size window store every element if negative in deque from rear end using for loop then check size of deque size if greater than 0 then then get the element from front and store it in vector. If deque size is 0 store 0 in vector. Move the window ahead if we have reached or passed the last element of the window.
 #### Algorithm:
  ```
    1. Initialize deque and vector.
    2. Use loop for starting window that is till k.
    3. Push back the index in deque if element is negative.
    4. Push back 0 if element is positive.
    5. Check the size of deque after execution of loop if size > 0 get the front element of deque(index) store the element at that index in vector.
    6. Else store 0 in vector.
    7. Use loop from k till last index of array.
    8. Check if deque is not empty  && loop variable - front element of deque is not greater than or equal to k.
    9. If step 8 is true pop the front element in deque.
    10.Repeat  steps 5,6 and 8, 9  till execution of loop

  ```

## Time and space complexity: 
```
 Time Complexity =  O(n-k), Where n is the size of the array and k is window size.
 Space complexity = O(n-k+1), size of vector returned. 

```





