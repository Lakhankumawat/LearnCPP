#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m = 1000000000 + 7;
  ll staircase(int n,ll *dp)
  {
    //Base case
      if(n<=1)
      {
          return 1;     
      }
  
      if(n==2)
      {
          return 2;
      }
       //Memoisation starts here
      ll x,y,z;
      ll ans;
      if(dp[n-1] == -1)  //if we don't have answer find ans in 3 ways i.e climbing Three hops and store
      {
           x=staircase(n-1,dp)%m;
          y=staircase(n-2,dp)%m;
          z=staircase(n-3,dp)%m;
          dp[n-1] = x+y+z;
          ans=dp[n-1];
      }
      else{ 
          ans=dp[n-1];
      }
     
      return ans%m;
  }
int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll output[n];
        for(int i=0;i<n;i++)
        {
            output[i]=-1;
        }
        cout<<staircase(n,output)<<endl;
    }
    return 0;
}
