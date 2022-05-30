## [Vertical Order Traversal](T-Tree\T-TreeTraversals\verticalTraversal.cpp)
#### **Table of Contents -**
- Introduction
- Algorithm
- Complexity
- Input/Output

#### **Introduction -**
Vertical Order Traversal ia method of traversing a binary tree from top to bottom and left to right.
But before understanding Vertical order traversal, we should be aware with the term - *horizontal distance*.<br>
**Horizontal distance** - Horizontal distance is the distance of the node from the root node. Thus,
- Horizontal distance of root node = 0
- Horizontal distance of left child = Horizontal distance of parent - 1
- Horizontal distance of right child = Horizontal distance of parent + 1
<br></br>
<img src = "https://i.imgur.com/I7g4VHa.png"/>

In vertical order traversal, the nodes that are at the left most horizontal distance from the root are printed first and the nodes that are at the rightmost horizontal distance are printed at the end. <br> The nodes that lie at the same horizontal distance are then printed from top to bottom. <br> If the nodes are at same horizontal distance and same level, then they are printed from right to left. This is ensured in the code by using level order traversal approach. <br>

#### **Algorithm -** 
1. A binary tree is constructed on the basis of the user input (number of nodes, inorder traversal, preorder traversal)<br>
2. Horizontal distance of the nodes are calculated and stored alongwith the node in a queue.<br>
3. All the nodes corresponding to the same horizontal distance are stored in a map.<br>
4. To print the vertical order traversal, the map is traversed. 

#### **Complexity -**
Time Complexity - O(n * logn), where n is the no. of total nodes.
Space Complexity - O(n)

#### **Input/Output-**
Thus the input and output for the above binary tree will be as follows: <br>
```
Enter number of nodes: 
8
Enter Inorder traversal of the tree: 
14 7 19 5 30 10 25 15
Enter Preorder traversal of the tree: 
5 7 14 19 10 30 15 25
Vertical order traversal is 
14
7
5 19 30
10 25
15
```
