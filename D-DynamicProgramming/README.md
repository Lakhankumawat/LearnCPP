# Coin Tower Problem

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
- [Complexity](#complexity)


# Problem Statement
Whis and Beerus are playing a new game today. They form a tower of N coins and make a move in alternate turns. Beerus plays first. In one step, the player can remove either 1, X, or Y coins from the tower. The person to make the last move wins the game. Can you find out who wins the game?

# Input Format

The first and the only line of input contains three integer values separated by a single space. They denote the value of N, X and Y, respectively.

# Output Format 

Prints the name of the winner, either 'Whis' or 'Beerus' (Without the quotes).

## Examples
```
4 2 3 
Number of coins - 4
Value of X - 2
Value of Y - 3

Output - Whis

```
# Explanation

- The Coin Tower problem takes 3 integers as an input - Number of coins, X & Y. Both the players can take either 1 or X or Y coins at a time.  
- Assuming that both the players are smart enough that they can defeat each other we choose one of them and pick up coins in such a way that the remaining coins lead to defeat of the other one.
- In order to implement the logic efficiently considering both the time complexity and space complexity we made the use of the dynamminc programming approach.
- The ith element of the array used for DP approach represents the ith number of coins.
- From the available options to pick coins(1, X & Y), if choosing anyone of them lead to such condition that it does not matter with which option the other user will go in the next turn for picking up the coins the other user will lose only
  then the user of the current turn will always win.
- Win is represented by True and defeat is represented by False.
- If nth(n - total number of coins) element of the array is true then 'Beerus' will win otherwise 'Whis' will win

 ``` 
  string findWinner(int num, int x, int y)
{
    int *dp = new int[num + 1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= num; i++)
    {
        bool ans = dp[i - 1];
        if(!ans){
            dp[i] = 1;
            continue;
        }
        if(i - x >= 0){
            ans = dp[i - x];
        }
        if(!ans){
            dp[i] = 1;
            continue;
        }
        if(i - y >= 0){
            ans = dp[i - y];
        }
        if(!ans){
            dp[i] = 1;
            continue;
        }
        dp[i] = 0;
    }
    if(dp[num] == 1){
        return "Beerus";
    }
    return "Whis";
   
}
 ```

# Complexity
```
Complexities -: 
   1.Time Complexity - O(N), N - Number of coins.
   2.Space Complexity - O(N), N - Number of coins.
```
