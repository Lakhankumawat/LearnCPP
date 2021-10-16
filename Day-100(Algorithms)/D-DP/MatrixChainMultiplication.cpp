#include <bits/stdc++.h>
using namespace std;

int mcm(int i,int j, vector<vector<int>> &dp,vector<int> v){
    if(j==i)return 0;
    int mn = INT_MAX,count;
    if(dp[i][j]!=-1)return dp[i][j];
    for(int k=i;k<j;k++){
        mn = min(mn,mcm(i,k,dp,v)+mcm(k+1,j,dp,v)+v[i-1]*v[k]*v[j]);
    }
    return dp[i][j] = mn;
}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<vector<int>> dp(n,vector<int>(n,-1));
    cout<<mcm(1,n-1,dp,v);
}