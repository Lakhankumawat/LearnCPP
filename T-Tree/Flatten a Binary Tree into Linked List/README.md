Question :
Given a binary tree, flatten it into linked list in-place. Usage of auxiliary data structure is not allowed. After flattening, left of each node should point to NULL and right should contain next node in preorder.

Input : 

          1
        /   \
       2     5
      / \     \
     3   4     6

Output :
    1
     \
      2
       \
        3
         \
          4
           \
            5
             \
              6

Input :

        1
       / \
      3   4
         /
        2
         \
          5
Output :

     1
      \
       3
        \
         4
          \
           2
            \ 
             5

Simple Approach: 
A simple solution is to use Level Order Traversal using Queue. In level order traversal, keep track of previous node. Make current node as right child of previous and left of previous node as NULL. This solution requires queue, but question asks to solve without additional data structure.

Efficient Without Additional Data Structure Recursively look for the node with no grandchildren and both left and right child in the left sub-tree. Then store node->right in temp and make node->right=node->left. Insert temp in first node NULL on right of node by node=node->right. Repeat until it is converted to linked list. 