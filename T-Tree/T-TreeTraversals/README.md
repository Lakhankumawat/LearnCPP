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

Using Morris Traversal, we can traverse the tree without using stack and recursion. The idea of Morris Traversal is based on Threaded Binary Tree. In this traversal, we first create links to Inorder successor and print the data using these links, and finally revert the changes to restore original tree. 

The Morris algorithm for inorder traversal allows you to traverse a tree with O(n) time and O(1) space complexity. But it requires changing the tree at runtime.
## Time Complexity:
We observe that every edge of the tree is traversed at most 3 times. The same number of extra edges, as in the input tree, is removed and created. Thus, the total time complexity of the above program is O(n).
## Space complexity 
O(1)  No extra space for traversal.

## algorithm
1)Set current_node as root 

2)  While current_node is not NULL
3)  
        If the current_node does not have any left child
        
            Print/traverse the current_node
            
            Move to the right child and update 
            
            current_node = current_node ->right
            
        Else
        
            Mark the current_node as right child of its 
            
            inorder predecessor & move to the left child, 
            
            i.e., 
            
            update current = current->left. But, if it's already 
            
            made as right child of its inorder predecessor 
            
            (that means done in any previous iterations) 
            
            then delete that link (It restores the tree back), 
            
            print/traverse the current node(because the left subtree is traversed)
            
            and move to its right child, 
            
            i.e., 
            
            update current = current->right  
            
    End While

## Output Screenshots
| #Screenshot 1|
input output 1
![Screenshot 2022-03-08 172342](https://user-images.githubusercontent.com/78430607/157233621-1e25b74d-05e7-4b57-9586-7852b6ace4cf.png)
![Screenshot 2022-03-08 172427](https://user-images.githubusercontent.com/78430607/157233639-ab9b9271-5348-46f0-8514-f1ab629d2634.png)
| Screenshot #2  |
input output 2
![Screenshot 2022-03-03 202230](https://user-images.githubusercontent.com/78430607/156589622-279cf956-58e5-4672-9d8e-1187201d38ab.png)
![Screenshot 2022-03-03 202257](https://user-images.githubusercontent.com/78430607/156589641-7dfd9e98-c523-4375-b39a-07127f84720b.png)



## Binary Tree Zigzag Level Order Traversal
Algorithm that traverses a binary tree from left to right then from right to left for the next leveland alternate between so, it's called Zigzag Level Order Traversal.

![image](https://user-images.githubusercontent.com/29145628/165636674-e022fb00-9e58-457c-90c9-15f0e4d956d9.png)
	
## Time Complexity:
The algorithm traverses each node to put it in the queue so, time comlexity is O(n).
## Space complexity 
As the algorithm contains a queue with maximum size of n(nodes number) and a vector to save nodes in each level with maximum size of n then space complexity is O(n) + O(n) = O(n)

## Algorithm
<pre>
1)  Create rightLeft variable to store the next direction.<br>
    Create vector to store nodes in each level.<br>
    Create queue to store nodes.(BFS)<br>

2)  Push root in queue.<br>
3)  while queue isn't empty<br>
       Assign queue size in s to loop on nodes from the previous level<br>
       Alternate rightLeft (negate)<br>
       for s do<br>
        save front node in queue in temp node<br>
        pop front node from queue<br>
        if temp->left is not null<br>
            push in queue temp->left<br>
        end if<br>
        if temp->right is not null<br>
            push in queue temp->right<br>
        end if<br>
        push in level vector temp value<br>
       end for<br>

       (check the rightLeft direction)<br>
       if rightLeft is true<br>
        reverse level vector<br>
       endif<br>
        print level vector<br>
        clear level vector<br>
            
    end while<br>
</pre>

## Output

> Test 1<br>
Input 1<br>
![image](https://user-images.githubusercontent.com/29145628/165778429-8d96bf2f-9a9f-498c-8f50-48902c103b80.png)<br>
Output 1<br>
![image](https://user-images.githubusercontent.com/29145628/165778615-78ba231f-02e9-4af8-bf2d-79215e861768.png)

> Test 2<br>
Input 2<br>
![image](https://user-images.githubusercontent.com/29145628/165779137-fa49a002-14fe-48c6-bf92-9b01770b1822.png)
Output 2<br>
![image](https://user-images.githubusercontent.com/29145628/165779067-53be85e0-501c-470d-8ef5-e63b540215ac.png)


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
