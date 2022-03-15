
# BOUNDARY TRAVERSAL
[ Boundary Traversal of binary tree](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1)
So, basically we are given a binary tree
and we need to print the boundary traversal in anticlockwise direction
## Examples
 ```javascript
input:
        1
      /   \
     2     3  
    / \   / \
   4   5 6   7
      / \
     8   9

output:
1 2 4 8 9 6 7 3
```
## Note
``` javascript
If the root doesn't have a left subtree or right subtree, then the root itself is the left or right boundary.
example:

input:
            1
           /
          2
        /  \
       4    9
     /  \    \
    6    5    3
             /  \
            7     8

output:
1 2 4 6 5 7 8

```
# Algorithm
``` javascript
1. Push all the left boundary nodes (top to bottom) to ans data structure
(as in anticlockwise direction first left boundary nodes then
leaf nodes then right boundary nodes from bottom to top)
2. Push all the leaf nodes from left to right
3.Push all right boundary nodes (bottom to top)

NOTE:
 We must avoid the duplicacy as the last left boundary is also a leaf node
 so, we should take care of this.
```
##  COMPLEXITY
``` javascript
Time Complexity: O(n) where n is the number of nodes in binary tree.
Space Complexity: O(n)
```
