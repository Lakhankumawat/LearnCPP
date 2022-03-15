#include <bits/stdc++.h>
using namespace std;

vector<int> TC(int N, vector<int> adj[]) {
        queue<int> q; 
	    vector<int> indegree(N, 0);  // Mark all the vertices with zero indegree
	    for(int i = 0;i<N;i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++; 
	        }
	    }
	    
	    for(int i = 0;i<N;i++) {
	        if(indegree[i] == 0) {
	            q.push(i); 
	        }
	    }
	    vector<int> topo;
	    while(!q.empty()) {
	        int vertex = q.front(); 
	        q.pop(); 
	        topo.push_back(vertex);
	        for(auto it : adj[vertex]) {
	            indegree[it]--;
	            if(indegree[it] == 0) {
	                q.push(it); 
	            }
	        }
	    }
	    return topo;
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
    vector<int> print= TC(V,adj);
    for(int i=0;i<print.size();i++){
    	cout<<print[i]<<" ";
    }
}


/*
Space Complexity :
Space Complexity of BFS based Topological Sort Algo is same as Kahn's Algo = O(V)
Time Complexity :
Time Complexity of BFS based Topological Sort Algo is same as Kahn's Algo = O(V+E)  
where V stands for number of vertices in Graph 
and E stands for number of edges in Graph
*/