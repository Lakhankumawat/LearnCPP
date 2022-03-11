/*
   Given a number n.
   Express it as a sum of two prime numbers if it is possible otherwise print -1.

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
    vector<bool>sieve(n, true);   // create a sieve

    sieve[0] = false;      // mark 0 and 1 as false as 0 and 1 are non prime
    sieve[1] = true;

    for (int i=2; i*i<n; i++)      //start the loop from 2 i.e. the first prime number
    {
        if (sieve[i] == true)      // check if the number is found to be prime 
	  {
	    for (int m = i * i; m < n; m += i)
	      sieve[m] = false;     // if found prime then mark all it's multiples as false
	  }
    }


    for (int i = 2; i < n; i++)
    {
	    if (sieve[i] && sieve[n - i])      // find two numbers in the sieve which add up to n and are prime
	        return{i, n - i};   // return that number in the vector 
    }
    
    return {-1,-1};      // if not found then return -1 and -1  in the veector
}

int main()   // driver code
{
    int num;
    cin>>num;

    vector<int>ans=primeSumDivision(num);
    cout<<ans[0]<<" "<< ans[1]<<endl;    // print the 0th and the 1st index of the ans array 

    return 0;
}


//Time Complexity : O(n*log(log(n)))
//Space Complexity :O(n)
