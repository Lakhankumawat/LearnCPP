## 1. Topological Sort

Topological sorting is a linear ordering of vertices such that for every directed edge u --> v, vertex u comes before v in the ordering. Topological Sorting for a graph is not possible if the graph contains a cycle.

### Topological Sort Algorithm 

1) Identify a node with no incoming edges.
2) Add that node to the ordering.
3) Remove it from the graph i.e decrease all the indegrees of the neighbours of that node by 1.
3) Repeat until there aren't any more nodes with indegree zero.
   
 ### Topological Sort Time Complexity 
      O(V+E)
 ### Topological Sort Space Complexity(for this particular code)
      O(V)
 
 
   > My OUTPUT
   
   ![output](https://user-images.githubusercontent.com/85386222/156918450-e563baa9-2eb6-404c-b52d-b38c7b39bdb8.jpg)
