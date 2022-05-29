#include <bits/stdc++.h>
using namespace std;

#define V 6

// Using BFS as a searching algorithm
bool bfs(int Grp[V][V], int src, int to, int parent[])
{
    bool visited[V];
    memset(visited, 0, sizeof(visited)); // Defining the visited array as zero

    queue<int> q;
    q.push(src);
    visited[src] = true; // Marking the root node as visited
    parent[src] = -1;    // And parent as -1 as its also a parent node.

    while (!q.empty())
    {
        int u = q.front(); // Taking out a node to traverse
        q.pop();

        for (int v = 0; v < V; v++)
        {
            if (visited[v] == false && Grp[u][v] > 0) // and checking if visited or not
            {
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return (visited[to] == true);
}

// Applying fordfulkerson algorithm
int fordFulkerson(int graph[V][V], int src, int to)
{
    int u, v;

    int Grp[V][V];
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            Grp[u][v] = graph[u][v]; // Transfering the edges

    int parent[V];
    int max_flow = 0;

    // Updating the residual values of edges
    while (bfs(Grp, src, to, parent))
    {
        int path_flow = INT_MAX;
        for (v = to; v != src; v = parent[v]) // Here is loop in which we find the min edges that will result optimal flow
        {
            u = parent[v];
            path_flow = min(path_flow, Grp[u][v]);
        }

        for (v = to; v != src; v = parent[v])
        {
            u = parent[v];

            // Updating the changes
            Grp[u][v] -= path_flow;
            Grp[v][u] += path_flow;
        }

        // Adding the path flows
        max_flow += path_flow;
    }

    return max_flow;
}

int main()
{
    int graph[V][V] = {{0, 8, 0, 0, 3, 0},
                       {0, 0, 9, 0, 0, 0},
                       {0, 0, 0, 0, 7, 2},
                       {0, 0, 0, 0, 0, 5},
                       {0, 0, 7, 4, 0, 0},
                       {0, 0, 0, 0, 0, 0}};

    cout << "Max flow in the graph is: " << fordFulkerson(graph, 0, 5) << endl;

    return 0;
}
