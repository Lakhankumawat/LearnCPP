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

## Zig Zag Tree Traversal

This is traversal in which we have to traverse in a order , that the first level should be traversed _Left to right_ and next should be traversed _right to left_ and this should level by level , so we can say that this is the **level order zig zag traversal**.

### Approach

1. We will assume two stacks of name `curlevel` and `nextelvel`.
2. We also maintain a variable name `LeftToRight` for keeping track that we have to traverse left to right or right to left.
3. Whenever , the current level order is from left to right, push the nodes left child, then its right child to the stack nextlevel.
4. Next time when nodes are popped off nextlevel, it will be in the reverse order.
5. when the current level order is from right to left, we would push the nodes right child first, then its left child. Finally. \
   **Note:-** Don't forget to swap `nextLevel` and `curLevel` at the end of each level (condition **curLevel** must be empty).

### Time & Space Complexities

1. Time Complexity :- `O(n)` where **n** is the number of nodes.
2. Space Complexity :- `O(n) + (n) = O(n)` where **n** is the number of nodes.

### Output Screenshots
![image](https://user-images.githubusercontent.com/86917304/166304303-55655284-7d4e-40c0-b56e-00aeb82d2844.png)

