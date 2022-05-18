//Knapsack with Duplicate Items
//link of the Problem Statement :- https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1/#

#include<bits/stdc++.h>
using namespace std;

    //function to calculate max profit
int maxProfit(int currentItem,int n,int capacity,int profit[],int weight[],vector<vector<int>>&v)
{
    //base conditions
    if(capacity == 0) return 0; //we can't add anymore items if the capacity of the knapsack becomes 0
        
    if(currentItem >= n) return 0; //we can't get any profit form items that dosen't exists
        
    if(v[currentItem][capacity] != -1) //if answer for that co-ordinade already exists, then returning it value
        return v[currentItem][capacity];
        
    //exploring the 2 possibilities :- 1)Considering the item, 2)not considering the item
    int consider=0;
    if(weight[currentItem] <= capacity)
        consider= profit[currentItem] + maxProfit(currentItem,n,capacity-weight[currentItem],profit,weight,v);
            
    int notConsider = maxProfit(currentItem+1,n,capacity,profit,weight,v);
        
    //storing the answer for currentKey in the unordered_map,so that we can use it in future 
    v[currentItem][capacity] = max(consider,notConsider);
    return v[currentItem][capacity];
}
int knapSack(int N, int W, int val[], int wt[])
{
    vector<vector<int>>v(N,vector<int>(W+1,-1));
    return maxProfit(0,N,W,val,wt,v);
}

int main()
{
    int N,W;
    cin>>N>>W;
    int wt[N],val[W];

    for(int i=0;i<N;i++)
        cin>>wt[i];
        
    for(int i=0;i<N;i++)
        cin>>val[i];

    cout<<knapSack(N,W,val,wt);

return 0;

}
