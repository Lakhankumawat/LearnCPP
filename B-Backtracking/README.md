## [1. N-Queen Problem](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/B-BackTracking/%F0%9F%91%B8N-Queen.cpp)
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



## [3. The Knight’s tour problem](#the-knight’s-tour-problem)
   - [Algorithm](#algorithm)
   - [Time Complexity](#time-complexity)
   - [Space Complexity](#space-Complexity)
   - [Advantages](#advantages)
   - [Disadvantages](#disadvantages)


## The Knight’s tour problem

- Given a number n which represents the size of a chess board, and a row and a column, as a starting point for a knight piece, you are required to generate the all moves of a knight starting in (row, col) such that knight visits all cells of the board exactly once.

- A knight should move according to the rules in chess. Please explore the next moves in the clockwise direction to get the same result as ours.

- One of the possible valid configuration for N = 8 is shown below:

![Screenshot (556)](https://user-images.githubusercontent.com/98539013/164994466-b3475065-a90c-4397-a0b4-d57c3a8196a5.png)


### Algorithm

- If invalid move (row < 0, row >= n, col < 0, col >= n or chess[row][col] > 0), then return without printing.
- If the base case is hit (got till the last move = n2), then fill the cell with move no, print the configuration, mark the cell empty back - again (=0), and backtrack/return.
- Before Recurring, mark the cell with the current move number.
- Recur for all possible 8 moves with modified values of row and col, and a unit increment of the move number.
- After returning from all 8 calls, mark the cell as empty again (=0) and return.

### Time Complexity
```
- For each cell, we have 8 decisions to choose from for each of the n2 cell, the time complexity will be O(8(n^2)).
 ``` 
### Space Complexity
```
- The maximum number of recursive calls/depth of the recursion tree can be equal to the number of cells. Hence the recursion stack call will take atmax O(n2) space.

- However, we are not using any extra data structure, hence the solution is said to have O(1) auxiliary space.
 ``` 
### Advantages 
- We learned how to use backtracking in this problem.
- Less Memory consuming.

### Disadvantages
- Backtracking is not the best solution for the Knight’s tour problem. 
- Time Consuming.

