//-------------Multistage graph ( shortest path between source and destination)------------//
#include<iostream>
#include<climits> //maximum value of an object of int type
#include<algorithm>

using namespace std;

#define inf  INT_MAX
#define n 12

int shortestPath(int graph[n][n]);

int main(){
    int graph[n][n] ={  
      inf ,  9  ,  7  ,  3  , 12  , inf , inf , inf , inf , inf , inf , inf 
    , inf , inf , inf , inf , inf , 4   , 2   , 7   , inf , inf , inf , inf
    , inf , inf , inf , inf , inf , 2   , 7   , inf , inf , inf , inf , inf
    , inf , inf , inf , inf , inf , inf , inf , 11  , inf , inf , inf , inf
    , inf , inf , inf , inf , inf , inf , 11  ,  8  , inf , inf , inf , inf
    , inf , inf , inf , inf , inf , inf , inf , inf , 6   , 5   , inf , inf
    , inf , inf , inf , inf , inf , inf , inf , inf , 4   , 3   , inf , inf 
    , inf , inf , inf , inf , inf , inf , inf , inf , inf , 5   , 6   , inf
    , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , 4
    , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , 2
    , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , 5
    , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf , inf
    };

    cout<<"The Shortest Path cost : "<<shortestPath(graph);
}

//give shortest path for which is to be find from source to destination .
int shortestPath(int graph[n][n]){
    int cost[n] , i ,j;
    cost[n-1]=0;

    for(i= n-2 ; i>=0;i--){
        cost[i]=inf;
        for(j=1;j<n;j++){
            if(graph[i][j]==inf)
            continue;

            cost[i] = min(cost[i],graph[i][j]+cost[j]);
        }
    }
    return cost[0];
}