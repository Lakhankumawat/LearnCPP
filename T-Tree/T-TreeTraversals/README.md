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
