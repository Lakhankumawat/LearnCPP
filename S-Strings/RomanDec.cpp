/*                           Roman Number to Integer
     Time Complexity=O(n)
     Space Complexity=O(1)                                            */

#include <bits/stdc++.h>
using namespace std;

// function to convert roman number to integer
   int romanDec(string &str) 
             {
              int n = str.size();
              int ans=0,prev=0;
        
                for(int i=n-1;i>=0;i--)   // find the answer for standard roman numerals
                {
                   int temp=0;
                    if(str[i]=='I')
                     temp = 1;
                    else if(str[i]=='V')
                     temp = 5;
                    else if(str[i]=='X')
                     temp = 10;
                    else if(str[i]=='L')
                     temp = 50;
                    else if(str[i]=='C')
                     temp = 100;
                    else if(str[i]=='D')
                     temp = 500;
                    else if(str[i]=='M')
                     temp = 1000;
                      
                      // if string doesn't have standard roman numbers, do below operations
                       if(temp < prev)
                        ans-=temp;   
                      else 
                        ans += temp;
                
                      prev = temp;    // assign value of temp to prev for next iteration
            
               }
        
       return ans;
    }


int main() 
{
    int t;
    cout<<" Enter the number of testcases : ";
    cin >> t;
    while (t--) 
    {
        string b;   // declared a string
        cout<<" Enter the string (In Capital) : ";
        cin >> b;
        cout <<" Integer notation is : "<<romanDec(b);    // function call 
    }
} 