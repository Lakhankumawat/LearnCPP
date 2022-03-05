/*Program to check if a Subset with the given sum  
 is present in the given array or not using dynamic programming
*/

#include<bits/stdc++.h>
using namespace std;

bool chechSubsetSum(int a[],int n, int sum)
{
    bool dp[n+1][sum+1];             // A dp matrix to store the answers of the sub Problems

   // Base Cases

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=true;               // Filling up the first row of the dp matrix with true
    }

    for(int j=1;j<=sum;j++)
    {
        dp[0][j]=false;             // Filling up the first column of the dp matrix with false
    }


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(j<a[i-1])               // if the number present at a[i-1] is greater than the sum
            dp[i][j]=dp[i-1][j];       //exclude it


            if(j>=a[i-1])        // if the number present at a[i-1] is less than or equal to the sum
            dp[i][j]=(dp[i-1][j]||dp[i-1][j-a[i-1]]);     //include OR exclude it
        }
    }
    return dp[n][sum];      //returing there last cell of the dp matrix
}



int main()
{
    int a[]={3,4,5,2};
    int sum=10;
    int n=sizeof(a)/sizeof(a[0]);         // to calculate the number of elements in the array

    if(chechSubsetSum(a,n,sum))
        cout<<"Subset Found with sum: "<<sum;           // if checkSubsetSum function is true
    else
        cout<<"No Subset found with sum: "<<sum;        // if checkSubsetSum function is false

    return 0;
}



//Time Complexity : O(sum*n)
//Space Complexity : O(sum*n)
