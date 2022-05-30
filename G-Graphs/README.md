# Table of content
- [Connected components in undirected graph](#connected-components-in-undirected-graph)
    - [Code](ConnectedComponentUndirectedGraph.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
- [Max Area Of Island](#max-area-of-island)
    - [Code](MaxAreaOfIsland.cpp)
    - [Approach](#approach)
    - [Properties](#properties-for-maximum-area-of-island)


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


## Max Area Of Island
- You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

The area of an island is the number of cells with a value 1 in the island.

Return the maximum area of an island in grid. If there is no island, return 0.

<!-- image to help better explain the concept -->

![Max Area Of Island](https://assets.leetcode.com/uploads/2021/05/01/maxarea1-grid.jpg)

here answer would be 6.

### Approach
```
maxAreaOfIsland(grid){
1. Traversing through matrix
2. Whenever position represent land i.e. 1 call dfs to calculate area of that island
3. Calculate maximum of all areas.
}

dfs(grid, i, j, row, column){
1. Creating parameter area to calculate area.
2. Setting its value to output return by utility helper function for dfs.
3. Return parameter area i.e. area of current island.
}

dfs(grid, i, j, row, column){
1. If we are outisde matrix or we on water i.e current position is 0 then return 0 as area would be 0.
2. Setting current position in matrix to be 0 so that we do not count current area again.
3. Returning 1(for current land's area) + area caluclated from all four sides.

}

```

### Properties for Maximum Area Of Island

- Time Complexity: O(n*m), where n is the number of rows and m is total number column in a matrix.

- Space Complexity: O(1).
