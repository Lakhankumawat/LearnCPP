# Table of content
- [Construct and Display Genric Tree](#construct-and-display-genric-tree)
    - [Properties](#properties)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantages)
    
- [Minimum distance between two nodes in a Genric Tree](#minimum-distance-between-two-nodes-in-a-genric-tree) 
    - [Properties](#properties-1)
    - [Algorithm](#algorithm-1)
    - [Time Complexity](#time-complexity-1)
    - [Advantages](#advantages-1)
    - [Disadvantage](#disadvantages-1)
    
- [Diameter of a Genric Tree](#Diameter-of-a-genric-tree)
    - [Properties](#Properties)
    - [Algorithm](#Algorithm)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

- [Mirror of a Genric Tree](#Mirror-of-a-genric-tree)
    - [Properties](#properties)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantages)
    
- [Level order traversal in a Genric Tree](#Level-order-traversal-in-a-genric-tree) 
    - [Properties](#properties)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantages)

- [Iterative Preorder and Postorder Traversal of Generic Tree ](#Iterative-Preorder-and-Postorder-Traversal-of-Generic-Tree) 
    - [Properties](#properties)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantages)

# Construct and Display Genric Tree

- Generic trees are a collection of nodes where each node is a data structure that consists of records and a list of references to its children  (duplicate references are not allowed).  
- Unlike the linked list, each node stores the address of multiple nodes.
- Every node stores address of its children and the very first node’s address will be stored in a separate pointer called root.

![generic-tree_gfg](https://user-images.githubusercontent.com/55774240/158732482-11f84781-453f-4d25-8826-8ef54a5b0490.png)


### Properties

- Many children at every node.
- The number of nodes for each node is not known in advance.

### Algorithm

- use Dynamic Arrays for storing the address of  children’s address
- construct node class to understand structure of genric tree.
member values of node class are 
int data;
vector<node*> children;
- Create newnode and add data in it and push back in array as  st.top()->children.push_back(newnode);
- fetch root node and use recursion to print rest of the node in the display function 
for(node*child:root->children){
display(child);
}

### Time Complexity
```
- For creatingtreee()
  O(n) ,where n is the number of node
- For display()
  O(n) ,where n is the number of node
 ``` 
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- Treated as binary trees – Since we are able to convert any generic tree to binary representation, we can treat all generic trees with a first child/next sibling representation as binary trees. Instead of left and right pointers, we just use firstChild and nextSibling.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
- Unknown number of children – The number of children for each node is not known in advance.



# Minimum distance between two nodes in a Genric Tree

- Distance refers to the edges between them. Now in a tree, there is always one path from one node to another.
- So the distance between two nodes must pass through their ancestor from the defination of generic tree.
- Ancestor will have refrence to both of the node.

![some1](https://user-images.githubusercontent.com/55774240/158732716-cfea4195-85db-4631-9ec4-f6ca50000875.jpg)


### Properties

- Minimum distance between two nodes will contains parent node.
- Atleast one valid path always exists between any two nodes in a tree.

### Algorithm

- Calculate node to root path for both the nodes
- Keep iterating from the end and the last equal items in the path of both the nodes becomes the LCA
- Now the distance between two nodes will be the distance of node 1 from LCA in addition to the distance of node 2 from LCA.

### Time Complexity
```
- For creatingtreee()
  O(n), where is number of nodes. 
- Finding the node in the entire tree to get the node to the root path takes O(n), where is number of nodes.
- just traversing the node-to-root path (arrays) takes O(d) where d = depth of the node.
  In the worst case, d can be equal to n, hence total time complexity will be O(n) only, where is number of nodes.
```
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- We even can visualise how parent node plays vital role.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
- Unknown number of children – The number of children for each node is not known in advance.



# Diameter of a Genric Tree

- The diameter is defined as the maximum number of edges between any two nodes in the tree.
- So the diameter between two nodes must contains two leaf nodes so as it can be longest as per it's defination.
- In the left tree, diameter is 5 and in the right tree, the diameter is 8 in the pic below.


![Screenshot (488)](https://user-images.githubusercontent.com/98539013/159484343-7982a5eb-94b9-4c84-bd3c-b4cca6dc3ead.png)

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
```
- For construct()
O(n), where is number of nodes. 
- The time complexity for the function is linear as tree traversal is involved which is linear in terms of time complexity
O(n), where is number of nodes.
```
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- We even can visualise how leaf node plays vital role.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Need to traverse all the tree to find diameter.
- Unknown number of children – The number of children for each node is not known in advance.



# Mirror of a Genric Tree

- An image or object which is identical in form to another, but with the structure reversed, as in a mirror.
- Mirror image can be understand as lateral inversion.
- Each element of the mirror image is the same distance behind the mirror as each element of the object is in front of the mirror.

![Screenshot (503)](https://user-images.githubusercontent.com/98539013/160352051-d08c4dc0-1583-4a83-9836-48d08cab1e94.png)

### Properties
- The image obtained is virtual.
- The image is laterally inverted.
- The image is erect.
- The size of the image is the same as the size of the object.
- The distance between the image obtained is the same as the distance between the object from the mirror.

### Algorithm

- Recursively call the mirror function on all the children of the root of the generic tree.
- Reverse the families of its children using reverse function or use the following code for children from 0th position to (size-1)th posotion.
- Make a temprary node and store children at ith position of the parent node.
Node *temp = node->children[i];
- Assign jth children to ith children of the parent node.
node->children[i] = node->children[j];
- And then assign value of temp node to jth children
node->children[j] = temp;
hence reverse is done, and this will give our desired output on printing it using display function.

### Time Complexity
```
- For constructor01()
O(n), where is number of nodes. 
- For display()
O(n), where is number of nodes.
- Time complexity for the mirror function is linear as we post traversing the tree.
there fore overall Timecomplexity is
O(n), where is number of nodes.
```
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- We even can visualise how mirror nodes are structured.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Need to traverse all the tree to show mirror.
- Unknown number of children – The number of children for each node is not known in advance.



# Level order traversal in a Genric Tree

- "levelorder fashion" is  printing the tree top to bottom levels from left to right where the nodes are separated by spaces.
- We can define in other words as, Level Order Traversal is the algorithm to process all nodes of a tree by traversing through depth, first the root, then the child of the root, etc.

![Screenshot (513)](https://user-images.githubusercontent.com/98539013/162618893-1282526e-17fb-492f-83fa-fa9a22d8712e.png)


### Properties

- Level order traversal is actually a Breadth-First Search.
- It can be used to solve many problems in graph theory.

### Algorithm

- A Queue is defined as a type node.
- A node (basically root), passed as argument, is added to the queue.
- A while loop is applied which runs until the queue is emptied.
- An element (of type node) is removed from the queue and stored in the node.
- The node which was removed in the previous step, its data gets printed in this step.
- Then the children of this node are added to the queue using a for loop.

### Time Complexity
```
- For construct()
  O(n) ,where n is the number of node
- For levelorder()
  O(n) ,where n is the number of node
 Travelling to all the elements of the tree. Every node is processed individually in a while loop
 ``` 
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- This concept can be used to solve many problems in graph theory, for example: Finding all nodes within one connected component.

### Disadvantages

- Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
- Unknown number of children – The number of children for each node is not known in advance.



# Iterative Preorder and Postorder Traversal of Generic Tree 

- Preorder Traversal of a Generic Tree is similar to the preorder traversal of Binary Search Tree or Binary Tree with the only difference that is, all the child nodes of a parent are traversed from left to right in a sequence.
- Postorder Traversal of a Generic Tree is similar to the postorder traversal of Binary Search Tree or Binary Tree with the only difference that is, all the child nodes of a parent are traversed from right to left in a sequence.

![IMG_20220417_170640](https://user-images.githubusercontent.com/98539013/163712759-69235321-141b-4a46-b4d6-582da7342178.jpg)


### Properties

- Preorder traverse gives the node values in a sequence of insertion.
- We can create a copy of the tree by traversing the source tree in this way. 
- Postorder traverse can use this method to delete entire tree cause it visits leaf nodes first.

### Algorithm

- A pair (p) is defined of type Pair and (node, -1) are passed as it's argument. This is the same node which will be received as the argument in this function which is expected to be the root of the generic tree.
- Then a stack, again type Pair, is created to carry out a whole and heavy mission.
- Then the pair is pushed in the stack before the real operation starts.
- A string to store the result for Preorder has been defined which is supposed to be empty in the beginning.
- Similarly, a string to store the result for Postorder has been defined
- Now run a while loop, until the stack empties out.
- To start with, store the top of the stack in a variable top of type pair obviously so that can access it's information.
- Now check, if the state of Pair top equals to -1 then it would mean that now visiting this node for the first time hence it's in a pre-order state. Therefore, concatenate the Preorder string with the data of this top pair and also increment the state of the top pair.
- Otherwise the chances are that the state value ranges from 0 to [node.children.size() - 1] ; these are the values indicating that need to put the state's index child in the stack.
- Furthermore, the only possibility left for the state to be is when the state becomes equal to node.children.size() this means have considered all the children of this node, this also implies that this node is in post-order condition.
- Therefore, concatenate the Postorder string with the data of this top pair and it's time to pop this pair out of the stack. (Use and throw probably!)
- Then print the Preorder String which stores the pre order of the generic tree.
- After that print the Preorder String which stores the pre order of the generic tree.

### Time Complexity
```
- For construct()
  O(n) ,where n is the number of node
- For iterativePreAndPostOrder()
  O(n) ,where n is the number of node
The time complexity for the function is linear as tree traversal is involved which is linear in terms of time complexity.
 ``` 
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- This concept can be used to solve many problems in graph theory, for example: Finding all nodes within one connected component.

### Disadvantages

- Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
- Unknown number of children – The number of children for each node is not known in advance.

