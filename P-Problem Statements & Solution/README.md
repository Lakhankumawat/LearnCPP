## Problem Statements with Solutions ✨

## [Trapping Water Problem](https://github.com/shubhamlakheraa/LearnCPP/blob/trapping_water/P-Problem%20Statements%20%26%20Solution/3-Level%203/trapping_water_problem.cpp)


## Insight

An element of the array can store water if there are higher bars on the left and right. The amount of water to be stored in every element can be found out by finding the heights of bars on the left and right sides. The idea is to compute the amount of water that can be stored in every element of the array. 

Algorithm: 

Create two arrays left and right of size n. create a variable max_ = INT_MIN.
Run one loop from start to end. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign left[i] = max_
Update max_ = INT_MIN.
Run another loop from end to start. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign right[i] = max_
Traverse the array from start to end.
The amount of water that will be stored in this column is min(a,b) – array[i],(where a = left[i] and b = right[i]) add this value to total amount of water stored
Print the total amount of water stored.

Space Optimization for the Solution: 

Instead of maintaining two arrays of size n for storing the left and a right max of each element, maintain two variables to store the maximum till that point. Since water trapped at any element = min(max_left, max_right) – arr[i]. Calculate water trapped on smaller elements out of A[lo] and A[hi] first and move the pointers till lo doesn’t cross hi.

## Example 1


Input: arr[]   = {2, 0, 2}
Output: 2
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200429012104/Untitled-Diagram711.png" width="300" />

We can trap 2 units of water in the middle gap

## Example 2

Input: arr[]   = {3, 0, 2, 0, 4}
Output: 7

We can trap "3 units" of water between 3 and 2,
"1 unit" on top of bar 2 and "3 units" between 2 
and 4.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200429012307/Untitled-Diagram811.png" width="300" />