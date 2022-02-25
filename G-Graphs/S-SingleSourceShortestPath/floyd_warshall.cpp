
#include<iostream>
#include<vector>
#define INT_MAX 10000
using namespace std;


vector<vector<int> > floyd_warshall(vector<vector<int>> graph){


vector<vector<int>> dist(graph);

int v=graph.size();//vertices in the graph
for(int k=0;k<v;k++){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
         if(dist[i][j]> dist[i][k]+dist[k][j]){
            dist[i][j]=dist[i][k]+dist[k][j];
            }
        }
    }
}
return dist;
}


int main(){

    //4 vertices (4x4 matrix basically)
    vector<vector<int> > graph={
    {0,3,INT_MAX,7},
    {8,0,3,INT_MAX},
    {5,INT_MAX,0,1},
    {2,INT_MAX,INT_MAX,0}
    };


    auto result = floyd_warshall(graph);
    for(int i=0;i<result.size();i++){
    for(int j=0;j<result.size();j++){
    cout<<result[i][j]<<" ";}

    cout<<endl;
    }


return 0;
}
