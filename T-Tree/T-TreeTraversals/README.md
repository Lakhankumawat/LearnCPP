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