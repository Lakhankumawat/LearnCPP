## Morris Traversal
The Morris algorithm for inorder traversal allows you to traverse a tree with O(n) time and O(1) space complexity. But it requires changing the tree at runtime.

## algorithm
Initialize a class Node which contains variables and pointers related to a node.
Create a function MorrisTraversal which accepts the root node.
If the root is null, return.
Set reference curr as root. Traverse while curr is not null.
If the left child of curr is null print value stored in curr and update curr as it’s a right child.
Else update curr as a right node of the rightmost node of its left subtree and update curr as the left child of curr

## Output Screenshots
| #Screenshot 1|
input output 1
![Screenshot 2022-03-08 172342](https://user-images.githubusercontent.com/78430607/157233621-1e25b74d-05e7-4b57-9586-7852b6ace4cf.png)
![Screenshot 2022-03-08 172427](https://user-images.githubusercontent.com/78430607/157233639-ab9b9271-5348-46f0-8514-f1ab629d2634.png)
     | Screenshot #2  |
input output 2
![Screenshot 2022-03-03 202230](https://user-images.githubusercontent.com/78430607/156589622-279cf956-58e5-4672-9d8e-1187201d38ab.png)
![Screenshot 2022-03-03 202257](https://user-images.githubusercontent.com/78430607/156589641-7dfd9e98-c523-4375-b39a-07127f84720b.png)
