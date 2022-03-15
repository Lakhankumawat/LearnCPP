#include<bits/stdc++.h>
using namespace std;


void findTopoSort(int vertex, vector<bool> &visited, stack<int> &st, vector<pair<int,int>> adj[]) {
    visited[vertex] = true; 
    for(auto  i : adj[vertex]) {
        if(visited[i.first]==false) {
            findTopoSort(i.first, visited, st, adj); 
        }
    }
    st.push(vertex);
}

void shortestPath(int source,int V,vector<pair<int,int>> adj[]){
	vector<bool> visited(V,false);   // Mark all the vertices as not visited
	stack<int> st;
	for (int i = 0; i < V; i++){
		if (visited[i]==false) {
			findTopoSort(i, visited, st, adj); 	// finding Topological Sort using DFS
		}
			}

		vector<int> distance(V,INT_MAX);  // Mark all the distance/weight as Infinity/MAx_INT
		distance[source]=0;

while(!st.empty()) 
	{  
		int vertex = st.top(); 
		st.pop(); 
 
		    for(auto  i : adj[vertex]) {
		        if(distance[vertex] +  i.second < distance[ i.first]) {   //If initial distance is greater then current distance then we update the distance
		            distance[ i.first] = distance[vertex] +  i.second; 
		        }
		}
	} 
	//Printing Shortest Path
	for(int i=0;i<V;i++){
		if(distance[i]==INT_MAX){
			cout<<"INF"<<" ";
		}
		else cout<<distance[i]<<" ";
	}

		}

void addEdge(vector<pair<int,int>> adj[],int x,int y,int weight){
	adj[x].push_back({y,weight});
}

int main(){
                   /*{ 0, 2, 0, 0, 1 ,0},
                     { 0, 0, 3, 0, 0, 0},
                     { 0, 0, 0, 6, 0, 0},
                     { 0, 0, 0, 0, 0, 0},
                     { 0, 0, 2, 0, 0, 4},
                     { 0, 0, 0, 1, 0, 0}  */

 int V=6;
 vector<pair<int,int>> adj[V];
 addEdge(adj,0,1,2);
 addEdge(adj,0,4,1);
 addEdge(adj,1,2,3);
 addEdge(adj,2,3,6);
 addEdge(adj,4,2,2);
 addEdge(adj,4,5,4);
 addEdge(adj,5,3,1);

	shortestPath(0, V, adj); 
return 0;
}

/*
Time Complexity :
Time Complexity of Shortest path in a directed acyclic graph using Topological Sort Algo = O(V+E)  
where V stands for number of vertices in Graph 
and E stands for number of edges in Graph
*/