# Bipartite Graph

A graph Can be said bipartite when  the graph can be **coloured using 2 colours only such a way that no 2 adjacent vertex will be of same colour**.

---
![Bipartite Graph](https://i0.wp.com/algorithms.tutorialhorizon.com/files/2019/09/Even-and-odd-cycles-Bipartite-Graph-1.png?resize=563%2C264)
![Bipartite](https://i1.wp.com/algorithms.tutorialhorizon.com/files/2019/09/Bipartite-Graph-3.png?resize=362%2C287)

---

##   **APPROACH::** <br>
It is possible to test whether a graph is bipartite or not using a BFS Algorithm
There are 2 ways to check for a bipartite graph:
*  A graph is a bipartite graph if and only if it is colorable by 2 colors only.
While doing BFS traversal m the given Graph, each node in the BFS tree is given its parent’s opposite color. If there exists an edge connecting the current vertex to a previously colored vertex with the same color, then we can say that the graph is not bipartite.

* A graph is a bipartite graph if and only if it contains an even cycle(Cycle contains even number of vertices)
If a graph contains an odd, we cannot divide the graph such that every adjacent vertex has a different color. If in the BFS, we find an edge, if both of its endpoints are at the same level, then the graph is not Bipartite and an odd-cycle is found.

*Here in the explanation, we use the 1st approach of the BFS algorithm to check whether a given graph I bipartite or not.*

---
## Algorithm to check Biparite or not:
   >  *We will be Doing it by BFS tarversal
        main moto is to check if all nodes are coloured with opposite colours using only 2 colours*
    <br>
    1. Take a **Queue** data structure ans push the source node, take array **color[node]={-1}** we have to color using 1 and 0.
    <br>
    2. colour queue\<top> with  0 pop from queue and push it's adjacent nodes into 
    queue and color with oppsoite colour if not coloured before<br>
    3. If coloured before with same colour then break , its not bipartite.
    <br>
    4.pop the top and push top's adjacent and colour with opposite colour
    5. pop and repeat previous steps until queue is empty
---
***P.S.:***  If the Graph is not have odd length cycle it's Biparite for sure.

---
## Complexity Analysis:
 >***Time Comlexity :*** O(N+E)
 <br>//N=number of nodes and E=no. of edges.
>***Space Complexity:*** O(N+E)+O(N)+O(N)
<br>//O(N+E) for adjacency List , O(N) for color array, O(N) for queue.
---
