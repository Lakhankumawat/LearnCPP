# 1. Prims MST - Priority Queue
```
1) Initialize keys of all vertices as infinite and 
   parent of every vertex as -1.

2) Create an empty priority_queue pq.  Every item
   of pq is a pair (weight, vertex). Weight (or 
   key) is used used as first item  of pair
   as first item is by default used to compare
   two pairs.

3) Initialize all vertices as not part of MST yet.
   We use boolean array inMST[] for this purpose.
   This array is required to make sure that an already
   considered vertex is not included in pq again. This
   is where Ptim's implementation differs from Dijkstra.
   In Dijkstr's algorithm, we didn't need this array as
   distances always increase. We require this array here 
   because key value of a processed vertex may decrease
   if not checked.

4) Insert source vertex into pq and make its key as 0.

5) While either pq doesn't become empty 
    a) Extract minimum key vertex from pq. 
       Let the extracted vertex be u.

    b) Include u in MST using inMST[u] = true.

    c) Loop through all adjacent of u and do 
       following for every vertex v.

           // If weight of edge (u,v) is smaller than
           // key of v and v is not already in MST
           If inMST[v] = false && key[v] > weight(u, v)

               (i) Update key of v, i.e., do
                     key[v] = weight(u, v)
               (ii) Insert v into the pq 
               (iv) parent[v] = u
               
6) Print MST edges using parent array.
```
# 2. Kruskal MST - DSU

## Graph 

![graph (2)](https://user-images.githubusercontent.com/55774240/133893298-e1da527c-09b9-4a59-b51c-7bb99e12ffe8.png)

## After PRIMS or KRUSKAL

![graph (1)](https://user-images.githubusercontent.com/55774240/133893320-6f7d66d0-4f77-4ae7-83c1-9fda90092a01.png)


# 3. Boruvka's Algorithm

Boruvka’s Algorithm is a greedy algorithm used for finding the minimum spanning tree of a weighted undirected graph. It was first given in 1926 by Otakar Boruvka as a method of constructing an efficient electricity network. This algorithm is also known as Sollin’s algorithm.

## Algorithm:-
```
1) Input is a connected, weighted and un-directed graph.
2) Initialize all vertices as individual components (or sets).
3) Initialize MST as empty.
4) While there are more than one components, do following
   for each component.
      a)  Find the closest weight edge that connects this 
          component to any other component.
      b)  Add this closest edge to MST if not already added.  
5) Return MST.
```
Let us understand the algorithm with an example:-

![img (1)](https://cdn.codespeedy.com/wp-content/uploads/2020/06/Boruvkas-Algorithm.png)

In the above example, Figure-1 is the given graph and we have to find the minimum spanning tree using Boruvka’s algorithm. All the vertices are individual trees initially, and all of them are in different colors. <br/>
In Figure-2, for each tree, we select the smallest-weighted outgoing edge and add connect the corresponding affected tree. Vertex-1 has three outgoing edges and 3 is the smallest weighted edge that connects to vertex-2. Similarly, vertex-4 connect to vertex-1 and vertex-3 connects to vertex-5. So, finally, it contains two trees pink and green. This step is repeated until only one tree is left. <br/>
In Figure-3, the two trees pink and green are connected by edge 8 that connect vertex-3 and vertex-4 and finally we get a single tree and that is our minimum spanning tree.

## Output:-

![Boruvka's Output](https://user-images.githubusercontent.com/78689930/170871765-7cf3b448-d1a4-4317-b51d-127ea9c2eefa.PNG)


## Interesting Facts about Boruvka’s algorithm: 
```
1) Time Complexity of Boruvka’s algorithm is O(E log V) which is same as Kruskal’s and Prim’s algorithms.

2) Boruvka’s algorithm is used as a step in a faster randomized algorithm that works in linear time O(E).
```
