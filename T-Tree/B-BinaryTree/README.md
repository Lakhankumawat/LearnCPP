# Table of content
- [Largest Bst in a Binary Tree](#Largest Bst in a Binary Tree)
    - [Properties](#Properties)
    - [Algorithm](#Algorithm)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Largest Bst in a Binary Tree

- A tree is said to be a binary search tree if it is a binary search tree at its root. 
- It means that the value inside the left child of the root node should be less than the value of the root node and the value inside the right child of the root node should be greater than the value inside the root node. 
- This is not sufficient to make a tree a binary search tree. It will be a BST if its left subtree and right subtree both are Binary Search Trees too.
- Note that this property is valid itself for the leaf nodes as they don't have any child nodes. 
- So, in a BST for every node, the left sub-tree will have all the nodes with values smaller than the value in the parent node and the right subtree will have all the values greater than the value in the parent node.

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