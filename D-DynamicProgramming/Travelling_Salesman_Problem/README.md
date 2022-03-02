# Travelling Salesman Problem Using Dynamic Programming
This problem is an implementation of dynamic programming to find the shortest path from the travelling salesman problem (TSP).

## Problem Statement

Given a list of cities and the distances between each pair of cities, what is the shortest possible route that visits each city and returns to the origin city. In this case, the salesman needs to visit each city once without returning to the start city.

## Solution

![image](https://user-images.githubusercontent.com/76259897/156395342-1710fcdf-5598-46c1-b51e-61aaa845bfef.png)

Here, the nodes represent cities, and the values in each edge denote the distance between one city to another. Let’s assume a salesman starts the journey from the city A. According to TSP, the salesman needs to travel all the cities exactly once and get back to the city A by choosing the shortest path. Here the shortest path means the sum of the distance between each city travelled by the salesman, and it should be less than any other path.

## Time Complexity
Since we are solving this using Dynamic Programming, we know that Dynamic Programming approach contains sub-problems.

Here after reaching ith node finding remaining minimum distance to that ith node is a sub-problem.

If we solve recursive equation we will get total (n-1)2^(n-2)  sub-problems, which is**O(n2^n)**

Each sub-problem will take  O (n) time (finding path to remaining (n-1) nodes).

Therefore total time complexity is O (n2^n) * O (n) = **O(n^22^n)**

Space complexity is also number of sub-problems which is **O(n2^n)**


