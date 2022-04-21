
## Rod Cutting 
- [Problem Statement](#problem-statement-for-rod-cutting)
    - [Examples](#rod-cutting-examples)
- [Optimal Approach](#rod-cutting-optimal-approach)
- [Complexity](#rod-cutting-complexity)
### Problem Statement for Rod Cutting
Given a rod of length n and a list of rod prices of length i, where 1 <= i <= n, find the optimal way to cut the rod into smaller rods to maximize profit.

![image](https://user-images.githubusercontent.com/29122581/164487339-bc6e60e9-36f6-4d40-b804-2a220f0ff3d2.png)


#### Rod Cutting Examples

    1. prices[] = [1, 5, 8, 9, 10, 17, 17, 20]  
       rod length = 4  
       Best: Cut the rod into two pieces of length 2 each to gain revenue of 5 + 5 = 10
       
    2. prices[] = [1, 5, 8, 9, 10, 17, 17, 20]
       rod length = 8
       Best: Cut the rod into two pieces of length 2 and 6 to gain revenue of 5 + 17 = 22
       
    3. prices[] = [3, 5, 8, 9, 10, 17, 17, 20]
       rod length = 8
       Best: Cut the rod into eight pieces of length 1 to gain revenue of 8 * 3 = 24
       
#### Rod Cutting Optimal Approach

    We will solve this problem in a bottom-up manner. (iteratively)  
    In the bottom-up approach, we solve smaller subproblems first, then move on to larger subproblems.  
    The following bottom-up approach computes dp[i], which stores maximum profit achieved from the rod of length i from 1 to len. 
    It uses the value of smaller values i already computed.
    
![image](https://user-images.githubusercontent.com/29122581/164486773-2ec7a752-dcce-464c-adf2-4ecc5fa613db.png)
    
#### Rod Cutting Complexity
```
Time Complexity : O(n^2;)  
Space Complexity : O(n)  
```

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
