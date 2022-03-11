# Table of content
- [Diameter of Binary Tree](#Diameter of BinaryTree)
    - [Algorithm](#Algorithm)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Diameter of BinaryTree
- The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
- This path may or may not pass through the root.
- The length of path between two nodes is represented by the number of edges between them.


# Algorithm
- max distance betwen two node on left side is calculated by -> int ld = diameter(root->left);                         
- max distance betwen two node on right side is calculated by -> int rd = diameter(root->right);                        
- max distance between left deepest and right deepestint is calculated by -> lr = height(root->left) + height(root->right) + 2; 
- and hence diameter is max of all is calculated by -> int diameter = max(lr, max(ld, rd));

### Time Complexity
- For constructTree()
  O(n) ,where n is the number of node
- For height()
  O(n) ,where n is the number of node
- For diameter()
  O(n^2) ,where n is the number of node
### Advantages 

- Can store some useful information about Binary tree.
- It make the program simple to understand and we can even have a clear vision of how we are traversing on binary tree.
- We can even learn how height is different from diameter also how to compare diameter.

### Disadvantages

- This is little slow.