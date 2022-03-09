/*

You will be given two strings. You have to find the number of times the second string occurs in the first string, be it continuous or discontinuous.
Example 1::
Input : String A: abcde
String B: abc
Output: 1

Example 2::
Input : String A: abcaeb
String B: ab
Output: 3

*/


#include <bits/stdc++.h>
using namespace std;

int countSubSeq(string a, string b)
{
    int m=a.length();    //calculate the length of string a
    int n=b.length();    //calculate the length of string a
    int dp[m+1][n+1];    // create a dp matrix to store the store the ans of the subproblem
    
    for(int i=0;i<=n;++i)
    {
        dp[0][i]=0;             // if string a is empty
    }
    
    for(int i=0;i<=m;++i)
    {
        dp[i][0]=1;            // if string b is empty
    }
    
    for(int i=1;i<m+1;i++)     // Bottum-Up filling
    {
        for(int j=1;j<n+1;j++)
        {
            if(a[i-1]==b[j-1])                       // if last characters of both strings are same, either consider it
                dp[i][j]=dp[i-1][j-1] + dp[i-1][j];    //  or ignore the last character of string a
            else
                dp[i][j]=dp[i-1][j];        // if last characters of both strings are different then ignore last character of string a
        }
    }
    
    return dp[m][n];        // return the last cell of the dp matrix
}

int main()       // driver code 
{
    
    string a;                         // declare first string
    string b;                         // declare second string
    
    cout<<"Enter first string :"<<endl;
    getline(cin,a);                        // input first string
    cout<<"Enter second string :"<<endl;
    getline(cin,b);                        // input second string
    
    int ans=countSubSeq(a,b);              // call the function and store the return value in variable ans
    
    cout<<"String "<<b<<" occurs "<<ans<<" times in string "<<a<<" as a subsequence "<<endl;
    return 0;
}


/*

Time Complexity: O(m*n)
Space Complexity: O(m*n)

*/
