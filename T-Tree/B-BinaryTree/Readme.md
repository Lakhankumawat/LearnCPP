

<!-- Table of content -->
# Table of content
- [Binary Tree](#binary-tree)
- [Height of the binary tree](#height-of-the-binary-tree)

- [Number of Internal Nodes](#number-of-internal-nodes)
    - [Algorithm](#algorithm-1)
    - [Output](#output-1)
    - [Properties](#properties-1)
- [Largest Bst in a Binary Tree](#largest-bst-in-a-binary-tree)
    - [Properties](#properties)

    - [Algorithm](#algorithm)
    - [Output for height of the binary tree](#output-for-height-of-the-binary-tree)
    - [Properties](#properties)
- [Number of leaf nodes in Binary Tree](#number-of-leaf-nodes-in-binary-tree)
    - [Algorithm](#algorithm-1)
    - [Output for number of leaf nodes in binary tree](#output-for-number-of-leaf-nodes-in-binary-tree)
    - [Properties](#properties-1)


# Binary Tree:

- A tree whose elements have at most 2 children is called a binary tree. 
- Each element of a binary tree can have only 2 children, we name them the left and right child.

## Height of the binary tree
- The height of a binary tree is equal to the largest number of edges from the root to the most distant leaf node.


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
 
 ### Output for height of the binary tree
 1.
 ```
 100

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

Height of tree: 7

![o_p5](https://user-images.githubusercontent.com/76229635/159169048-1a6bdbca-98ea-4687-bf4a-37aa8981feb3.png)


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
  Height of tree: 3

![o_p4](https://user-images.githubusercontent.com/76229635/159169076-efa6e4f1-b8de-4551-b3c5-71352f41258d.png)

```
Number of internal nodes: 3
<br>
 <img width="400"  src="https://user-images.githubusercontent.com/76229635/167093513-721a78f1-ee6e-4c64-8e22-750eb67314ae.jpg">
 <br>

### Properties
- Time Complexity: O(n)
- Space Complexity: O(n)

## Number of leaf nodes in binary tree
- A node is a leaf node if both left child and right child nodes of its are NULL.
- We are using Recursion to count nodes.

- Time Complexity :
  - Worst case time	: O(n)
- Space Complexity: O(n)

## Largest Bst in a Binary Tree



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
    Leaf_count_of_tree = Leaf_count_of_left_subtree + Leaf_count_of_right_subtree
 end leaf_count
```

- Call the function bst(root) for the left child and right child of any node, it will tell whether the left/right sub-tree is a BST or not.
- Add two more data properties in the bstpair class: "root" and "size" which denote the root of the largest BST subtree and size of the largest BST subtree respectively.
- if node comes to be a bst then
root node will be : ans.root = node;
and size will be : ans.size = l.size + r.size + 1;
1 is added in above expression to include the root node in the "size".
- Else if the node doesn't form a BST and the size of the left BST subtree of the node is greater than the size of the right BST subtree then the largest BST subtree is the left subtree and its size and root are assigned to "ans".
- Else the largest BST subtree is the right subtree and its size and root are assigned to "ans".

### Time Complexity

- For creatingtreee()
  O(n), where is number of nodes. 
- visited every node in the binary tree to check whether its sub-tree is a BST or not therfore,
  The time complexity for this solution is 
  O(n), where is number of nodes. 

### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- We even can understand difference between a BST and BT.
- Many algorithms can be expressed more easily.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Have to traverse each node and check if it is a bst or not.


## Diameter of the Binary-Tree

### Problem Statement




### Output for number of leaf nodes in binary tree
1.

### Examples

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

No. of leaf nodes of tree: 1

### Explanation


![Picture2](https://user-images.githubusercontent.com/76229635/159126164-b794512c-422b-466d-ac88-f6ac7ec69a5f.png)



2.
```
                 30
           /              \
        20                40
     /    \             /      \
  10       25          35      45
```
No. of leaf nodes in tree: 4

![Picture1](https://user-images.githubusercontent.com/76229635/159126054-e544d3af-2302-4b33-aa07-1645973dd3f6.png)

### Algorithm


### Properties

- Time Complexity: O(n)
- Space Complexity: O(n)


### Complexity
```
Complexities -: 
   1.Time Complexity - O(N), N - Number of nodes in a Binary-Tree.
   2.Space Complexity - O(H), H - Height of the Binary-Tree.
```

