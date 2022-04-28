#include<bits/stdc++.h>
using namespace std;

int minCoins(int currentCoin,int amount,vector<int>&coins,int n,vector<vector<int>>&v)
{
     if(amount == 0) return 0;
        
    if(currentCoin >= n) return 100001;
        
    if(v[currentCoin][amount] != -1)
        return v[currentCoin][amount];
        
    int consider = 100001;
    if(coins[currentCoin] <= amount)
        consider = 1 + minCoins(currentCoin,amount-coins[currentCoin],coins,n,v);
        
    int notConsider = minCoins(currentCoin+1,amount,coins,n,v);
        
    v[currentCoin][amount] = min(consider,notConsider);
    return v[currentCoin][amount];
}
int coinChange(vector<int>& coins, int amount)
{
    int n = coins.size();
        
    vector<vector<int>>v(n,vector<int>(amount+1,-1));
        
    int ans = minCoins(0,amount,coins,n,v);
        
    if(ans >= 100001) return -1;
        
return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int>coins(n,0);
    for(int i=0;i<n;i++)
        cin>>coins[i];
    
    int amount;
    cin>>amount;

    cout<<coinChange(coins,amount);
    
return 0;
}