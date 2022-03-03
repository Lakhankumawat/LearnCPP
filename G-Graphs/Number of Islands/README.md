
<!-- Table of content -->
# Table of content
- [Problem Statement](#problem-statement)
- [Sample Test Case](#sample-test-case)
- [Intuition](#intuition)
- [Approaches](#approaches)
    - [Breadth-First-Search](#breadth-first-search)
         - [Algorithm](#algorithm)
         - [Properties](#properties)
         - [Advantages ](#advantages)
         - [Disadvantages](#disadvantages)
    - [Depth-First-Search](#depth-first-search)
         - [Algorithm](#algorithm)
         - [Properties](#properties)
         - [Advantages ](#advantages)
         - [Disadvantages ](#disadvantages-of)
 - [Code Output](#code-output)

## [Problem Link](https://leetcode.com/problems/number-of-islands/)
## [Number of Islands](https://leetcode.com/problems/number-of-islands/)
![problem](https://user-images.githubusercontent.com/65915970/156569851-4ac247a5-8a3c-4688-b61d-45f3a74fb756.png)


<hr><div><p>Given an <code>m x n</code> 2D binary grid <code>grid</code> which represents a map of <code>'1'</code>s (land) and <code>'0'</code>s (water), return <em>the number of islands</em>.</p>

<p>An <strong>island</strong> is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.</p>

### Sample Test Case
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
<strong>Output:</strong> 1
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
<strong>Output:</strong> 3
</pre>

### **INTUITION** 

Treat the 2d grid map as an undirected graph and there is an edge between two horizontally or vertically adjacent nodes of value '1'.

### APPROACHES
         
   ### Breadth-First-Search(BFS)

             Algorithm
                1) Scan the matrix from (0,0) till (N, M).
                2) If the current element is ‘1’, start a BFS.
                3) Consider a queue and put the current node into the queue.
                4) Iteratively visit its neighbors vertically and horizontally and mark them as visited.
                5) The count is the total number of times the BFS has been invoked.
                6) Return count.
             Properties
               Time complexity: O(M×N) where M is the number of columns and N is the number of rows.
                Space complexity: O(min(M, N)) because in the worst case where the grid is filled with lands, the size of the queue can grow 
                 up to min(M, N).
    
            Advantages 
             - Always finds optimal solutions.
             - There is nothing like a useless path in BFS since it searches level by level.
             - Finds the closest goal in less time
        
            Disadvantages 
              - All of the connected vertices must be stored in memory(queue). So consumes more memory
    
   ### Depth-First-Search(DFS)
  
![dfs](https://user-images.githubusercontent.com/65915970/156580147-a79d32cb-170c-40f3-a4f0-3331ff5ca963.gif)

             Algorithm
                1) Scan the matrix from (0,0) till (N, M).
                2) If the current element is ‘1’, start a DFS.
                3) In the DFS traversal, mark every visited node.
                4) Count the number of islands as the number of nodes that trigger the DFS.
                5) Return count.
        
             Properties
                Time complexity: O(M×N) where M is the number of columns and N is the number of rows.
                Space complexity: worst-case O(M×N) in case that the grid map is filled with lands where DFS goes by M×N deep.
    
             Advantages 
             - Finds the larger distant element(from source vertex) in less time.
      
            Disadvantages 
             - May not find an optimal solution to the problem.
            - May get trapped in searching useless path.

### Code Output
1) Test Case 1

![Screenshot 2022-01-14 205915](https://user-images.githubusercontent.com/65915970/156570828-0d5a0754-ce5a-4a8e-afb4-424af2896eed.png)

2) Test Case 2

![univalued](https://user-images.githubusercontent.com/65915970/156570276-9de73071-1a0d-4b29-ae06-cb038bf526e7.png)

