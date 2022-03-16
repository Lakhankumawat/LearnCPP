# Table of content
- [Minimum distance between two nodes in a Genric Tree](#Minimum distance between two nodes in a Genric Tree)
    - [Properties](#Properties)
    - [Algorithm](#Algorithm)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Minimum distance between two nodes in a Genric Tree
- Distance refers to the edges between them. Now in a tree, there is always one path from one node to another.
- So the distance between two nodes must pass through their ancestor from the defination of generic tree.
- Ancestor will have refrence to both of the node.

### Properties
- Minimum distance between two nodes will contains parent node.
- Atleast one valid path always exists between any two nodes in a tree.

### Algorithm
- Calculate node to root path for both the nodes
- Keep iterating from the end and the last equal items in the path of both the nodes becomes the LCA
- Now the distance between two nodes will be the distance of node 1 from LCA in addition to the distance of node 2 from LCA.

### Time Complexity
- For creatingtreee()
  O(n), where is number of nodes. 
- Finding the node in the entire tree to get the node to the root path takes O(n), where is number of nodes.
- just traversing the node-to-root path (arrays) takes O(d) where d = depth of the node. In the worst case, d can be equal to n, hence total time complexity will be O(n) only, where is number of nodes.
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- We even can visualise how parent node plays vital role.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
- Unknown number of children – The number of children for each node is not known in advance.