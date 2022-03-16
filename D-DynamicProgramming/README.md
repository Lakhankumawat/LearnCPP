
# Table of content
- [Dynamic Programming](#dynamic-programming)
- [Equal Sum Partition Problem](#equal-sum-partition-problem)
- [Trapping Rain Water Problem](#trapping-rain-water-problem)
- [Egg Dropping Puzzle](#egg-dropping-puzzle)


<!-- Table of content -->
# Dynamic Programming
  - [Recursive vs Dynamic Programming Approach](#recursive-vs-dynamic-programming-approach)
  - [Properties](#properties)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantage)
  - [Problems](#problems)

Dynamic Programming is mainly an optimization over simple recursion.
Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming.
The basic idea is to simply store the results of  the subproblems, so that we do not have to compute it again and again them when needed later. 
This simple optimization reduces time complexities from exponential to polynomial. 


### Recursive vs Dynamic Programming Approach :

#### Recursive:
```
int fibo(n)
  if n<=1
    return n;
  else
    fibo(n-1) + fibo(n-2);
```


#### Dynamic Programming:
```
f[0]=0;
f[1]=1;

for i=2 to n
  f[i]=f[i-1]+f[i-2];

return f[n];
```

### Properties

- Overlapping Subproblems
- Optimal Substructure

### Advantages

- As it is a recursive programming technique, it reduces the line code.
- One of the major advantages of using dynamic programming is it speeds up the processing as we use previously calculated references.

### Disadvantage

- It takes a lot of memory to store the calculated result of every subproblem without ensuring if the stored value will be utilized or not.
- In DP, functions are called recursively. Stack memory keeps increasing.

### Problems
 ```
 Given an array and a sum. Find if there is a subsequence present in the array with the given sum or not.
 ```
 ```
 Solution Link: 
 ```
---

# Equal Sum Partition Problem

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
- [Complexity](#complexity)


# Problem Statement

Given an array you have to output true or false depending on whether the array can be divided into two subsets such that the sum of both the subsets is equal. 

        > Note this question is a variation of 01 Knapsack problem

## Examples
```
Input: arr[] = {1, 5, 11, 5}
Output: true 
The array can be partitioned as {1, 5, 5} and {11}

Input: arr[] = {1, 5, 3}
Output: false 
The array cannot be partitioned into equal sum sets.

```
# Explanation

- Consider you are given an array.

- Let's say the array is divided into two subsets P1 and P2 and sum of P1 is S1 and P2 is S2.

- Now the questions says that sum of both the subsets must be same i.e S1=S2=S.

- This means the sum of the original array should be S+S=2S (Even as the number is 2*Sum).
This implies that we can get two such subsets when the sum of the original given array is Even.

    - In example arr[]= {1,5,11,5}
    Sum of array is 1+5+11+5=22 which is even. 

    - In example arr[]= {1,5,3}
    Sum of array is 1+5+3=9 which is odd and an odd number can never be divided into two equal parts.

     > Here you have to divide the number as int so you cannot divide the number as 11.5 and 11.5

- So in the question we can first calculate the sum of the array and ***if(sum%2!=0)*** (i.e sum=odd) we can return false

 ``` C++
    int sum=0;
    for(int i=0;i<size;i++)
        sum=sum+arr[i];

    if(sum%2!=0)
         return false;

 ```

- Now if the sum is even then 
we need to find one subset whose sum is S/2 because if we can find one subset with sum =S/2 then there will always be another subset with sum=S/2 as the sum of whole array is S.

So we call the subsetSum function.

``` C++
    input:arr[i]
      int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];

    if(sum%2!=0)
         return false;

    else if (sum%2==0)
        return subsetSum(arr,sum/2,n);

```
- In subsetSum function the problem can be solved using dynamic programming when the sum of the elements is not too big. We can create a 2D array t[][] of size (n+1)*(sum/2 + 1). And we can construct the solution in a bottom-up manner such that every filled entry has the following property  
```
t[i][j] = true if a subset of {arr[0], arr[1], ..arr[j-1]} has sum equal to i, otherwise false

```

## Following diagram shows the values in the partition table.  

![This is dp table](https://media.geeksforgeeks.org/wp-content/uploads/dynamicprogramming.jpg)

# Complexity
```
Time Complexity: O(sum*n) 
Auxiliary Space: O(sum*n) 
```

# [Trapping Rain Water Problem](https://leetcode.com/problems/trapping-rain-water/)

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
- [Complexity](#complexity)

### Problem-Statement

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

### Examples

Input: arr[]   = {2, 0, 2}
Output: 2

We can trap 2 units of water in the middle gap

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200429012104/Untitled-Diagram711.png" width="300" />



Input: arr[]   = {3, 0, 2, 0, 4}
Output: 7

We can trap "3 units" of water between 3 and 2,
"1 unit" on top of bar 2 and "3 units" between 2 
and 4.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200429012307/Untitled-Diagram811.png" width="300" />

### Explanation

An element of the array can store water if there are higher bars on the left and right. The amount of water to be stored in every element can be found out by finding the heights of bars on the left and right sides. The idea is to compute the amount of water that can be stored in every element of the array. 

- Algorithm(Pseudo Code): 

  - Create two arrays left and right of size n. create a variable max_ = INT_MIN.
  - Run one loop from start to end. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign left[i] = max_
  - Update max_ = INT_MIN.
  - Run another loop from end to start. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign right[i] = max_
  - Traverse the array from start to end.
  - The amount of water that will be stored in this column is min(a,b) – array[i],(where a = left[i] and b = right[i]) add this value to total     amount of water stored
  - Print the total amount of water stored.

- Space Optimization for the Solution: 

Instead of maintaining two arrays of size n for storing the left and a right max of each element, maintain two variables to store the maximum till that point. Since water trapped at any element = min(max_left, max_right) – arr[i]. Calculate water trapped on smaller elements out of A[lo] and A[hi] first and move the pointers till lo doesn’t cross hi.

### Complexity
```
Time Complexity : O(n)
Space Complexity : O(1)
```


## EGG DROPPING PUZZLE

### Problem Statement
You are given N identical eggs and you have access to a K-floored building from 1 to K.

There exists a floor f where 0 <= f <= K such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break. There are few rules given below. 

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the eggs breaks at a certain floor, it will break at any floor above.
Return the minimum number of moves that you need to determine with certainty what the value of f is.
For more description on this problem see [Link](https://en.wikipedia.org/wiki/Dynamic_programming#Egg_dropping_puzzle)

##### Example 1:
Input:
N = 1, K = 2
Output: 2
Explanation: 
1. Drop the egg from floor 1. If it 
   breaks, we know that f = 0.
2. Otherwise, drop the egg from floor 2.
   If it breaks, we know that f = 1.
3. If it does not break, then we know f = 2.
4. Hence, we need at minimum 2 moves to
   determine with certainty what the value of f is.

##### Example 2:

Input:
N = 2, K = 10
Output: 4

Method : Dynamic Programming.
The approach will be to make a table which will store the results of sub-problems so that to solve a sub-problem, it would only require a look-up from the table which will take constant time, which took exponential time with recursion.
Formally for filling DP[i][j] state where 'i' is the number of eggs and 'j' is the number of floors: 
 
We have to traverse for each floor 'x' from '1' to 'j' and find minimum of:
(1 + max( DP[i-1][j-1], DP[i][j-x] )).

This simulation will make things clear: 
i => Number of eggs 
j => Number of floors 
Look up find maximum 
Lets fill the table for the following case: 
Floors = '4' 
Eggs = '2'
1 2 3 4
1 2 3 4 => 1 
1 2 2 3 => 2 
For 'egg-1' each case is the base case so the 
number of attempts is equal to floor number.
For 'egg-2' it will take '1' attempt for 1st 
floor which is base case.
For floor-2 => 
Taking 1st floor 1 + max(0, DP[1][1]) 
Taking 2nd floor 1 + max(DP[1][1], 0) 
DP[2][2] = min(1 + max(0, DP[1][1]), 1 + max(DP[1][1], 0))
For floor-3 => 
Taking 1st floor 1 + max(0, DP[2][2]) 
Taking 2nd floor 1 + max(DP[1][1], DP[2][1]) 
Taking 3rd floor 1 + max(0, DP[2][2]) 
DP[2][3]= min('all three floors') = 2
For floor-4 => 
Taking 1st floor 1 + max(0, DP[2][3]) 
Taking 2nd floor 1 + max(DP[1][1], DP[2][2]) 
Taking 3rd floor 1 + max(DP[1][2], DP[2][1]) 
Taking 4th floor 1 + max(0, DP[2][3]) 
DP[2][4]= min('all four floors') = 3 
 
