## levelorderTraversal
Given a binary tree, print its nodes level by level, like print all nodes of level 1 first, then nodes of level 2 and so on… Print nodes for any level from left to right.
for example:-

                                    1
                                    
                                  /  \
                                  
                                2      3
                                
                              /   \
                              
                             4     5
                             
                             
                            
                         output:-   1
                                    2 3      ===== 1 2 3 4 5
                                    4 5
                         
## Time Complexity:
The time complexity of the levelorder traversal is O(n).
## Space complexity 
requires O(n) extra space, where n is the size of the binary tree.

## algorithm
1.initiating a new queue modeled using an array. We then push the root node to the queue.

2.While the queue is not equal to NULL, we will run a while loop.

3.First, within the loop, we want to remove the first element from the top of the queue. This will be the current node.

4.In the case of this problem here I would simply print the current node’s value. This will print out the values of the binary tree in level order traversal.

5.Lastly, we check if the node has any left or right children and add those to the queue. Make sure to add to the end of the queue to ensure FIFO
.
## Output Screenshots
| #Screenshot 1|
input output 1
![Screenshot 2022-03-13 090856](https://user-images.githubusercontent.com/78430607/158042584-fae4612e-fe0d-4657-89f2-dce2463f7e14.png)

| Screenshot #2  |
input output 2
![Screenshot 2022-03-13 090744](https://user-images.githubusercontent.com/78430607/158042595-b31e0829-f0ee-4d27-8b0d-c8d6f9870999.png)



