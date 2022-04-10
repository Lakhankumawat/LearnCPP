//CLIMBING STAIRS
//Link of the question :-  https://leetcode.com/problems/climbing-stairs/


#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int totalWays(int currentIndex,int target,unordered_map<int,int>&m)
{
    //base conditions
    if(currentIndex==target) return 1; 
    if(currentIndex>target) return 0;
        
    //making currentKey from the changing parameter of the recursive call
    int currentKey=currentIndex;
        
    //if currentKey already exists then returning it value
    if(m.count(currentKey)) return m[currentKey];
        
    //exploring the two possibilities-oneJump & twoJump
    int oneJump=totalWays(currentIndex+1,target,m);
    int twoJump=totalWays(currentIndex+2,target,m);
        
    //storing the answer for currentKey in the unordered_map,so that we can use it in future 
    m[currentKey]=oneJump+twoJump;
        
    return m[currentKey];
}
    
 int main() 
{
    int n; 
    cin>>n;
    unordered_map<int,int>m;
    cout<< totalWays(0,n,m);
return 0;
}

//Time Complexity = O(n)
//Space Complexity = O(n)