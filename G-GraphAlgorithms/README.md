<!-- Table of content -->
# Table of content
- [Multistage Graph](#multistage-graph)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

- [Ford Fulkerson Algorithm](#ford---fulkerson-algorithm)
    - [PreRequisites](#prerequisites)
    - [Intution](#how-algorithm-works)
    - [Approach](#approach)
    - [Complexities](#time-and-space-complexity)
    - [Applications](#applications)
    


## Multistage Graph

- Multistage graph is a directed graph in which vertices can be divided in sets ( stages) such that vertices on same stage do not have edges between them and can't have a edge from present stage to previous stage .
-  Given a source and destination for which shortest path is to be find.
<!-- image to help better explain the concept -->
![Multistage Graph](https://res.cloudinary.com/codecrucks/images/w_1024,h_500,c_scale/f_webp,q_auto/v1634486462/multi-stage-graph-06/multi-stage-graph-06-1024x500.png?_i=AA)


### Algorithm

```

shortestPath(graph)
{
    cost[n] =0;
    for (i : n-2 to 1) do
    { cost[n-1] = INT_MAX
        for(j : 1 to n ) do
        {
            if (graph[i][j] = INT_MAX) then continue
            cost[i] = min(cost[i],graph[i][j]+cost[j]);
        }
    }

    return cost[0]
}

```

### Properties

- Time Complexity : O(n^2) ,where n is number of vertices
- Auxiliary Space : O(n^2) ,where n is number of vertices

### Advantages

- More efficient as overlapping of sub problem stored and use. 

### Disadvantage

- Take more space as have to store the repeated overlapped subproblem.

---

## Ford - Fulkerson Algorithm

It is a algorithm which is based in **greedy approach** for finding the maximum flow in a graph.

We can visualize the algorithm using a pipeline system in which every pipe have the different capacities and for a instance their is some water in each pipe and using algorithm we have to find amount of liquid flowed from source to sink.

![image](https://user-images.githubusercontent.com/86917304/168588090-43973475-e956-488f-8b42-29ec88258284.png)


### Prerequisites

- **Augmenting Path :-** The path available in a flow of the network.
- **Residual Graph :-** It shows the network of flow with additional possible flow.
- **Residual Capacity :-** Capacity of edge after taking out the flow from the max capacity/weighted edge.

### How algorithm works?

1. Firstly , Initialize the edges in a flow with `0`.
2. While there is an `augmenting path` in between f source and sink , add this path to the flow of the edge graph.
3. At last keep updating the residual graph.

### Approach

- All the edges is 0 at the beginning.
- Select any one of the arbitrary path from source S to T end. The selected path is `S-A-B-T`.
- The minimum capacity among the three edges is 2 `(B-T)`. Taking this in account update the `flow/Capacity` for each path.
- Select another path `S-D-C-T`. The min capacity between the 3 edges `S-D`.
- After that we consider the reverse-path lets take `B-D` and also selecting the path `S-A-B-D-C-T`. The min residual capacity amoung the edges is `D-C`.
- After adding the all flows we get **6** which is the max possible flow on the network of edges or graph.

### Time and Space Complexity

- **Time Complexity :-** `O(E*F)` where **E** are the number of edges anf **F** is maximum number flow that is possible.
- **Space Complexity :-** `O(E*N)` where **E** are the number of edges anf **N** is number of nodes.

### Applications

1. Water distribution pipeline
2. Bipartite matching problem
3. Circulation with demands

---
