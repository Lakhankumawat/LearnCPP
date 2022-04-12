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