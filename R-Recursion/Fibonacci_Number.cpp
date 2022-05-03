/*                                       FIBONACCI NUMBER PROGRAM
TIME COMPLEXITY : O(N)
SPACE COMPLEXITY : O(N)    Here, N is recursion stack space.

Link to the article for reference : https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/         */


#include<bits/stdc++.h>
using namespace std;

// Function to calculate nth fibonacci number
int fibonacci(int n)
{ if(n==0)     // base case
   return 0;
   
  if(n==1)     // base case
   return 1;
   
   return ( fibonacci(n-1)+fibonacci(n-2) );
}

int main()
{    
   /* Fibonacci sequence : 0,1,1,2,3,5,8,13 ....   
      it means that 0 and 1 (first two numbers) remains same and nth number is obtained by addition of previous two numbers.     */
      
    int n;
    cout<<"Enter a number : ";
    cin>>n;
  
  int ans=fibonacci(n);     // function call
  
  cout<<"FIBONACCI NO : "<<ans;
  
  return 0;
}