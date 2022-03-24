# Diameter of the Binary-Tree

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
- [Algorithm](#algorithm)
- [Complexity](#complexity)


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
