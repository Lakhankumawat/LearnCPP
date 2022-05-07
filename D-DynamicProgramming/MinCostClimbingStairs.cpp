//MIN COST  CLIMBING STAIRS
//Link of the question :-  https://leetcode.com/problems/min-cost-climbing-stairs/



#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int minCost(vector<int>&cost,int currentIndex,unordered_map<int,int>&m)
{
    if(currentIndex==cost.size()) return 0; 
    if(currentIndex>cost.size()) return 999;
        
    int currentKey=currentIndex;
        
    if(m.count(currentKey)) return m[currentKey];
        
    int oneJump= cost[currentIndex] + minCost(cost,currentIndex+1,m);
    int twoJump= cost[currentIndex] + minCost(cost,currentIndex+2,m);
        
    m[currentKey]= min(oneJump,twoJump);
        
    return m[currentKey];
}
int minCostClimbingStairs(vector<int>& cost) 
{
    unordered_map<int,int>m;
    int ans = minCost(cost,0,m);
    return min(ans,m[1]);
}

int main()
{
    int n;
    cin>>n;
    vector<int>cost(n,0);
    for(int i=0;i<n;i++)
        cin>>cost[i];
    
    cout<<minCostClimbingStairs(cost);
return 0;
}