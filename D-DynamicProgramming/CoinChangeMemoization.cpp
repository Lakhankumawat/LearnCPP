#include<iostream>
#include<vector>
using namespace std;


vector<int> memo;
int MAX;

int DFS(vector<int>& coins,int amount){

    if(amount==0)                                           // we found an answer
        return 0;
    if(amount<0)
        return MAX;
    if(memo[amount]!=-1)
        return memo[amount];

    memo[amount] = MAX;
    for (int i=0;i<coins.size();i++)
        memo[amount] = min(memo[amount],1+DFS(coins,amount-coins[i])) ;

    return memo[amount];

}

int minCoinChange(vector<int>& coins, int amount) {

    memo.clear();
    memo.resize(amount+1,-1);                               // Flag all locations by -1
    MAX = amount+1;                                         // max answer we can get is amount itself, sum of ones for example amount = 3 = 1 + 1 + 1

    int minCoins = DFS(coins,amount);

    return (minCoins<MAX)? minCoins:-1;                     // if answer>= MAX then we could not find a combination of coins which its sum = amount, return -1


}
int main(){

    vector<int> coins1 = {1,2,5};
    int amount1 = 11;
    cout<<minCoinChange(coins1,amount1)<<endl;              // ans = 3 , 11 = 5 + 5 + 1

    vector<int> coins2 = {2};
    int amount2 = 3;
    cout<<minCoinChange(coins2,amount2)<<endl;              // ans = -1 , no way to construct amount = 3 form coins = [2]

    return 0;
}