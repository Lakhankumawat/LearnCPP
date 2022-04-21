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

    int n,amount;
    cout<<"Enter the length of the coins array:\n"; 
    cin>>n;
    vector<int> coins(n); 
    cout<<"Enter the coins:\n"; 
    for(auto&x:coins) cin>>x;
    cout<<"Enter the amount of money to construct:\n"; 
    cin>>amount;
    

    cout<<coinChange(coins,amount)<<endl;                        // ans = 3 , 11 = 5 + 5 + 1

    return 0;
}