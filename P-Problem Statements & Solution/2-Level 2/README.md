# Aggressive Cows #

## Table of Contents:-
* [Problem Statement](#problem-statement)
* [Explanation of Problem Statement](#explanation-of-problem-statement-with-a-test-case)
* [Approach](#approach)
* [Algorithm](#algorithm)
* [Time Complexity](#time-complexity)

## Problem Statement
There is a new barn with N stalls and C number of cows. The stalls are located on a straight line with positions x1,x2,...,xN. We have to assign the cows to the stalls, is such that the minimum distance between any two of them is as large as possible. We have to find largest minimum distance.

### Explanation of Problem Statement with a test case
Let's say we have 5 stalls and 3 cows. The stalls are place as [1,2,4,8,9]. We will try to place 3 cows in stalls and find minimum distances from these configurations.

![image](https://user-images.githubusercontent.com/92020810/162578422-e2f52ce4-cecc-4253-9718-1aa3d205d6d6.png)
many such configurations are possible. For above shown configurations, maximum or largest minimum distance is 3. This is what we have to do. Hope you understand... else try out some more configurations on your own :)

### Approach
* We can try out to find all possible configurations via which cows can be placed in given number of stalls. This would be a recursive solution with exponential time complexity. Can we reduce it?
* We increase the range of minimum distance between two cows and place them according. This would take n^2 solution. Umm seems better because we reduced our solution from exponential to polynomial solution. Can we improve more?
* From above solution, we can see that we are alloting cows to stalls from pre-defining the minimum distance between the two cows. So, we are basically making use of range for distances. This range will be in sorted increasing order. This gives us hint to use of binary search. 

### Algorithm
``` 
  Sort the given array.
  low = 1, high = last element of the array
  while(low<=high):
    mid = (low+high)/2
    for i in array:
      if mid is valid minimum distance for allocating cows in stalls
        low = mid+1
      else 
        high = mid-1
  return high
```
### Time Complexity
For sorting, it takes Nlog(N). For our algorithm, log(N) for binary search and N for checking if cows can be allocated or not. So total time complexity is Nlog(N).