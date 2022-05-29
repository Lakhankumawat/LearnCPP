# Threaded Binary Tree

- In the linked representation of binary trees, more than one half of the link fields contain NULL values
 which results in wastage of storage space. If a binary tree consists of n nodes then n+1 link fields contain NULL values

- Threaded binary trees is a tree in which each node either contains a link to its child 
node or thread to other nodes in the tree.

![Threaded-Binary-Tree-3](https://user-images.githubusercontent.com/91557659/162864478-edd443f3-1007-474a-929f-edf343620038.png)

## Properties
Time complexity 

- for insertion : log(n)
- for deletion : log(n)
- for seaching : log(n)

space complexity 
- insertion is O(1) , 
- for deletion and searching we donot require any extra space.

### Advantages of Threaded Binary Tree:

- In threaded binary tree, linear and fast traversal of nodes in the tree so there is no requirement of stack. If the stack is used then it consumes a lot of memory and time.
- It is more general as one can efficiently determine the successor and predecessor of any node by simply following the thread and links. It almost behaves like a circular linked list.
### Disadvantages of Threaded Binary Tree:

- When implemented, the threaded binary tree needs to maintain the extra information for each node to indicate whether the link field of each node points to an ordinary node or the node's successor and predecessor.
- Insertion into and deletion from a threaded binary tree are more time consuming since both threads and ordinary links need to be maintained.

### my output
  ![screenshot](https://user-images.githubusercontent.com/91557659/162948412-0edeb68b-2516-4c38-8fac-c17bd222134c.PNG)
=======
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
