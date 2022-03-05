
**Articulation Point:** A vertex in a graph is an articulation point (or cut vertex) if removing it increases number of connected components.

**Application:** Find single point of failure in a network and remove it by either adding more edge or redesigning the network.This increase network reliability.  


The idea is to use DFS (Depth First Search). In DFS, we follow vertices in tree form called DFS tree. In DFS tree, a vertex u is parent of another vertex v, if v is discovered by u (obviously v is an adjacent of u in graph). In DFS tree, a vertex u is articulation point if one of the following two conditions is true. 
1) u is root of DFS tree and it has at least two children. 
2) u is not root of DFS tree and it has a child v such that no vertex in subtree rooted with v has a back edge to one of the ancestors (in DFS tree) of u.

Following figure shows same points as above with one additional point that a leaf in DFS Tree can never be an articulation point.

![ArticulationPoints](https://user-images.githubusercontent.com/56593431/156880020-7190428b-5bca-4a05-9eb5-83f99ff45409.png)


We do DFS traversal of given graph with additional code to find out Articulation Points (APs). In DFS traversal, we maintain a parent[] array where parent[u] stores parent of vertex u. Among the above mentioned two cases, the first case is simple to detect. For every vertex, count children. If currently visited vertex u is root (parent[u] is NIL) and has more than two children, print it. 

How to handle second case? The second case is trickier. We maintain an array disc[] to store discovery time of vertices. For every node u, we need to find out the earliest visited vertex (the vertex with minimum discovery time) that can be reached from subtree rooted with u. So we maintain an additional array low[] which is defined as follows. 

low[u] = min(disc[u], disc[v]) 
where v is an ancestor of u and there is a back edge from 
some descendant of u to v.

**Time Complexity** = The above function is simple DFS with additional arrays. So time complexity is same as DFS which is O(V+E) for adjacency list representation of graph.

