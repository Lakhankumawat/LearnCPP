//UNIQUE PATHS II
//LINK OF THE PROBLEM :- https://leetcode.com/problems/unique-paths-ii/

#include<bits/stdc++.h>
using namespace std;

int totalPaths(int currRow,int currCol,int targetRow,int targetCol, vector<vector<int>>&obstacleGrid,vector<vector<int>>&v)
{
    //base conditions
    if(currRow == targetRow && currCol == targetCol && obstacleGrid[currRow][currCol]==0) //valid path
            return 1;  
        
    if(currRow<0||currCol<0||currRow>targetRow||currCol>targetCol|| obstacleGrid[currRow][currCol]==1) //invalid path
            return 0;  
        
     //if value is already present in the vector v ,then extract from it, no need to make recursive calls for it 
    if(v[currRow][currCol]!=-1) return v[currRow][currCol];
        
    //exploring the two possibilities :-1.right movement 2.downward movement
    int right = totalPaths(currRow,currCol+1,targetRow,targetCol,obstacleGrid,v); //when the robot moves right
    int down = totalPaths(currRow+1,currCol,targetRow,targetCol,obstacleGrid,v); //when the robot moves down
        
    //storing the answer for the current coordinate in v,so that we can use it in future
    v[currRow][currCol] = (right+down);
    return v[currRow][currCol];
}


int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
{
    int r = obstacleGrid.size(); //no. of rows
    int c = obstacleGrid[0].size(); //no. of columns
        
    vector<vector<int>>v(r,vector<int>(c,-1));

    //if we have a 1X1 matrix and obstacleGrid[0][0]=1,then we don't have any valid path
    if(r==1 && c==1 && obstacleGrid[r-1][c-1]==1) return 0; 

        
    return totalPaths(0,0,r-1,c-1,obstacleGrid,v);
}


int main()
{
    int m,n;
    cin>>m; //total number of rows
    cin>>n; //total number of columns
    vector<vector<int>>obstacleGrid(m,vector<int>(n,0));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cin>>obstacleGrid[i][j];
    }
    cout<< uniquePathsWithObstacles(obstacleGrid) ;
return 0;
} 
