#include <bits/stdc++.h>
using namespace std;

bool TC(int N, vector<int> adj[]) {
        queue<int> q; 
        int total_traversal_vertex=0;
	    vector<int> indegree(N, 0);  // Mark all the vertices with zero indegree
	    for(int i = 0;i<N;i++) {
	        for(auto it: adj[i]) {
	            indegree[it]++; 
	        }
	    }
	    
	    for(int i = 0;i<N;i++) {
	        if(indegree[i] == 0) {
	        total_traversal_vertex++;
	            q.push(i); 
	        }
	    }

	    while(!q.empty()) {
	        int vertex = q.front(); 
	        q.pop(); 
	        for(auto it : adj[vertex]) {
	            indegree[it]--;
	            if(indegree[it] == 0) {
	            	total_traversal_vertex++;
	                q.push(it); 
	            }
	        }
	    }
	    if(total_traversal_vertex!=N) return 1;  
	    return 0;
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
    bool Cycle= TC(V,adj);
    if(Cycle==1){
    	cout<<"Cycle is present in directed graph"<<"\n";
    }
    else {
    	cout<<"Cycle is not present in directed graph"<<"\n";
    }
}


/*
It's implementation is same as BFS so,
Space Complexity :
Space Complexity of Detect_cycle_in_a_directed_graph = O(V)
Time Complexity :
Time Complexity of Detect_cycle_in_a_directed_graph = O(V+E)  
where V stands for number of vertices in Graph 
and E stands for number of edges in Graph
*/
