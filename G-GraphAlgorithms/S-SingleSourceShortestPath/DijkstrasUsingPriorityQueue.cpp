#include <bits/stdc++.h>
using namespace std;
#define INF 0x3f3f3f3f // The distance to other vertices is initialized as infinite
// iPair ==> Integer Pair
typedef pair<int, int> iPair;
class Graph // Graph structure
{
    int V;                     // No. of vertices in the graph
    list<pair<int, int>> *adj; // the list of pair to store vertex and its weight
public:
    // Constructor that accept number of vertices in graph
    Graph(int V) // allocate the vertex memory
    {
        this->V = V;              // assign the vertex
        adj = new list<iPair>[V]; // allocate space for vertices
    }
    void addEdge(int u, int v, int w); // add edges in the graph
    // prints shortest path from s
    void shortestPathingraph(int s); // pass source vertex
};
void Graph::addEdge(int u, int v, int w) // add an edge
{
    adj[u].push_back(make_pair(v, w)); // make a pair of vertex and weight and // add it to the list
    adj[v].push_back(make_pair(u, w)); // add oppositely by making a pair of weight and vertex
}
// Calling function outside the Graph class
void Graph::shortestPathingraph(int src) // src is the source vertex
{
    // Create a priority queue to store vertices that
    // are being preprocessed.
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    vector<int> dist(V, INF);   // All distance from source are infinite
    pq.push(make_pair(0, src)); // push spurce node into the queue
    dist[src] = 0;              // distance of source will be always 0
    while (!pq.empty())
    { // While queue is not empty
        // Extract the first minimum distance from the priority queue
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance
        int u = pq.top().second;
        pq.pop();
        // 'i' is used to get all adjacent vertices of a vertex
        list<pair<int, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
        {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = (*i).first;
            int weight = (*i).second;

            // If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight)
            {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    printf("Vertex \tDistance from Source\n"); // Print the result
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]); // The shortest distance from source
}
int main()
{
    int V = 9;          // vertices in given graph are 9
    Graph g(V);         //  call Constructor by creating an object of graph
    g.addEdge(0, 1, 4); // add root node with neighour vertex and weight
    g.addEdge(0, 7, 8);
    g.addEdge(1, 2, 8);
    g.addEdge(1, 7, 11);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 8, 2);
    g.addEdge(2, 5, 4);
    g.addEdge(3, 4, 9);
    g.addEdge(3, 5, 14);
    g.addEdge(4, 5, 10);
    g.addEdge(5, 6, 2);
    g.addEdge(6, 7, 1);
    g.addEdge(6, 8, 6);
    g.addEdge(7, 8, 7);
    g.shortestPathingraph(0); // call the function to find shortest path of graph
    return 0;                 // end of main function()
}