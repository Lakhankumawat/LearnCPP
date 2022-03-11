<!-- follow the template of Bubble Sort, add the respective heading in Table of content -->


<!-- Table of content -->
# Table of content
- Number of leaf nodes in the binary tree
- Number of Internal nodes in the binary tree
- Total number of nodes in the binary tree
- Height of the binary tree

# Binary Tree:

- A tree whose elements have at most 2 children is called a binary tree. 
- Each element of a binary tree can have only 2 children, we name them the left and right child.


- We are using Binary-Tree given below:
              15
           /      \
         13       17
        /  \     /   \
      12    14  16    21 


## Number of leaf nodes in the binary tree
- A node is a leaf node if both left and right child nodes of it are NULL.
- We are using Recursion to count nodes.


### Algorithm

```
begin leaf_count(root)
If node is NULL 
  then return 0
Else 
  If left child and right child nodes are NULL 
    return 1
Else 
  recursively calculate leaf count of the tree using formula:
    Leaf_count_of_a_tree = Leaf_count_of_left_subtree + Leaf_count_of_right_subtree
 end leaf_count
```

### Properties

- Time Complexity : O(n)


---


## - Number of Internal nodes in the binary tree
- An internal node is a node which carries at least one child or in other words, an internal node is not a leaf node.


### Algorithm

```
begin internal_nodes(root)
If node is NULL 
  then return 0
Else 
  If left child and right child nodes are NULL 
    return 0
Else 
  recursively calculate internal nodes of the tree using formula:
    internal_nodes_of_a_tree = 1 + internal_nodes_of_left_subtree + internal_nodes_of_right_subtree
 end internal_nodes
```
### Properties

- Time Complexity :
  - Worst case time	: O(n)
  - Best case time : O(1)
  - Average case time : O(n)


## Total number of nodes in the binary tree

- Number of nodes in a Binary Tree.


### Algorithm

```
begin total_nodes(root)
If node is NULL 
  then return 0
Else 
  If left child and right child nodes are NULL 
    return 1
Else 
  recursively calculate total nodes of the tree using formula:
    total_nodes_of_a_tree = 1 + total_nodes_of_left_subtree + total_nodes_of_right_subtree
 end total_nodes
```
### Properties

- Time Complexity :
  - Worst case time	: O(n)
  - Best case time : O(1)
  - Average case time : O(n)
  

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
