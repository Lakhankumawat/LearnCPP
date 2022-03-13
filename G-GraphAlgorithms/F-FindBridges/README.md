**PROBLEM**

***How to find all bridges in a given graph?*** 

An edge in an undirected connected graph is a bridge if removing it disconnects the graph. For a disconnected undirected graph, definition is similar, a bridge is an edge removing which increases number of disconnected components. 


Following are some example graphs with bridges highlighted with red color.

![Bridge-Image](https://user-images.githubusercontent.com/89836012/156887873-1295866e-8e90-4f49-96dc-d4a074cf9a08.png)

<img width="314" alt="Bridge1" src="https://user-images.githubusercontent.com/89836012/156888404-114f8c5c-88d2-42e0-9465-58c7ca83a94a.png">


**Algorithm**

1)We do DFS traversal of the given graph. 

2)In DFS tree an edge (u, v) (u is parent of v in DFS tree) is bridge if there does not exist any other alternative to reach u or an ancestor of u from subtree rooted with v.

3)The value low[v] indicates earliest visited vertex reachable from subtree rooted with v.

4)The condition for an edge (u, v) to be a bridge is, “low[v] > disc[u]”. 

