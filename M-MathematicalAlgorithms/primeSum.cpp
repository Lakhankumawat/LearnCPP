/*
   Given a number n.
   Express it as a sum of two prime numbers if it is possible else print -1.

   Example 1: 
   n=24
   Output: 5 19


   Example 2: 
   n=1
   Output: -1 -1

   Example 3: 
   n=100
   Output: 3 97

*/

#include<bits/stdc++.h>
using namespace std;

vector<int>primeSumDivision(int n)
{
    vector<bool>sieve(n, true);

    sieve[0] = false;
    sieve[1] = true;

    for (int i=2; i*i<n; i++)
    {
        if (sieve[i] == true)
	  {
	    for (int m = i * i; m < n; m += i)
	      sieve[m] = false;
	  }
    }


    for (int i = 2; i < n; i++)
    {
	    if (sieve[i] && sieve[n - i])
	        return{i, n - i};
    }
    
    return {-1,-1};
}

int main()
{
    int num;
    cin>>num;

    vector<int>ans=primeSumDivision(num);
    cout<<ans[0]<<" "<< ans[1]<<endl;

    return 0;
}


//Time Complexity : O(n*log(log(n)))
//Space Complexity :O(n)