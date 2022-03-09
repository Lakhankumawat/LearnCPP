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



# Minimum insertions to form a palindrome

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
