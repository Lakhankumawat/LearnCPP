#include<iostream>
#include<vector>
using namespace std;

// Dynamic Programming Based

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
int main(){

    vector<int> coins1 = {1,2,5};
    int amount1 = 11;
    cout<<coinChange(coins1,amount1)<<endl;                        // ans = 3 , 11 = 5 + 5 + 1

    vector<int> coins2 = {2};
    int amount2 = 3;
    cout<<coinChange(coins2,amount2)<<endl;                       // ans = -1 , no way to construct amount = 3 form coins = [2]

    return 0;
}