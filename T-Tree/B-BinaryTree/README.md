# Table of content
- [Height of the binary tree](#height-of-the-binary-tree)
- [Number of Internal Nodes](#number-of-internal-nodes)
    - [Algorithm](#algorithm-1)
    - [Output](#output-1)
    - [Properties](#properties-1)
- [Largest Bst in a Binary Tree](#largest-bst-in-a-binary-tree)
    - [Properties](#properties)
    - [Algorithm](#algorithm)
    - [Time Complexity](#complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantages)
 - [Diameter of Binary Tree](#diameter-of-the-binary-tree)
    - [Problem Statement](#problem-statement)
    - [Examples](#examples)
    - [Explanation](#explanation)
    - [Algorithm](#algorithm-1)
    - [Complexity](#complexity)



# Binary Tree:

- A tree whose elements have at most 2 children is called a binary tree. 
- Each element of a binary tree can have only 2 children, we name them the left and right child.



## Height of the binary tree

-  The height of a binary tree is equal to the largest number of edges from the root to the most distant leaf node.


### Algorithm

```
begin height(root)
If node is NULL 
  then return 0
Else 
  If left child and right child nodes are NULL 
    return 1
Else 
  take two integers let 'l' and 'r' to store value of left child and right child recursively
  by using formula:
    height_of_a_tree = 1 + (which-one is bigger from 'l' & 'r')
 end height
```
### Properties

- Time Complexity :
  - Worst case time	: O(n)
- Space Complexity: O(n)

## Number of Internal Nodes
-  Internal Node is a node that can have at least one child (i.e. non-leaf node is an internal node).

### Algorithm
```
begin internal_nodes( root )
If node is NULL 
  then return 0
If left child and right child nodes are NULL 
    return 0
Else 
    return 1 + internal_nodes( left child of node ) + internal_nodes( right child of node )

 end internal_nodes
```

### Output
1.
```
100
  \
   120
      \
      130
         \
         140
            \
            150
              \
              160
                 \
                 170
 ```
 Number of internal nodes: 6 <br>
 <img width="400"  src="https://user-images.githubusercontent.com/76229635/167093456-f747a157-eefe-4af2-b22e-1492bd4b1026.jpg">
 <br>
2.
```
                 100
           /              \
        30                150
     /    \             /      \
  20       50          122      188
```
Number of internal nodes: 3
<br>
 <img width="400"  src="https://user-images.githubusercontent.com/76229635/167093513-721a78f1-ee6e-4c64-8e22-750eb67314ae.jpg">
 <br>

### Properties

- Time Complexity :
  - Worst case time	: O(n)
- Space Complexity: O(n)

## Largest Bst in a Binary Tree

- A tree is said to be a binary search tree if it is a binary search tree at its root. 
- It means that the value inside the left child of the root node should be less than the value of the root node and the value inside the right child of the root node should be greater than the value inside the root node. 
- This is not sufficient to make a tree a binary search tree. It will be a BST if its left subtree and right subtree both are Binary Search Trees too.
- Note that this property is valid itself f