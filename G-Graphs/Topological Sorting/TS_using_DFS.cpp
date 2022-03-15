#include<bits/stdc++.h>
using namespace std;

// A recursive function used by topologicalSort using DFS
void topologicalSort(vector<int> adj[],int source,bool visited[],stack<int> &st){
   visited[source]=true;
   for(auto vertex:adj[source]){
   	 if(visited[vertex]==false){
   	 	topologicalSort(adj,vertex,visited,st);
   	 }
   }
   // Push current vertex to stack
   // which stores result
   st.push(source);
}
void DFS(vector<int> adj[],int V){
	stack<int> st;
	bool visited[V];
	memset(visited,false,sizeof(visited));  // Mark all the vertices as not visited
    // Call the recursive helper function
    // to store Topological
    // Sort starting from all
    // vertices one by one
	for(int i=0;i<V;i++){
		if(visited[i]==false){
		topologicalSort(adj,i,visited,st);
	}
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
void addEdge(vector<int> adj[],int x,int y){
	adj[x].push_back(y);
	/*
	0->1
	1->3
	2->3->4
	3->4
	*/
}
int main(){
	/*
	0->1->3->4
	      ^  ^
               \/
               2
	*/
	int V=5; //number of vertex in above graph is 5
	vector<int> adj[V];// making adjacency list
     addEdge(adj,0,1);
     addEdge(adj,1,3);
     addEdge(adj,2,3);
     addEdge(adj,2,4);
     addEdge(adj,3,4);
     DFS(adj,V);
}


/*
Space Complexity :
Space Complexity of DFS based Topological Sort Algo is same as Kahn's Algo = O(V)
Time Complexity :
Time Complexity of DFS based Topological Sort Algo is same as Kahn's Algo = O(V+E)  
where V stands for number of vertices in Graph 
and E stands for number of edges in Graph
*/
