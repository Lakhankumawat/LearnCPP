# [Lowest Common Ancestor of a Binary Tree](T-Tree/T-TreeTraversals/LCA_of_Binary_Tree.cpp)
<img src="https://www.fatalerrors.org/images/blog/44bc812f088ca39d432de256a2c70601.jpg">

## Binary Tree
A Hierarchical data structure that stores data in the form of a tree and can have either **0,1 or 2 children** at each node.
It works on the rule that a node which has lesser value that the root is placed on the left subtree and the one with more value 
than the root is kept on the right subtree.

## Components of the Tree:
- Pointer to left subtree.
- Data element.
- Pointer to right subtree.

## Lowest Common Ancestor(LCA)
The Lowest Common Ancestor (LCA) of two nodes in a rooted tree is the lowest (deepest) node that 
is an ancestor of both the nodes.

**Finding the LCA** - At first we traverse the tree and match nodes n1 and n2 if we get one of the 
nodes in the left subtree and another one in the right subtree,then the root is the LCA.


> Output
>
   <img src="https://user-images.githubusercontent.com/84969358/157017045-07173a6f-6bc9-457b-86ac-09681cb97dce.png" />

Time Complexity - O(n)<br>
Space Complexity - O(1)

## Benefits of a Binary Tree
- The search operation in a binary tree is faster as compared to other trees.
- Converting postfix and prefix expressions are possible using binary trees.
- Graph traversal also uses binary trees.
- Easier to find the maximum and minimum elements.
