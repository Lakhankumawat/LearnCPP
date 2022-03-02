# Travelling Salesman Problem Using Dynamic Programming
This problem is an implementation of dynamic programming to find the shortest path from the travelling salesman problem (TSP).

## Problem Statement
Given a list of villages and the distances between each pair of villages, what is the shortest possible route that visits each village and returns to the origin village. In this case, the salesman needs to visit each city once without returning to the start city.

## Time Complexity
Since we are solving this using Dynamic Programming, we know that Dynamic Programming approach contains sub-problems.

Here after reaching ith node finding remaining minimum distance to that ith node is a sub-problem.

If we solve recursive equation we will get total (n-1) 2(n-2)  sub-problems, which is O (n2^n).

Each sub-problem will take  O (n) time (finding path to remaining (n-1) nodes).

Therefore total time complexity is O (n2^n) * O (n) = O (n^22^n)

Space complexity is also number of sub-problems which is O (n2^n)


