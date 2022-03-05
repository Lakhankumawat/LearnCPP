# Table of content
- [BST](#bst-tree)
- [AVL](#avl-tree)

<hr>

## AVL Tree
- AVL tree is a self-balancing binary search tree in which each node maintains extra information called a balance factor whose value is either -1, 0 or +1.
- Balance factor of a node in an AVL tree is the difference between the height of the left subtree and that of the right subtree of that node.

![avl-tree](https://user-images.githubusercontent.com/60027035/156880515-827d4691-d4c3-4a5c-96da-5083bd311d32.png)

### AVL Rotation
- Left rotation(L) : In left rotations, every node moves one position to left from the current position.
- Right rotation(R) : In right rotations, every node moves one position to right from the current position. 
- Left Right rotation(LR) : In left right roation, First every node moves one position to the left, then one position to the right from the current position. 
- Right Left rotaton(RL) : In right left rotation, First every node moves one position to the right, then one position to the left from the current position.

### Algorithm for insertion
- Insert a new element into the tree using BST's (Binary Search Tree) insertion logic.
- After inserting the element check the Balance Factor of each node.
- When the balance factor of any node comes other than the three values(0,1,-1) then the tree is said to be unbalanced. Then perform the suitable Rotation to make it balanced.
  - If there is an imbalance in the left child's right sub-tree, perform a left-right rotation
  - If there is an imbalance in the left child's left sub-tree, perform a right rotation
  - If there is an imbalance in the right child's right sub-tree, perform a left rotation
  - If there is an imbalance in the right child's left sub-tree, perform a right-left rotation

### Algorithm for deletion
- If the node to be deleted is a leaf node, it is simply removed from the tree.
- If the node to be deleted has one child node, the child node is replaced with the node to be deleted simply.
- If the node to be deleted has two child nodes then,
  - Either replace the node with it’s inorder predecessor , i.e, the largest element of the left sub tree.
  - Or replace the node with it’s inorder successor , i.e, the smallest element of the right sub tree.
- If the tree is unbalanced, then perform the suitable rotation to make it balanced.
  - If there is an imbalance in the left child's right sub-tree, perform a left-right rotation
  - If there is an imbalance in the left child's left sub-tree, perform a right rotation
  - If there is an imbalance in the right child's right sub-tree, perform a left rotation
  - If there is an imbalance in the right child's left sub-tree, perform a right-left rotation

### Algorithm for search
- First compare the searching element with root, if less than root, then recursively call left subtree, else recursively call right subtree. 
- If the element to search is found anywhere, return true, else return false. 

### Properties
- Time complexity
  - insertion : O(logn)
  - deletion : O(logn)
  - search : O(logn)
 - Space complexity : O(n)

### Advantages
- AVL tree has capabilities of self-balancing
- AVL trees have efficient search time complexity

### Disadvantages
- AVL trees are very difficult to implement

<hr>
