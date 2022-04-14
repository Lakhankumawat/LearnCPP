
# Binary Tree

A generic tree with at most two child nodes for each parent node is known as a
binary tree.

# Binary Search Tree(BST)

PROPERTIES:

1. It is inspired by the binary search algorithm that elements on the left side of a particular element are smaller and in case of the right side they are greater.
2. Time complexity on insertion, deletion and searching reduces significantly as it works on the principle of binary search rather than linear search, as in the case of normal binary trees.



# Problem Statement

Given a binary tree with N number of nodes, check if that input tree is BST (Binary Search Tree). If yes, return true, return false otherwise.

Note: Duplicate elements should be kept in the right subtree

# Brute Force Approach

we will keep track of minimum and maximum values of right and left subtrees correspondingly, and at last, we will simply compare them with root. We will recursively implement maximum , minimum and isBST function.

● The left subtree’s maximum value should be less than the root’s data.

● The right subtree’s minimum value should be greater than or equal to the root’s data.

Go through the Brute Force Approach code in cpp file.

TIME COMPLEXITY: 

As we are traversing each node and then for each node we are calculating the minimum and maximum value by again traversing that
complete subtree’s height. Hence if there are n nodes in total and height of the tree
is h, the time complexity will be O(n*h).

So, we will have to minimize the time complexity.

# Approach 1

In previous case, we can see that for each node, minimum and maximum values are calculated separately. We want to calculate these along with checking the isBST condition to reduce extra traversal.

We will create a class(here Triple) that will be storing maximum value, minimum value, and BST
status (True/False) for each node of the tree. So, we will recursively implement the isBST_helper function which will return an object of class triple.

Go through the Approach1 code in cpp file.

TIME COMPLEXITY:

Here, we are going to each node and doing a constant amount of work. Hence, the time complexity for n nodes will be of O(n)

# Approach 2

There is a better approach to this problem with same time complexity as above , which makes our code look more robust. Let’s discuss that approach

So we pass the allowed range as a function argument while recursing for left and right subtree. Here we are looking at each node only once and initial values for min and max should be INT_MIN and INT_MAX.

Go through the Approach2 code in cpp file

If every node is in allowed range that means no where the constraint is violated.
 




![App Screenshot](https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/check-if-a-binary-tree-is-BST-or-not-optimized-brute-force-example.png)

