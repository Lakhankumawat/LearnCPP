
# Table of content
- [Union Two Arrays](#union-two-array)
  - [Problem](#problem)
  - [Algorithm](#algorithm)
  - [Time Complexity and Space Complexity](#time-complexity-and-space-complexity)
# Union Two Arrays :
Given two arrays a[] and b[] of size n and m respectively.
The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements
from both the arrays. If there are repetitions,
then only one occurrence of element should be printed in the union.

### Problem
```
Give n, m, a,b are size of two array and two arrays.
Output count of number of elements in union of two arrays.
Example : 
Input:
n = 5 m = 3 
a = 1 2 3 4 5
b = 1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set of both arrays. So count is 5.

```
### Algorithm
```
Here, we'll use the Set Data Structure to make it easier for us to find the union between 
the two Arrays, and as the union is known, it's between sets.
and Set Data Structure do not duplicate numbers, so we can get count of number of elements in union of two arrays. 

- Convert Array 'a' to set using Constructor of set Data Structure set(begin of array,end of array).
- Insert Array 'b' in  set 's'  using insert(begin of array,end of array) function.
- Return size of set that consider about count of elements in union of two arrays.

```
### Time Complexity and Space Complexity
```
- Time Complexity : O((n+m)log(n+m))
- Space : O(n+m)

```