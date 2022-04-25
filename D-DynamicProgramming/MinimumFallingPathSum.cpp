//MINIMUM FALLING PATH SUM
//LINK OF THE PROBLEM :- https://leetcode.com/problems/minimum-falling-path-sum/

#include<bits/stdc++.h>
using namespace std;

int minSum(int currRow,int currCol,int m,int n,vector<vector<int>>&matrix, vector<vector<int>>&v)
{
    //base conditions
    if(currCol < 0 || currCol >= n) return 100001; 
    if(currRow == m-1) return matrix[currRow][currCol];
        
     //if value is already present in the vector v ,then extract from it, no need to make recursive calls for it 
    if(v[currRow][currCol]!=-1) return v[currRow][currCol];
        
    //exploring the three possibilities :-1.Left Diagonal movement, 2.downward movement, 3.Right movement
    int leftD = matrix[currRow][currCol] + minSum(currRow+1,currCol-1,m,n,matrix,v);//moving Diagonally Left 
    int down = matrix[currRow][currCol] + minSum(currRow+1,currCol,m,n,matrix,v);   //moving Downward 
    int rightD = matrix[currRow][currCol] + minSum(currRow+1,currCol+1,m,n,matrix,v);//moving Diagonally Right
        
    //storing the answer for the current coordinate in v,so that we can use it in future
    v[currRow][currCol] = min(down,min(leftD,rightD));
    return v[currRow][currCol];
}
int minFallingPathSum(vector<vector<int>>& matrix) 
{
    int m = matrix.size();    //total number of rows
    int n = matrix[0].size();//total number of columns
    vector<vector<int>>v(m,vector<int>(n,-1));
    int ans=100001;
    for(int i=0;i<n;i++)
        ans= min(ans,minSum(0,i,m,n,matrix,v));
        
return ans;
}

int main()
{
    int n;
    cin>>n; //dimension of the matrix
    vector<vector<int>>matrix(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    }

    cout<<minFallingPathSum(matrix);
return 0;
}