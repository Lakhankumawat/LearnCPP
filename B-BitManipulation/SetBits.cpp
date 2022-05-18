/*                               NO. OF SETBITS 
Time Complexity : O(log n)
Space Complexity : O(1)               */

#include <bits/stdc++.h>
using namespace std;

int setbit(int& num)
{  
   int cnt=0;
        while(num!=0)   // run the loop till number is not equals to 0
        { num = num & (num-1);     // do bitwise AND operation
          cnt++;
        }
  return cnt;   // return set bits
}


int main()
{   
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    
    int x = setbit(n);   // call the function to set the bit
    
    cout<<"No. of setbits are : "<< x;     // display set bits
    
  return 0;
}