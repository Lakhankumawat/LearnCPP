## EGG DROPPING PUZZLE
-----------------------------
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
 