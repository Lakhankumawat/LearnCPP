# Table of content
- [Height of the binary tree](#height-of-the-binary-tree)
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
Height of tree: 7

![o_p5](https://user-images.githubusercontent.com/76229635/158337847-c0be85a6-d577-47ed-a347-dba09652e8e6.png)

2.
```
                 100
           /              \
        30                150
     /    \             /      \
  20       50          122      188
```
Height of tree: 3

![o_p4](https://user-images.githubusercontent.com/76229635/158338061-5043a09d-70ef-449c-adbe-79117bc3ce4f.png)

### Properties

- Time Complexity :
  - Worst case time	: O(n)


# Largest Bst in a Binary Tree

- A tree is said to be a binary search tree if it is a binary search tree at its root. 
- It means that the value inside the left child of the root node should be less than the value of the root node and the value inside the right child of the root node should be greater than the value inside the root node. 
- This is not sufficient to make a tree a binary search tree. It will be a BST if its left subtree and right subtree both are Binary Search Trees too.
- Note that this property is valid itself for the leaf nodes as they don't have any child nodes. 
- So, in a BST for every node, the left sub-tree will have all the nodes with values smaller than the value in the parent node and the right subtree will have all the values greater than the value in the parent node.

![Screenshot (482)](https://user-images.githubusercontent.com/98539013/159149159-d95ee43a-7bd5-4a49-88ce-7c0fb021f29a.png)

### Properties

- A binary tree may or may not be a binary search tree but it may contains subtree which may satisfy the conditions to be a binary search tree.
- A binary search tree is an ordered binary tree.

### Algorithm

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


# Diameter of the Binary-Tree

# Problem Statement

Given the root of a binary tree, return the length of the diameter of the tree.

## Examples
```
 Let us create following Binary-Tree
             100
           /     \
          200    300
         /  \    /  \
       400   500 600  700
 
 Expected Results -:
 Diameter of the Binary Tree is as follows -:
 4 

```
# Explanation

- The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

- The length of a path between two nodes is represented by the number of edges between them.

- Now the questions says to compute the Diameter of the tree.

- To compute the Diameter efficiently, made use of the pair class of C++, which provides the facility of computing the height of the left subtree as well as of right subtree and the diameter of the respectve subtrees.
- Found the maximum diameter by comparing the diameter of the left subtree(by recursion) and the right subtree(by recursion) and the sum of the heights of the left subtree and the right subtree.
![largest-diameter-of-binary-tree](https://user-images.githubusercontent.com/84433782/159844065-b609c7c4-2d43-4216-bb15-69ccb6f35435.png)
 


# Algorithm

- Node passed in recursive function is null then return zero.
- Using recursive call, calculate the diameter and the height of left-subtree until node becomes NULL 
(used inbuilt pair class of C++ to calculate height and diameter of the tree simultaneously which makes the solution complexity wise more efficient).
- Using recursive call, calculate the diameter and the height of right-subtree until node becomes NULL. 
-  If the root node is included then,
 ```
     Diameter = left-subtree + right-subtree + 1 
 ```
-  If the root node is not included then,
 ```
     Diameter = max(diameter of left-subtree, diameter of right subtree)
 ```  
-  The final output will return the max of step 4 and step 5.


# Complexity
```
Complexities -: 
   1.Time Complexity - O(N), N - Number of nodes in a Binary-Tree.
   2.Space Complexity - O(H), H - Height of the Binary-Tree.
```
