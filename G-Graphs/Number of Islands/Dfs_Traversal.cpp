// Time complexity : O(M×N) where M is the number of columns and N is the number of rows.

// Space complexity : worst case O(M×N) in case that the grid map is filled with lands where DFS goes by M×N deep.


#include<bits/stdc++.h>
using namespace std;
void DFS(vector<vector<char>>& grid, int i, int j) {
        // boundary checking
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;

        // return if current position is of water or is already visited
        if(grid[i][j] == '2' || grid[i][j] == '0')
            return;

        // mark the current as visited
        grid[i][j] = '2';

        // do DFS in all 4 directions
        DFS(grid, i+1, j);
        DFS(grid, i, j-1);
        DFS(grid, i-1, j);
        DFS(grid, i, j+1);
    }

int countIslands(vector<vector<char>>& grid) {
        // We can treat the matrix grid as a grid. Each Island is a
        // connected component. The task is to find no. of connected components
        // in the graph.

        int islands = 0;
        // We make each 1 as 2 in when it is visited
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                // do DFS in case has not been visited and there is land
                if(grid[i][j] == '1') {
                    DFS(grid, i, j);
                    ++islands;
                }
            }
        }
        return islands;
}
int main(){
    int n,m;
    cout<<"Enter the number of rows ";
    cin>>n;
    cout<<"Enter the number of columns ";
    cin>>m;
    cout<<"Enter the values of grid\n";
   vector<vector<char>>grid(n,vector<char>(m));
     for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
                cin>>grid[i][j];
        }
     }

    cout << "Number of islands is: " << countIslands(grid);
    return 0;
}
