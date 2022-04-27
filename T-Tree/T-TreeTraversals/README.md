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
O(n) --> As we traverse each node.
## Space complexity 
O(n) + O(n) = O(n)

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

## Tracing The Algorithm on the given Example

- rightLeft = true
- Queue: 3
- s = 1
- rightLeft = false
- Enter for loop(1)
- Pop 3
- Queue: 9 20
- Level Vector: 9 20
- level: 3
- exit for
- rightLeft is false then print 3 and clear level vector
- s = 2
- rightLeft = true
- Enter for loop (2)
- Pop 9
- Queue: 20    (9 has no left or right children)
- level: 9
- Pop 20
- Queue: 15 7
- level: 9 20
- exit for
- rightLeft is true then reverse level and print 20 9 then clear level
- s = 2
- rightLeft = false
- Enter for loop (2)
- Pop 15
- Queue: 7
- level: 15
- Pop 7
- Queue: (empty as 15 and 7 have no children)
- level: 15 7
- exit for
- rightLeft is false then print 15 7 then clear level
- end while (queue is empty)
