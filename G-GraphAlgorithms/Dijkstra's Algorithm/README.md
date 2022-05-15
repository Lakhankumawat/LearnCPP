# [Dijkstra's Algorithm using Priority Queue](https://github.com/maheshdbabar9340/LearnCPP/blob/maheshdbabar9340-patch-1/G-GraphAlgorithms/Dijkstra's%20Algorithm/DijkstrasUsingPriorityQueue.cpp)

Objective : We will see the implementation of the Dijkstra algorithm using the priority queue of C++ STL. Dijkstra algorithm is used to find the shortest path from the source to the destination in an undirected graph.

Let's take an example, A graph having weight on the edges is given as below:

![try](https://user-images.githubusercontent.com/53929423/163178252-bfcdb6f7-4eba-4bf6-893f-c97d489eb485.PNG)


Let us consider a source vertex 0, we have to find the shortest path from the source vertex to all the vertices in the graph.

Source vertex = 0

![tr](https://user-images.githubusercontent.com/53929423/163178272-cf69d282-564d-48bc-ad34-de361bc2ab3a.PNG)


# Algorithm 

    1. Mark initial distance from the source is infinite.

    2. Create an empty priority_queue PQ. Every item of PQ is a pair (weight, vertex). Weight (or distance) is used as the first item of pair as the first item is by default used to compare two pairs.

    3. Insert source vertex into PQ and make its distance as 0.

    4. Until the priority queue defined as PQ does not become empty. Perform the operations a and b.

        a. Extract minimum distance vertex from PQ and let it be u. <br>

        b. Loop through all adjacent of u and do

            Following for every vertex v.
            // If there is a shorter path to v
            // through u.

            If dist[v] > dist[u] + weight(u, v) // distance of ( v) > distance of (u) and weight from u to v <br>

              a.  Update distance of v, i.e., do
                  dist[v] = dist[u] + weight(u, v) <br>

              b.  Insert v into the pq (Even if v is already there) <br>

     5. Loop through the dist[] array to print the shortest paths from source to all the vertices.
     
     
# Complexity 

    Time Complexity = O(V^2). 
    If the input graph is represented using adjacency list, it can be reduced to O(E log V) with the help of a binary heap.
  
# Output for the given problem

![image](https://user-images.githubusercontent.com/53929423/163178809-b85f608a-6528-4b09-bb87-b8d1d1d4a5b4.png)
