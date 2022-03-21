# Table of content
- [Diameter of a Genric Tree](#Diameter of a Genric Tree)
    - [Properties](#Properties)
    - [Algorithm](#Algorithm)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Diameter of a Genric Tree
- The diameter is defined as the maximum number of edges between any two nodes in the tree.
- So the diameter between two nodes must contains two leaf nodes so as it can be longest as per it's defination.
- In the left tree, diameter is 5 and in the right tree, the diameter is 8 in the pic below. 

- //img

- To be noted that the diameter may not necessarily include the root node as shown in the right tree.

### Properties

- Diameter of a genric tree may not necessarily include the root node.
- Diameter of a genric tree necessarily include two leaf node.

### Algorithm

- Maximize the number of edges between any two nodes to calculate diameter.
- To be noted that to maximize the number of edges have to always consider the leaf nodes.
- Find a diameter that passes through current node,in the function below.
diameter(Node* root)
- Find it by adding the deepest subtree and second deepest subtree and adding 2 to their sum.
- Getting the deepest and second deepest subtree ensures that the maximum possible edges from the current node and 2 is added to link both the leaves.
-  After that compare this ch with ht, if ch is greater than ht then update sh with ht and then ht with ch.
- Once we out of the for loop, compare values of dia (largest diameter) and diameter of current node (ht + sh + 2).
- If the value of diameter of the current node is greater than the value of dia, then update dia with (ht + sh + 2).
- Update ht by adding 1 to it, which gives the height of the node, finally return the updated height.

### Time Complexity

- For construct()
O(n), where is number of nodes. 
- The time complexity for the function is linear as tree traversal is involved which is linear in terms of time complexity
O(n), where is number of nodes.

### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- We even can visualise how leaf node plays vital role.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Need to traverse all the tree to find diameter.
- Unknown number of children – The number of children for each node is not known in advance.