# Table of Content
- [BinarySearchTree](#Binary-Search-Tree)
- [TreeTraversals](#Tree-Traversals)
- [TopView](#Top-View-of-Binary-Tree)

<br></br>

## Binary Search Tree
<br></br>

## Tree Traversals
<br></br>

## [Top View of Binary Tree](T-Tree/TopView.cpp)
Top view of binary tree is the set of nodes visible when the tree is viewed from the top.<br>
A node x is there in output if x is the topmost node at its horizontal distance. Horizontal distance of left child of a node x is equal to horizontal distance of x minus 1, and that of right child is horizontal distance of x plus 1.
<br></br>
<img src="https://www.techiedelight.com/wp-content/uploads/Horizontal-distance-vs-Level-Binary-Tree.png" align = "center" />
<br></br>
For creating the specific desired binary tree, inorder and preorder traversal of the binary tree are to be entered by the user alongwith the number of nodes.<br>To find the top view, a vertical traversal based approach is used. A map  is created using level order traversal, to store the topmost nodes of each horizontal distance and then it's printed as the desired output. The Time Complexity of the program is O(n), where n is the number of nodes in the binary tree.
<br></br>
### Input/Output for the above binary tree - 
```
Enter no. of nodes - 
7
Enter nodes in inorder: 
2 1 7 5 8 3 6
Enter nodes in preorder: 
1 2 3 5 7 8 6
Top View of binary tree:
2 1 3 6
```

Related links - <br>
[https://www.geeksforgeeks.org/print-nodes-top-view-binary-tree/](https://www.geeksforgeeks.org/print-nodes-top-view-binary-tree/)
[https://www.techiedelight.com/print-top-view-binary-tree/](https://www.techiedelight.com/print-top-view-binary-tree/)

