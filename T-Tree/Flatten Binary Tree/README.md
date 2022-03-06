PROBLEM
Given the root node of a binary tree, flatten it into a linked list in-place.

EXAMPLE

Given Binary Tree:

Input: [1, 2, 5, 3, 4, NULL, 6]

        1
      /   \
     2     5
   /  \     \  
  3    4     6    
After flattening it should look like:

Output: [1, NULL, 2, NULL, 3, NULL, 4, NULL, 5, NULL, 6]

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
Points to Note
The linked list is the pre-order traversal of tree i.e. first the root is traversed then the left subtree and then the right subtree.

After flattening, the left child pointer of each node is NULL.

In place means that no auxiliary space is allowed.

Approach
As no extra space is allowed, we have to attach and deattach the existing nodes to flatten the tree.

Algorithm:
Recursively flatten the left and right subtree.

Store the left tail and right tail i.e.the last elements of left and right subtree respectively.

Store right subtree in temporary variable and make the left subtree as right subtree.

Join right subtree with left tail.

Return the right tail recursively.