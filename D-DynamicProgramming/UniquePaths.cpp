//UNIQUE PATHS
//LINK OF THE QUESTION :- https://leetcode.com/problems/unique-paths/

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
    
int totalPaths(int currentRow,int currentCol,int targetRow,int targetCol,vector<vector<int>>&v)
{
    //base conditions
    if(currentRow==targetRow && currentCol==targetCol) return 1;//valid path
    if(currentRow<0 || currentCol<0 ||currentRow>targetRow ||currentCol>targetCol) return 0;//invalid path
        
    //if value is already present in the vector v ,then extract from it, no need to make recursive calls for it 
    if(v[currentRow][currentCol]!=-1) return v[currentRow][currentCol];
        
    //exploring the two possibilities :-1.right movement 2.downward movement
    int right = totalPaths(currentRow,currentCol+1,targetRow,targetCol,v); //when the robot moves right
    int down = totalPaths(currentRow+1,currentCol,targetRow,targetCol,v); //when the robot moves down
        
    //storing the answer for the current coordinate in v,so that we can use it in future
    v[currentRow][currentCol] = (right+down); 
    return v[currentRow][currentCol];
     
}
 int uniquePaths(int m, int n) 
{
    vector<vector<int>>v(m,vector<int>(n,-1));
    return totalPaths(0,0,m-1,n-1,v);
}

int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    cout<< uniquePaths(m,n) ;
return 0;
}