##  Breadth First Search (BFS) for a graph
#### Approach
Let's talk about C++ implementation of Breadth First Search for a graph. So it is almost similar to the Breadth First Traversal of a tree. But since a graph may have cycles due to which we have to come across the same node more than once. To overcome this issue we maintain a Boolean visited array.
#### Visualization:
![enter image description here](https://media.geeksforgeeks.org/wp-content/uploads/bfs-5.png)
Lets take an example, as you can see in the following graph, we start traversal from vertex 2. When we come to vertex 0, we look for all adjacent vertices of it. 2 is also an adjacent vertex of 0. If we don’t mark visited vertices, then 2 will be processed again and it will become a non-terminating process. A Breadth-First Traversal of the following graph is 2, 0, 3, 1.

#### Code Approach:
 1. We will create a function for checking if vertices is visited or not.
 2. If the node is visited then we will enqueue it
 3. After we are done then we will  dequeue a vertex from the queue and will print it.
#### Time Complexity:
Here in this case the time complexity will be **O(V+E)** where V is no. of vertices & E is no. of edges in the graph.



