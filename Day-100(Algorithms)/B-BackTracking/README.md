## 1. [N-Queen Problem](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/B-BackTracking/N-Queen.cpp)
<img src="https://user-images.githubusercontent.com/55774240/113557080-14ab8300-961b-11eb-8539-22a45b296479.png" width="200" />

The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other. For example, following is a solution for 4 Queen problem.
<hr>

### Backtracking Algorithm 

1) Start in the leftmost column
2) If all queens are placed
    return true
3) Try all rows in the current column.  Do following
   for every tried row.
    a) If the queen can be placed safely in this row
       then mark this [row, column] as part of the 
       solution and recursively check if placing  
       queen here leads to a solution.
    b) If placing queen in [row, column] leads to a
       solution then return true.
    c) If placing queen doesn't lead to a solution 
       then unmark this [row, column] (Backtrack) 
       and go to step (a) to try other rows.
3) If all rows have been tried and nothing worked, 
   return false to trigger backtracking.
   
   > My OUTPUT
   > 
   <img src="https://user-images.githubusercontent.com/55774240/113557380-8daada80-961b-11eb-988f-a2e5586473be.png" width="350" />


## 2. [Hamiltonian Cycle](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/B-BackTracking/HamiltonianCycle.cpp)

<img src="https://user-images.githubusercontent.com/55774240/113557725-1d508900-961c-11eb-805e-8cea7a412a98.png" width="350" />

A Hamiltonian cycle also called a Hamiltonian circuit, is a graph cycle (i.e., closed-loop) through a graph that visits each node exactly once.

<hr>

### Backtracking Algorithm 

1. Using the backtracking method, we can easily find all the __Hamiltonian Cycles__ present in the given graph.<br>
2. The idea is to use the Depth-First Search algorithm to traverse the graph until all the vertices have been visited.<br>
3. We traverse the graph starting from a vertex (arbitrary vertex chosen as starting vertex) and <br>
4. At any point during the traversal we get stuck (i.e., all the neighbor vertices have been visited), we backtrack to find other paths (i.e., to visit another unvisited vertex).<br>
5. If we successfully reach back to the starting vertex after visiting all the nodes, it means the graph has a Hamiltonian cycle otherwise not.<br>
6. We mark each vertex as visited so that we don’t traverse them more than once.<br>

> My OUTPUT
> 
   <img src="https://user-images.githubusercontent.com/55774240/113557918-66a0d880-961c-11eb-8cd8-a71a6f5db9a4.png" width="350" />
