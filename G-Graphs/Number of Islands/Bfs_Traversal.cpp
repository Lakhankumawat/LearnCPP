// Time complexity : O(M×N) where M is the number of columns and N is the number of rows.

// Space complexity : O(min(M,N)) because in worst case where the grid is filled with lands, the size of queue can grow up to min(M,N).

#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; //For moving down,left,right,up
void BFS(vector<vector<char>>& grid,int i,int j){
        int R = grid.size();
        int C = grid[0].size();
        queue<pair<int, int>> q;
        // We make each 1 as 2 in when it is visited
        grid[i][j] = '2'; // marking the ith row and jth column as visited
        q.push({i, j});
        while(!q.empty()) {
            auto p = q.front();
            q.pop();
            for(auto x : directions) {
                int nr = p.first + x.first;
                int nc = p.second + x.second;
                //If nr and nc are not out of bound and if there is a land
                if(!(nr < 0 or nr >= R or nc < 0 or nc >= C or grid[nr][nc] != '1')) {
                    grid[nr][nc] = '2'; // marking the ith row and jth column as visited
                    q.push({nr, nc});
                }
            }
        }
}
int countIslands(vector<vector<char>>& grid) {
         int R = grid.size();
        if(R == 0) return 0;
        int C = grid[0].size();

        int islands = 0;

        for(int i = 0; i<R; i++) {
            for(int j = 0; j<C; j++) {
                // do BFS in case has not been visited and there is land
                if(grid[i][j] == '1') {
                    islands++;
                    BFS(grid,i,j);
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
