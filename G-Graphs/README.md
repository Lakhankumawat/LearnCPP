# Table of content
- [Connected components in undirected graph](#connected-components-in-undirected-graph)
    - [Code](ConnectedComponentUndirectedGraph.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)


## Connected components in undirected graph
- connected components in a undirected graph ia a subgraph in which each pair of node in the subgraph have path between them .

<!-- image to help better explain the concept -->

![Connected components in undirected graph](https://media.geeksforgeeks.org/wp-content/uploads/20190401132549/Diagram.jpg)

### Algorithm
```
ConnectedComponent(){
1. initialized all vertices as unchecked
2. for all vertices
    - if not checked than apply dfs by calling dfs(v,checked[]) function .
}

dfs(v,checked[]){
1. mark v as checked and diaplay it
2. for neighbouring vertex 
   - if not checked apply dfs to unchecked neighbouring vertex
}

```

### Properties

- Time Complexity: O(V+E), where V is the number of vertices and E is total number edges in a graph.

- Space Complexity: O(n) , where n is total number of vertices in graph .

### Advantages
- use in the social networking sites, connected components are used to depict the group of people who are friends of each other or who have any common interest
- It can also be used to convert a graph into a Direct Acyclic graph of strongly connected components .
