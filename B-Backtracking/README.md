# Table of content
- [N Queen Problem](#N-Queen-Problem)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Space Complexity](#space-complexity)
    
- [Hamiltonian Cycle](#Hamiltonian-Cycle) 
    - [Algorithm](#algorithm-1)
    - [Time Complexity](#time-complexity-1)
    - [Space Complexity](#space-complexity-1)

- [The Knight tour problem](#The-Knight-tour-problem) 
    - [Algorithm](#algorithm-2)
    - [Time Complexity](#time-complexity-2)
    - [Space Complexity](#space-complexity-2)
    - [Advantages](#advantages)
    - [Disadvantages](#disadvantages)

- [Subset Sum](#Subset-Sum) 
    - [Algorithm](#algorithm-3)
    - [Time Complexity](#time-complexity-3)
    - [Space Complexity](#space-complexity-3)
    - [Advantages](#advantages-1)
    - [Disadvantages](#disadvantages-1)


##  N Queen Problem

<img src="https://user-images.githubusercontent.com/55774240/113557080-14ab8300-961b-11eb-8539-22a45b296479.png" width="200" />

The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other. For example, following is a solution for 4 Queen problem.
<hr>

### Algorithm 

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
   
### Time Complexity
```
- This code is exponential in nature, and it's time complexity will turn out to be O(n!).
 ``` 
### Space Complexity
```
- The maximum number of recursive calls can be equal to the number of rows. Hence the recursion stack call will take atmax O(n) space.

- However, we are not using any extra data structure, hence the solution is said to have O(1) auxiliary space.
 ``` 
   

## Hamiltonian Cycle

<img src="https://user-images.githubusercontent.com/55774240/113557725-1d508900-961c-11eb-805e-8cea7a412a98.png" width="350" />

A Hamiltonian cycle also called a Hamiltonian circuit, is a graph cycle (i.e., closed-loop) through a graph that visits each node exactly once.

<hr>

### Algorithm 

1. Using the backtracking method, we can easily find all the __Hamiltonian Cycles__ present in the given graph.<br>
2. The idea is to use the Depth-First Search algorithm to traverse the graph until all the vertices have been visited.<br>
3. We traverse the graph starting from a vertex (arbitrary vertex chosen as starting vertex) and <br>
4. At any point during the traversal we get stuck (i.e., all the neighbor vertices have been visited), we backtrack to find other paths (i.e., to visit another unvisited vertex).<br>
5. If we successfully reach back to the starting vertex after visiting all the nodes, it means the graph has a Hamiltonian cycle otherwise not.<br>
6. We mark each vertex as visited so that we don’t traverse them more than once.<br>

> My OUTPUT
> 
   <img src="https://user-images.githubusercontent.com/55774240/113557918-66a0d880-961c-11eb-8cd8-a71a6f5db9a4.png" width="350" />
   
### Time Complexity
```
- Time complexity is O(2nn2).
 ``` 
### Space Complexity
```
- The space complexity it takes O(n) space.
 ``` 


## The Knight tour problem
   
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


## Subset Sum

- Given an array of n numbers and a number "tar" as the input.
- Calculate and print all subsets of the given elements, the contents of which sum to "tar".
- Say, if  given an array 10,20,30,40,50 and the target is 60. Then all the valid subsets are [10,20,30],[10,50] and [20,40].

![images (50)](https://user-images.githubusercontent.com/98539013/166133569-d3c875f2-90da-4d69-8e68-51979052d670.jpeg)


### Algorithm

- Pass the  arguments as parameters to the given function "PrintTarget SumSubsets" : given input array, the index we are at i.e. 0 , initial empty subset, sum of that subset and the target .
- BASE CASE: check whether the index is equal to array of length because it would tell whether all the elements have been used up or not.
- Check condition for arr.ize() and not arr.size()-1 even though the indices start with 0 because when the recursive function is called on the last element it increases the index by 1 for the index arr.length-1 and hence the value stored in "idx" is equal to the arr.size().
- Call a recursive function for the YES part of the element. Here, that element gets added to the subset string and arithmetically added.
- Call a recursive function for the NO part of that element. Here, that element does not get added to either the subset string.

### Time Complexity
```
- O(2n)
- This time complexity is exponential because for each state, 2 recursion calls are made.
 ``` 
### Space Complexity
```
-O(1)
-As no extra space is required, therefore space complexity is constant. However, if we include the space used in the recursive stack then the space complexity is O(n).
 ``` 
### Advantages 
- We learned how to use backtracking in this problem.
- Less Memory consuming.

### Disadvantages
- Backtracking is not the best solution for Subset Sum Problem. 
- Time Consuming.


