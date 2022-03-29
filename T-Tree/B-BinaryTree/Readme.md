<!-- follow the template of Bubble Sort, add the respective heading in Table of content -->


<!-- Table of content -->
# Table of content
- Height of the binary tree.
   - Algorithms
   - Output
   - Time Complexity
- Number of leaf nodes in Binary Tree.
   - Algorithms
   - Output
   - Time Complexity


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

### Properties
- Time Complexity: O(n)
- Space Complexity: O(n)

## Number of leaf nodes in binary tree
- A node is a leaf node if both left child and right child nodes of its are NULL.
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
    Leaf_count_of_tree = Leaf_count_of_left_subtree + Leaf_count_of_right_subtree
 end leaf_count
```


### Output for number of leaf nodes in binary tree
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
No. of leaf nodes of tree: 1

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


### Properties

- Time Complexity: O(n)
- Space Complexity: O(n)

