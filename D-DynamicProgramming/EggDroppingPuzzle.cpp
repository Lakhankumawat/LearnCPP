#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int dp[201][201] ;
    public:
    int solve(int e , int f)
    {
        if(f==0 || f==1)
        {
            return dp[e][f]=f ;
        }
        if(e==1)
        {
            return dp[e][f]=f ;
        }
        if(dp[e][f]!=-1)
        {
            return dp[e][f] ;
        }
        
        int finalAns = INT_MAX ;         
        for(int k=1;  k<=f ; k++)
        {
            int tempAns=  1+ max(solve(e-1, k-1), solve(e, f-k)) ;
            finalAns = min(finalAns , tempAns) ;
        }
        return dp[e][f] = finalAns ;
    }
    int eggDrop(int n, int k) 
    {
        memset(dp, -1, sizeof(dp)) ;
        solve(n , k) ;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends