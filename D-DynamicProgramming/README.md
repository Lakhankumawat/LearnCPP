## Rod Cutting 
### Problem Statement
Given a rod of length n and a list of rod prices of length i, where 1 <= i <= n, find the optimal way to cut the rod into smaller rods to maximize profit.   
#### Examples :  

    1. prices[] = [1, 5, 8, 9, 10, 17, 17, 20]  
       rod length = 4  
       Best: Cut the rod into two pieces of length 2 each to gain revenue of 5 + 5 = 10
       
    2. prices[] = [1, 5, 8, 9, 10, 17, 17, 20]
       rod length = 8
       Best: Cut the rod into two pieces of length 2 and 6 to gain revenue of 5 + 17 = 22
       
    3. prices[] = [3, 5, 8, 9, 10, 17, 17, 20]
       rod length = 8
       Best: Cut the rod into eight pieces of length 1 to gain revenue of 8 * 3 = 24
       
#### Optimal Approach :  

    We will solve this problem in a bottom-up manner. (iteratively)  
    In the bottom-up approach, we solve smaller subproblems first, then move on to larger subproblems.  
    The following bottom-up approach computes dp[i], which stores maximum profit achieved from the rod of length i from 1 to len. 
    It uses the value of smaller values i already computed.
    
**Time Complexity :** O(n&sup2;)  
**Space Complexity :** O(n)  