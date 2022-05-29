#include<bits/stdc++.h>
#include<climits>
using namespace std;

int min(int a, int b){
    return (a<b)?a:b;
}

// Top-down approach for TSP -> O(2^N * N^2)
int TSP(vector<vector<int>> dist, int setCity, int curCity, int n, vector<vector<int>> &dp){
    //Base case all cities visited in setCity
    if(setCity==((1<<n)-1)){
        return dist[curCity][0];
    }
    //If value is computed return the same
    if(dp[setCity][curCity]!=-1){
        return dp[setCity][curCity];
    }
    int ans = INT_MAX;
    for(int choice=0; choice<n; choice++){
        if((setCity&(1<<choice))==0){
            ans = min(ans, dist[curCity][choice] + TSP(dist, (setCity|(1<<choice)), choice, n, dp));
        }
    }
    dp[setCity][curCity]=ans;
    return ans;
}

int main(){
    //The Adjacency Matrix for the graph -> dist 
    vector<vector<int>> dist = {
        {0, 23, 40, 27},
        {23, 0, 38, 34},
        {40, 38, 0, 12},
        {27, 34, 12, 0}
    };
    int n = dist.size(); //No of Cities or vertices 

    //Initialize the dp vector of (2^N)*N dimensions
    vector<vector<int>> dp(1<<n, vector<int>(n, -1));
    
    //Souce city is kept as 0
    cout<<TSP(dist, 1, 0, n, dp)<<endl;
    return 0;
}