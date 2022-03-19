<!-- follow the template of Bubble Sort, add the respective heading in Table of content -->


<!-- Table of content -->
# Table of content
- Number of leaf nodes in Binary Tree.

# Binary Tree:

- A tree whose elements have at most 2 children is called a binary tree. 
- Each element of a binary tree can have only 2 children, we name them the left and right child.


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


### Output:
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

- Time Complexity : O(n)

