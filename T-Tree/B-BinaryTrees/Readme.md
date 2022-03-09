# Diameter of the Binary-Tree

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
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

 ``` 
 pair<int, int> Diameter(binaryTreeNode<int> *root)
{
    if(root == nullptr){
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    // Recursive approach to get the results from the left sub-tree.
    pair<int, int> left = Diameter(root -> left);
    // Recursive approach to get the results from the right sub-tree.
    pair<int, int> right = Diameter(root -> right);
    int leftHeight = left.first;
    int leftDiameter = left.second;
    int rightHeight = right.first;
    int rightDiameter = right.second;
    // Resulting Diameter and Height w.r.t to the root of the tree.
    pair<int, int> output;
    output.first = max(leftHeight, rightHeight) + 1;
    output.second = max(leftDiameter, max(rightDiameter, leftHeight + rightHeight));
    return output;
}
 ```

# Complexity
```
Complexities -: 
   1.Time Complexity - O(N), N - Number of nodes in a Binary-Tree.
   2.Space Complexity - O(H), H - Height of the Binary-Tree.
```
