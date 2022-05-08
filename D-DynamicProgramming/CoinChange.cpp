//COIN CHANGE

#include<bits/stdc++.h>
using namespace std;

int minCoins(int currentCoin,int amount,vector<int>&coins,int n,vector<vector<int>>&v)
{
     //base conditions
     if(amount == 0) return 0;
        
    if(currentCoin >= n) return 100001;
        
    //if value is already present in the vector v ,then extract from it, no need to make recursive calls for it 
    if(v[currentCoin][amount] != -1)
        return v[currentCoin][amount];
       
     //Explore the two possibilities :- 1)take the coin ,2)don't take the coin
    int consider = 100001;
     
     //we'll consider a coin only when its denomination is either less than or equal to the amount
    if(coins[currentCoin] <= amount)
        consider = 1 + minCoins(currentCoin,amount-coins[currentCoin],coins,n,v);
        
    int notConsider = minCoins(currentCoin+1,amount,coins,n,v);
       
    //storing the answer for the current coordinate in v,so that we can use it in future
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
