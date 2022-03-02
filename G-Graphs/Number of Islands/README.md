<h2>200. Number of Islands</h2><h3>Medium</h3><hr><div><p>Given an <code>m x n</code> 2D binary grid <code>grid</code> which represents a map of <code>'1'</code>s (land) and <code>'0'</code>s (water), return <em>the number of islands</em>.</p>

<p>An <strong>island</strong> is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.</p>


### APPROACH 1: Breadth-First-Search(BFS)
1) Scan the matrix from (0,0) till (N, M).
2) If the current element is ‘1’, start a BFS.
3) Consider a queue and put the current node into the queue.
4) Iteratively visit its neighbours vertically and horizontally and mark them as visited.
5) The count is the total number of times the BFS has been invoked.
6) Return count.

### APPROACH 2: Depth-First-Search(DFS)
1) Scan the matrix from (0,0) till (N, M).
2) If the current element is ‘1’, start a DFS.
3) In the DFS traversal, mark every visited node.
4) Count the number of islands as the number nodes that trigger the DFS.
5) Return count.

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


   



