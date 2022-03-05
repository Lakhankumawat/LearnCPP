/* A C++ program to find bridges in a given undirected graph

Time Complexity: The above function is simple DFS with additional arrays.
                 So time complexity is same as DFS which is O(V+E) for 
                 adjacency list representation of graph.
Space Complexity: O(V*E) for making adj.
*/

#include<bits/stdc++.h>
using namespace std;

int V,E;
unordered_map<int,vector<int>>adj;
// A recursive function that finds and prints bridges using
// DFS traversal
// u --> The vertex to be visited next
void bridgeUtil(int u, bool visited[], int disc[],int low[], int parent[])
{
	// A static variable is used for simplicity, we can
	// avoid use of static variable by passing a pointer.
	static int time = 0;

	// Mark the current node as visited
	visited[u] = true;

	// Initialize discovery time and low value
	disc[u] = low[u] = ++time;

	// Go through all vertices adjacent to this
	list<int>::iterator i;
	for (auto i:adj[u])
	{
		int v = i; // v is current adjacent of u

		// If v is not visited yet, then recur for it
		if (!visited[v])
		{
			parent[v] = u;
			bridgeUtil(v, visited, disc, low, parent);

			// Check if the subtree rooted with v has a
			// connection to one of the ancestors of u
			low[u] = min(low[u], low[v]);

			// If the lowest vertex reachable from subtree
			// under v is below u in DFS tree, then u-v
			// is a bridge
			if (low[v] > disc[u])
			cout << u <<" " << v << endl;
		}

		// Update low value of u for parent function calls.
		else if (v != parent[u])
			low[u] = min(low[u], disc[v]);
	}
}

// DFS based function to find all bridges. It uses recursive
// function bridgeUtil()
void bridge()
{
    //keeps track of visited vertices
	bool visited[V];

    //Stores discovery times of visited vertices
	int disc[V];

    //Stores parent vertices in DFS tree
	int parent[V];

    int low[V];

	// Initialize parent and visited arrays
	for (int i = 0; i < V; i++)
	{
		parent[i] = -1;
		visited[i] = false;
	}
	// Call the recursive helper function to find Bridges
	// in DFS tree rooted with vertex 'i'
	for (int i = 0; i < V; i++){
		if (visited[i] == false){
			bridgeUtil(i, visited, disc, low, parent);
        }
    }
}

// Driver program to test above function
int main()
{
	cin>>V>>E; //no of vertices and edges

     for(int i=0;i<E;i++){
        int src,dst;
        cin>>src>>dst;
        adj[src].push_back(dst);
    }
	bridge();
	return 0;
}





