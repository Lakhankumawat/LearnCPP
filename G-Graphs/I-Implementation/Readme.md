# Table of content
- [Adjacency Matrix](#adjacency-matrix)
    - [Code](AdjacencyMatrix.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantages](#disadvantages)

- [Add and Delete edge of directed graph in Adjacency Matrix](#add-and-delete-edge-of-directed-graph-in-adjacency-matrix)
    - [Code](DelAddEdgeAdjacencyMatrix.cpp)
    - [Add and Delete edge Algorithm](#Add-and-Delete-edge-Algorithm)
    - [Propertie](#propertie)
    - [Advantage](#advantage)
    - [Disadvantage](#disadvantage)

- [Path Matrix](#path-matrix)
    - [Code](PathMatrix.cpp)
    - [Path Matrix Algorithm](#path-matrix-algorithm)
    - [Path Matrix Properties](#path-matrix-properties)
    - [Path Matrix Advantages](#path-matrix-advantages)
    - [Path Matrix Disadvantage](#path-matrix-disadvantage)

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

## Add and Delete edge of directed graph in Adjacency Matrix

- INSERTION / addition - an edge (i, j ) requires changing value of adj[i][j] from 0 to 1.
<!-- image to help better explain the concept -->
- Addition of an edge in directed graph
![add-and-delete-edge-of-directed-graph-in-adjacency-matrix](https://www.simplilearn.com/ice9/free_resources_article_thumb/Graph%20Data%20Structure%20-%20Soni/add-edge-operation-on-graph-in-data-structure.png)

- DELETION - an edge (I,j ) requires changing value of adj[i][j] from 1 to 0.

<!-- image to help better explain the concept -->
- Deletion of an edge in directed graph
![add-and-delete-edge-of-directed-graph-in-adjacency-matrix](https://www.simplilearn.com/ice9/free_resources_article_thumb/Graph%20Data%20Structure%20-%20Soni/delete-edge-operation-on-graph-in-data-structure.png)


### Add and Delete edge Algorithm
1. Addition : For a new edge in adj[][], Update value at Adj[X][Y] to 1 and
2. Deletion : For deleting a existing edge in adj[][], Update value at Adj[X][Y] to 0 .

### Propertie
- Time Complexity : O(1) , for both addition and deletion .
- Space Complexity : O(n^2) , where n is the total number of vertex .

### Advantage
- Add an edge in graph in constant time .
- Delete an edge in the graph in constant time .

### Disadvantage
- If using adjacency matrix traversing graph using DPS/BFS algorithms require O(n^2) time else where using adjacency list only O(v+e) time required , (where v is vertex and e is edge).

## Path Matrix

- Path Matrix tells us the is there exist a pth between two vertices of a graph . 
- By using adjacency matrix we get path matrix  .
- by multipling adjacency matrix to itself we get power matrix of 1 , 2, 3...n . wherwe n is the total number of vertex .
- so path matrix is adjacency matrix of power of its total vertex present in it .
- If all entries are 1 then graph is strongly connected .

<!-- image to help better explain the concept -->
![Path Matrix](https://www.researchgate.net/publication/313232993/figure/fig2/AS:457319269048322@1486044818348/Example-of-network-communicability-calculus-using-adjacency-matrices-Given-initial.png)
---
The path number in the path matrix is converted to 1 if atleast one path is present between two vertex .


### Path Matrix Algorithm

```

power_matrix(power , reesult)
1. copy all the entrires of adjacency matrix to result matrix
2. obtain matrices for all powers .
   - by multiply result matrix obtain in each step by adjacency matrix .  

```

### Path Matrix Properties

- Time Complexity : O(p(n^3)) ,where n is number of vertices
- Space Complexiy : O(n^2) , where n is total number of vertices

### Path Matrix Advantages

- Help to identify if there is a path or not . 

### Path Matrix Disadvantage

- time complexity is large
- Take more space .

---
