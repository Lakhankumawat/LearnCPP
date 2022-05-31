/* Time Complexity : O(N)
Space Complexity : O(N)   */

#include<bits/stdc++.h>
using namespace std;

bool poweroftwo (int n)
{
    if(n==1 || n==2) return true;    // base case
        
    if(n % 2 == 1 || n==0)  return false;   // base case 
        
    return poweroftwo(n/2);
}

int main()
{ 
    int n;

    cout<<"Enter a number : ";
    cin >> n;
    
    if(poweroftwo(n))
     cout<<"This number can be expressed as a power of two \n";
    
    else
       cout<<"This number can't be expressed as a power of two \n";

    return 0;
}
