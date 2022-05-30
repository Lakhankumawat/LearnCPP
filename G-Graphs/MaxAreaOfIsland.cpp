#include <bits/stdc++.h>
using namespace std;



// A utility function for DFS for a
// 2D matrix.It takes matrix and it's number of row and column and current position i and j as parameter.
int dfshelper(vector<vector<int>>&grid,int i,int j,int n,int m){
    //if we are outside the matrix or we are at water (grid[i][j]=0) then return 0.
    if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0)return 0;
    //making current position as 0 so that we do not count current area again.
    grid[i][j]=0;
    
    //adding 1 for current position and calling the function in all four direction
    return 1+dfshelper(grid,i-1,j,n,m)+dfshelper(grid,i+1,j,n,m)+
             dfshelper(grid,i,j-1,n,m)+dfshelper(grid,i,j+1,n,m);
    
}

//A utility function to do DFS on matrix and calculating maxarea
int dfs(vector<vector<int>>&grid,int i,int j, int n,int m){
    int area = 0;
    area = dfshelper(grid,i,j,n,m);                     // calling dfshelper
    return area;
}

int maxAreaOfIsland(vector<vector<int>>& grid) {
    int maxarea=0;
    int n = grid.size();                         //rows of matrix
    int m = grid[0].size();                      //column of matrix
    
    for(int i=0;i<n;i++){                        //matrix with 1 as a land and 0 as a water
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                int area = dfs(grid,i,j,n,m);    // calculating area of each island
                maxarea = max(maxarea, area);    //taking max of all islands
            }
        }
    }
    return maxarea;
}
int main() {
	int row,column;
	cin>>row>>column;                                   //rows of matrix and column of matrix
	vector<vector<int>>grid(row,vector<int>(column));   //creating matrix
	for(int i=0;i<row;i++){
	    for(int j=0;j<column;j++){
	        cin>>grid[i][j];
	    }
	}
	int area = maxAreaOfIsland(grid);                   //function to calculate maximum area of an island
	cout<<area<<endl;
	return 0;
}


//for example for input:
//                      8 13
//                      0 0 1 0 0 0 0 1 0 0 0 0 0
//                      0 0 0 0 0 0 0 1 1 1 0 0 0
//                      0 1 1 0 1 0 0 0 0 0 0 0 0
//                      0 1 0 0 1 1 0 0 1 0 1 0 0
//                      0 1 0 0 1 1 0 0 1 1 1 0 0
//                      0 0 0 0 0 0 0 0 0 0 1 0 0
//                      0 0 0 0 0 0 0 1 1 1 0 0 0
//                      0 0 0 0 0 0 0 1 1 0 0 0 0
// corresponding output is:
//                      6



