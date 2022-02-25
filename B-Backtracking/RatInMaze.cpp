

//------------------------------------PROBLEM :Rat In Maze (Maze Runner LOL :)  ----------------------------------
#include <bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[10][10],int soln[][10],int i,int j,int m,int n){

    //Hits the base case path found , prints path 
if(i==m && j==n){
    soln[m][n]=1;
    for(int i=0;i<=m;i++){
        for (int j = 0; j <=n; j++)
        {
           cout<<soln[i][j]<<" ";
        }
        cout<<endl;        
    }
    cout<<endl;
    return true;
}

//Rat should be inside the grid
if(i>m || j>n){
    return false;
}

//IF rat encounters a block
if(maze[i][j]=='X'){
    return false;
}

//assuming solution exits throush current cell and going further
soln[i][j]=1;


bool rightSuccess = ratInMaze(maze,soln,i,j+1,m,n);
bool downSuccess = ratInMaze(maze,soln,i+1,j,m,n);

//Backtracking
soln[i][j]=0;

if(rightSuccess|| downSuccess){
    return true;
}
return false;

}


int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

char maze[10][10]={
     "0000",
     "000X",
     "000X",
     "0X00",
};

int soln[10][10]={0};
int m=4,n=4; //number of rows and column

bool isPathfound= ratInMaze(maze,soln,0,0,m-1,n-1);

if(isPathfound)
cout<<"Path Found"<<endl;
else cout<<"No Path Found"<<endl;
return 0;
}
