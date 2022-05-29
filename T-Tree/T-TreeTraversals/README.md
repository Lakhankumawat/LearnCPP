# Table of content
- [Morris Traversal](#morris-traversal)
    - [Properties](#properties)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Space Complexity](#space-complexity)
   
- [Diagonal Traversal](#diagonal-traversal) 
    - [Examples](#Examples)
    - [Algorithm](#algorithm-1)
    - [Time Complexity](#time-complexity-1)
    - [Space Complexity](#space-complexity-1)

- [Zigzag Level Order Traversal](#zigzag-level-order-traversal) 
    - [Example](#Example)
    - [Algorithm](#algorithm-2)
    - [Time Complexity](#time-complexity-2)
    - [Space Complexity](#space-complexity-2)

- [Conversion of expression by expression tree traversal](#conversion-of-expression-by-expression-tree-traversal)
    - [Properties](#properties-1)
    - [Algorithm](#algorithm-3)
    - [Time Complexity](#time-complexity-3)
    - [Space Complexity](#space-complexity-3)
    - [Advantages](#advantages)
    - [Disadvantages](#disadvantages)


## Morris Traversal

- Using Morris Traversal, we can traverse the tree without using stack and recursion. 
- The idea of Morris Traversal is based on Threaded Binary Tree. 
- In this traversal, we first create links to Inorder successor and print the data using these links, and finally revert the changes to restore original tree. 

![Screenshot (567)](https://user-images.githubusercontent.com/98539013/166672079-40f40b47-3207-4963-a443-21b157ffccd1.png)


### Properties

- The Morris algorithm for inorder traversal allows you to traverse a tree with O(n) time and O(1) space complexity. 
- But it requires changing the tree at runtime.n advance.

### Algorithm

- Set current_node as root.
- While current_node is not NULL.
- If the current_node does not have any left child
then,Print/traverse the current_node and Move to the right child and update.
current_node = current_node ->right
- Otherwise,Mark the current_node as right child of its inorder predecessor & move to the left child.
update current = current->left.
- If it's already Made as right child of its inorder predecessor(that means done in any previous iterations),then delete that link,It restores the tree back.
- print/traverse the current node(because the left subtree is traversed)and move to its right child.
update current = current->right  

### Time Complexity
```
- We observe that every edge of the tree is traversed at most 3 times. The same number of extra edges, as in the input tree, is removed and created. Thus, the total time complexity of the above program is O(n).
 ``` 

### Space Complexity
```
- O(1)  No extra space for traversal.
 ``` 



## Diagonal Traversal

- Given a Binary Tree, print the diagonal traversal of the binary tree.
- Consider lines of slope -1 passing between nodes. Given a Binary Tree, print all diagonal elements in a binary tree belonging to same line.

### Examples
Input : [8,3,10,1,6,null,14,null,null,4,7,13]  
Output : 8 10 14 3 6 7 13 1 4

![image](https://user-images.githubusercontent.com/94545831/166156380-641fabe7-f553-4936-888f-70dc68dfafd4.png)

### Algorithm
- In this traversal, I have taken a binary tree in main function and called a function named as : printDiagonal.
- The function will return the elements being placed in diagonal fashion in binary tree.
- We have used an unordered map for this purpose.
- By recursion we have solved one case and pushed the curr node in the map.
- Then in recursive manner we have called the same function for each left and right children of the given binary tree.
- The hypothesis of Base case lies in the fact that if there is no node then we would be returning NULL.
- Then we have traversed through the map to print the stored elements.

### Time Complexity
```
- Time Complexity : O(N)
 ``` 

### Space Complexity
```
- Space Complexity : O(N)
 ``` 
 
 
## Zigzag Level Order Traversal
Algorithm that traverses a binary tree from left to right then from right to left for the next leveland alternate between so, it's called Zigzag Level Order Traversal.

![image](https://user-images.githubusercontent.com/29145628/165636674-e022fb00-9e58-457c-90c9-15f0e4d956d9.png)

### Algorithm
```
- Create rightLeft variable to store the next direction.<br>
- Create vector to store nodes in each level.<br>
- Create queue to store nodes.(BFS)<br>
- Push root in queue.<br>
- Loop while the queue is not empty
- In Each iteration:
- Assign queue size in s to loop on nodes from the previous level
- Alternate rightLeft (negate)
- Loop on s to check all nodes in the level
- Save front node in queue in temp node then pop front node from queue<br>
- Check if current node's left is not null push it in queue       
- Check if current node's right is not null push it in queue 
- Push in level vector current node value 
- When loop on s exits, check the rightLeft direction, ifit's true reverse level vector<br>
- Print level vector
- Clear level vector
```
### Example
Input : 3 9 20 null null 15 7<br>
Output : 3 20 9 15 7 <br>

### Time Complexity
```
- Time Complexity : O(N)
The algorithm traverses each node to put it in the queue so, time comlexity is O(N).
```

### Space complexity 
```
- Space Complexity : O(N)
As the algorithm contains a queue with maximum size of n(nodes number) and a vector to save nodes in each level with maximum size of n then space complexity is O(N) + O(N) = O(N)
```


## Conversion of expression by expression tree traversal

![image](https://user-images.githubusercontent.com/84305637/168638346-47d75943-ee98-4a57-ac3c-9be4393a1a73.png)

### Properties

- Given a expression tree, it's inorder traversal gives the infix expression, post order traversal gives the postfix expression, and pre order traversal gives prefix expression.
- In a expression tree, we will be having operators at the non-leaf node, and operands will be at the leaf nodes.

### Algorithm 

- inorder traversal :
1) if root is not null
2) if root is operand
    print root
3) else
    print open parenthesis
    inorder(left subtree)
    print root
    inorder(right subtree)
    print close parenthesis
4) end if
5) end if

- preorder traversal :
1) if root is not null
    print root
    preorder(left subtree)
    preorder(right subtree)
2) end if

- postorder traversal :
1) if root not null
    postorder(left subtree)
    postorder(right subtree)
    print root
2) end if

### Time Complexity
```
Time Complexity : O(N)
``` 

### Space Complexity
```
Space Complexity : O(N)
``` 

### Advantages 
    
- The infix expression is very clear with brackets
- Easy to implement, compared to other conversion methods

### Disadvantages

- Construction of a expression tree is difficult to implement.

<br><br>

## Right Side View of BT

- Given a binary tree, write an efficient algorithm to print its right view.

### Examples
Input : [1,2,3,6,7,5,4,null,null,9,null,null,8]  
Output : 1 3 4 8

![Screenshot](https://user-images.githubusercontent.com/78534043/167404001-d387d0e3-8d3d-4284-9229-632055883a24.jpg)

### Algorithm (Iterative)

<h3>Intuition</h3>
This, perhaps, is the most intuitive way of solving this problem.
We travel the entire tree level by level (from right to left).
At each level, we print/store the right most node.
After the algorithm is done processing the entire tree, we will obtain the right view of the binary tree given to us.
<br><br>
<h3>The Iterative Algorithm</h3>

1. Initialize a queue data structure ((commonly used in BFS algorithm) with the root node and a LevelEnd character to mark a level's end in the queue. Commonly, nullptr or NULL is used as LevelEnd in C/C++, while None is used in Python.

2. While the queue is not empty, do the following:

    a. Pop the front of the queue, and call it frontVal

    b. If frontVal is LevelEnd, and the resultant queue is not empty, pop and print the front value of the resultant queue (this is the rightmost node of the given level), and also push a LevelEnd character into the queue.

    c. If frontVal is LevelEnd and the resultant queue is empty, break out of the while loop.

    d. If frontVal is not LevelEnd, then push its right child followed by left child into the queue (they must exist, of course).


### Time Complexity
```
- Time Complexity : O(N)
 ``` 

### Space Complexity
```
- Space Complexity : O(N)
 ``` 
