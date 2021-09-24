/*
** Ford -Fulkerson Algorithm Code
** For video explanation, refer to Youtube channel in the link below:
** https://www.youtube.com/channel/UCX6rLou1VXXPVsORMVkUryg/videos
**
** PLease star the repo if you find code useful
*/

#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
#define vvi vector<vector<int>>

using namespace std;

//Bfs implementation to return the min_cap while traversing ,if present any
int bfs(int source, int sink, vvi &residualGraph, vector<int> &parent)
{

    fill(parent.begin(), parent.end(), -1);

    int V = residualGraph.size();

    parent[source] = -2;

    queue<pair<int, int>> Q;

    Q.push({source, INT_MAX});

    //Starting to traverse from front node

    while (!Q.empty())
    {
        int src = Q.front().first;
        int capacity = Q.front().second;

        Q.pop();

        for (int dest = 0; dest < V; dest++)
        {

            if (dest != src && parent[dest] == -1 && residualGraph[src][dest] != 0)
            {
                parent[dest] = src;

                int min_cap = min(capacity, residualGraph[src][dest]);

                if (dest == sink)
                    return min_cap;

                Q.push({dest, min_cap});
            }
        }
    }

    return 0;
}

void printAugmentedPaths(vvi augmentedPaths){
    
    for(auto c:augmentedPaths){
        for(auto s:c){
            cout<<s<<"->";
        }
        cout<<endl;
    }
    cout<<endl;
}

int ford_fulkerson(vvi &graph, int source, int sink)
{

    int max_flow = 0, min_cap = 0;

    //residual graph = total capacity - flow of material (graph)
    vvi residualGraph = graph;

    //To print the traversed augmented path -see definition if this does not make sense
    vvi augmentedPaths;

    //parent array for bfs operations
    vector<int> parent(graph.size(), -1);

    //while we get a min_cap in the graph i.e path from source to sink having min_cap

    while (min_cap = bfs(source, sink, residualGraph, parent))
    {

        //We get the min_capacity
        max_flow += min_cap;

        int u = sink;

        vector<int> currentAugmentedPath;

        ///Updating residual graph adding back and forward edges
        while (u != source)
        {

            currentAugmentedPath.push_back(u);

            int v = parent[u];

            //backedge
            residualGraph[u][v] += min_cap;
            //Updating the edge
            residualGraph[v][u] -= min_cap;

            u = v;
        }

        //Becuse loop will terminate without adding source
        currentAugmentedPath.push_back(source);

        //WE push the nodes from sink to source so reverse is necessary
        std::reverse(currentAugmentedPath.begin(),currentAugmentedPath.end());

        augmentedPaths.push_back(currentAugmentedPath);
    

    }

    printAugmentedPaths(augmentedPaths);

    return max_flow;
}


void addEdge(vvi &graph, int src, int dest, int cap)
{
    graph[src][dest] = cap;
}

int main()
{
    int V,E,u,v,w,src,sink;
    cin>>V>>E;
    
    cout<<"Enter Source & Sink Nodes"<<endl;
    cin>>src>>sink;
    //int V = 6;
    vector<vector<int>> graph(V, vector<int>(V, 0));

    while(E--){
        cin>>u>>v>>w;
        addEdge(graph, u, v, w);
    }
    // addEdge(graph, 0, 1, 4);
    // addEdge(graph, 0, 3, 3);
    // addEdge(graph, 1, 2, 4);
    // addEdge(graph, 2, 3, 3);
    // addEdge(graph, 2, 5, 2);
    // addEdge(graph, 3, 4, 6);
    // addEdge(graph, 4, 5, 6);

    cout << "Flow: " << ford_fulkerson(graph, src,sink) << endl;
    return 0;
}