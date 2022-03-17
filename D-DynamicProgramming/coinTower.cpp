

/* A Dynammic Programming based problem named - The Coin Tower.
   problem statement - Whis and Beerus are playing a new game today. 
   They form a tower of N coins and make a move in alternate turns. Beerus plays first. 
   In one step, the player can remove either 1, X, or Y coins from the tower. 
   The person to make the last move wins the game. we need to find out who wins the game
   */

/* Complexities -: 
   1.Time Complexity and Space Complexity - O(N), N - Number of Coins
*/


#include<iostream>
using namespace std;

/* A function that returns the name of the player who wins the game following the dynamminc programming approach */

string findWinner(int x, int y, int n)
{
    /*
        dp[i] represents whether Beerus will win provided that "i" coins remaining it is Beerus turn
        if Beerus will win in that scenario, dp[i] will be true otherwise it'll be false
    */

   // i reprsenting the remaining coins
   int *dp = new int[n + 1];
   dp[0] = 0;
   dp[1] = 1;
   for(int i = 2; i <= n; i++)
   {
       /*
       if the number of coins is in between x amd y, each player can pickup either 1 or x  per turn.
       Now, each player wants to win, so they will look at the state of the game when i - 1 coins remain and 
       also when i - x coins remain. If the player is winning in any of those states, he will try to get to that state.
       */
       dp[i] = 0;
       if(i - y >= 0 && !dp[i - y])
       {
           dp[i] = 1;
       }
       if(i - x >= 0 && !dp[i - x])
       {
           dp[i] = 1;
       }
       if(i - 1 >= 0 && !dp[i - 1])
       {
           dp[i] = 1;
       }
   }
   if(dp[n] == 1)
   {
       return "Beerus";
   }
   return "Whis";
}

/*
   main function to get the winning player for particular number of coins. 
*/
int main()
{
    int x, y, n;
    cin >> n >> x >> y;
    cout << findWinner(x, y, n);
    return 0;
}