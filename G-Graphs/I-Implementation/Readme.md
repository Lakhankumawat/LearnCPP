# Table of content
- [Adjacency Matrix](#adjacency-matrix)
    - [Code](AdjacencyMatrix.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantages)

## Adjacency Matrix
adjacency matrix is a matrix that maintain the information of adjacent vertices .
- A(i,j)= { 1 if there is a edge from vertex i to vertex j and 0 if there is no edge from vertex i to vertex j }

<!-- image to help better explain the concept -->
- Undirected Graph
![adjacency-matrix](https://tse1.mm.bing.net/th?id=OIP.odAL5j3sETwXtw8ElqbOOQHaC5&pid=Api&P=0&w=428&h=167)

- Directed Graph
![adjacency-matrix](https://www.tutorialride.com/images/data-structures/adjacency-matrix-directed-graph.jpeg)

### Algorithm
1. Initialized a 2D array Adj[][] globaly .
 - if undirected than n*(n-1)/2
 - else n*(n-1)
2. For each edge in adj[][], Update value at Adj[X][Y] to 1 and
 - if undirected graph than Adj[Y][X] to 1
 - denotes that there is a edge between X and Y.
3. Display the Adjacency Matrix after the above operation for all the pairs in adj[][].

### Properties
Time Complexity: O(n^2), where n is the number of vertices in a graph.

### Advantages
- easy to check when two if two nodes are have adirect edge or not.
- when  every node is connected to almost every node.

### Disadvantages
- large memory complexity .