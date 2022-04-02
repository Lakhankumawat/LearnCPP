
# Table of content
- [Dynamic Programming](#dynamic-programming)
- [Equal Sum Partition Problem](#equal-sum-partition-problem)
- [Trapping Rain Water Problem](#trapping-rain-water-problem)
- [Longest Common Subsequence Problem](#longest-common-subsequence-problem)
- [Egg Dropping Puzzle](#egg-dropping-puzzle)
- [Coin Change](#coin-change)


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

# Minimum_insertion_form_palindrome

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
- [Complexity](#complexity)

# Problem Statement

Consider a string str and output the minimum number of characters that need to be inserted to make it a palindrome. 

> This question is a variation of LCS (Longest Common Subsequence) problem


## Examples
```
Input: abcd
Output: 3
Number of insertions required is 3 i.e. dcbabcd

Input: abcda
Output: 2
Number of insertions required is 2 i.e. adcbcda 

Input: abcde
Output: 4
Number of insertions required is 4 i.e. edcbabcde


```
# Explanation

- Consider a string str: aebcbda
- We know that to make this string a palindrome we need to add a 'd' and an 'e' i.e  adebcbeda
- Here it can be seen that we needed to add 2 alphabets to make it a palindrome
- To find these we need to first find the LPS (Longest palindromic subsequence)
- To find the LPS find the length of LCS of the input string and its reverse
- From the LPS we can see that the minimum number of insertions needed would be the length of the input string minus LPS.
```
Number of insertions = Length of string - Length of LPS
```
So the function findMinInsertionsLCS would be
``` C++
    string rev = "";
	rev = str;
	reverseStr(rev);
	return (n - lcs(str, rev, n, n));
```


# Complexity
```
Time complexity: O(N^2) 
Space complexity: O(N^2) 

```

# [Trapping Rain Water Problem](https://leetcode.com/problems/trapping-rain-water/)
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

# [Longest Common Subsequence Problem](https://www.programiz.com/dsa/longest-common-subsequence)

### Problem Statement

Given two sequences, find the length of longest subsequence present in both of them. A subsequence is a sequence that appears in the same relative order, but not necessarily contiguous.

### Example

Let S1 and S2 be the two strings. Then the longest common subsequence **LCS** is given as 
```
Eg 1. 
S1 = {A, C, G, A, T, A, B} 
S2 = {C, Z, A, X, T, B, Q, P, R}
LCS = {C, A, T, B}

Eg 2.
S1 = {B, C, D, A, A, C, D}
S2 = {A, C, D, B, A, C}
LCS = {C, D, A, C}
```

### Explanation
- Consider two strings S1 -> ABACC and S2 -> AABBC.
- Create a LCS table of dimension **(n+1 * m+1)** where **n** and **m** are the lengths of S1 and S2 respectively.
  
  ``` LCS[m][n] ```
- The first row and the first column of the LCS table are filled with zeros since there will be no common subsequence when we compare string S1 or S2 with an empty string.

  ```
  if (i = 0 or  j = 0)
    LCS[i][j] = 0 
  ```
- For the remaining cells : 

   - If the character corresponding to the current row and current column are matching, this implies that the current character can be added to the LCS found upto previous character of both strings. Update the LCS table by adding 1 to the diagonal cell of the current character cell.

      ``` LCS[i,j] := LCS[i-1,j-1] + 1 ```
   - If the character corresponding to the current row and current column do not match, this implies that the current character cannot be added to the LCS. So the LCS found upto current character will be same as the maximum LCS found upto previos character of either strings. Fill the current cell by taking the maximum of previous column and previous row element from the LCS table

      ``` LCS[i,j] := max(LCS[i,j-1], LCS[i-1,j]) ```
    
    <br />

    ![image](https://user-images.githubusercontent.com/59263190/159671926-ca8db497-b132-40d1-9c17-c1d1a41a2aa8.png)


- ### Algorithm
```cpp
function computeLCS (S1[1...m], S2[1...n])
    LCS = array(0..m, 0..n)
    for i := 0 -> m
      for j := 0 -> n
        if i == 0 or j == 0
          LCS[i][j] = 0
        else if S1[i] == S2[j]
          LCS[i,j] := LCS[i-1,j-1] + 1
        else
          LCS[i,j] := max(LCS[i,j-1], LCS[i-1,j])
    
    return LCS[m][n]
```

### Complexity
```
Time Complexity : O(m*n)
Space Complexity : O(m*n)
```


# EGG DROPPING PUZZLE


- [Problem Statement](#problem-statement-for-egg-dropping)
- [Examples-1](#example-1)
- [Examples-2](#example-2)
- [Explanation](#explanation-2)
- [Complexity](#complexity-analysis)

### Problem Statement For Egg Dropping
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
##### Explanation 1: 
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

##### Explanation 2: 
Method : Dynamic Programming.  
The approach will be to make a table which will store the results of sub-problems so that to solve a sub-problem, it would only require a look-up from the table which will take constant time, which took exponential time with recursion.  
Formally for filling DP[i][j] state where 'i' is the number of eggs and 'j' is the number of floors:   
 
We have to traverse for each floor 'x' from '1' to 'j' and find minimum of:  
(1 + max( DP[i-1][j-1], DP[i][j-x] )).  
![dptable](https://user-images.githubusercontent.com/78564629/158542308-490d8143-4889-425f-9d60-7e6632b8808c.png)



#### 2 egg for 100-floor builing- Optimal Approach:
If the first egg breaks, we need to test the remaining floors one by one starting from the lowest until the remaining egg breaks. For example, if the first drop is on the 50th floor and the egg breaks, it will take 49 more drops from the 1st floor to the 49th floor to ensure the remaining egg does not break until we know the answer.  
If the first drop is on the 10th floor and it breaks, then it takes a total of 10 trials to know the answer in a worst case scenario, i.e. the egg starts to break on the 9th or the 10th floor. The trials will be: 10 → 1 → 2 → 3 → 4 → 5 → 6 → 7→ 8 → 9  
To utilize the number of trials used (10 trials), if the first drop is on the 10th floor and the egg does not break, the second drop should be on the 19th floor, i.e. if the egg breaks on the 19th floor, then you should drop the eggs in the following sequence: 10 → 19 → 11 → 12 → 13 → 14 → 15 → 16 → 17 → 18 (10 trials in total).  
With this utilization in mind, the ultimate sequence (if an egg never breaks) will be 10 → 19 (10 + 9) → 27 (10 + 9 + 8) → 34 (10 + 9 + 8 + 7) → 40 → 45 → 49 → 52 → 54 → 55, i.e. 10 trials can test up to 55 floors.  
Using the formula for triangle numbers, m trials can test for \frac{m(m+1)}{2} floors, i.e.  
13 trials can test 13 * 14 / 2 = 91 floors  
14 trials can test 14 * 15 / 2 = 105 floors  
Thus it takes 14 trials to test a 100-floor building.  

##### 2 Egg for 15 Floor

![File](https://user-images.githubusercontent.com/78564629/158540414-3b65cc6b-e598-4347-b20b-79bdf10af759.png)

## Complexity Analysis
**Time Complexity :** O(nk^2).  
Where 'n' is the number of eggs and 'k' is the number of floors, as we use a nested for loop 'k^2' times for each egg  
**Auxiliary Space :** O(nk).  
As a 2-D array of size 'n*k' is used for storing elements.


# Coin Change

- [Problem Statement](#problem-statement-of-coin-change)
- [Examples](#examples-of-coin-change)
- [Explanation](#explanation-of-coin-change)
- [Complexity](#complexity-of-coin-change)


# Problem Statement of Coin Change

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.
Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.
You may assume that you have an infinite number of each kind of coin.


### Examples of Coin Change:

##### Example 1:

    Input: coins = [1,2,5], amount = 11
    Output: 3
    Explanation: 11 = 5 + 5 + 1
	
#### Example 2:

    Input: coins = [2], amount = 3
    Output: -1
   
 #### Example 3:

    Input: coins = [1], amount = 0
    Output: 0
    
    
### Explanation of Coin Change:

- Consider an amount A and coins array C.
- We use bottom up approach so will solve the problem for each amount less than A first.
- Initialize dp array of length (amount+1) with MAX value. Where MAX = amount + 1.
- For a certain amount X we will try to pick up each coin in C.
- Minimize the answer for amount X. i.e. dp[x] = min(dp[x], 1 + dp[X-Ci]) where i ranges from 0 to |C|-1.
- Finally, Return dp[amount] if dp[amount]<MAX else return -1.

### Example 1 dp array:

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 |
| :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--: | :--:  | :--:  | 
| 0 | 1 | 1 | 2 | 2 | 1 | 2 | 2 | 3 | 3 | 2  |  3  | 


### Pseudo code of Coin Change:

```
int coinChange(vector<int>& coins, int amount) {

    int MAX = amount+1;                                              // max answer we can get is amount itself, sum of ones for example amount = 3 = 1 + 1 + 1
    vector<int> dp(amount+1,MAX);
    dp[0] = 0;

    for(int i=0;i<dp.size();i++)
        for(int j = 0;j<coins.size();j++){
            if(i-coins[j]>=0)
                dp[i] = min(dp[i],dp[i-coins[j]]+1);
        }

    return (dp[amount]!=MAX)? dp[amount]: -1;
}

```

### Complexity of Coin Change:

#### Time Complexity = O(n)
#### Space Complexity = O(n)

