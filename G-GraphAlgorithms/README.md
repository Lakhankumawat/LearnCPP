<!-- Table of content -->
# Table of content
- [Dynamic Programming](#dynamic-programming)
 - [Multistage Graph](#multistage-graph)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Dynamic Programming

- In this process the problem is broken into subproblems ,And by the memoization or tabulation of overlapping subproblems repeated subproblem is stored hence , Reduce time complexity . 

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