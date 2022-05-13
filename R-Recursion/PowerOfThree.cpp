/* Time Complexity : O(N)
   Space Complexity : O(N) */

#include <bits/stdc++.h>
using namespace std;

bool powerthree(int n)
{
    if(n==1 || n==3) return true;   // base case
        
    if(n % 3 !=0 || n==0) return false;  // base case
        
    return powerthree(n/3);  //recursive call n/3 times
}

int main()
{
    int n;
    
    cout<<"Enter a number : ";
    cin>>n;
    
    if(powerthree(n))  //function call to find the solution
      cout<<"Number can be represented as power of 3\n";
      
    else
      cout<<"Number can't be represented as power of 3\n";
     
    return 0;
}