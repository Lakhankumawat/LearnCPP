# Table of content
- [Construct and Display Genric Tree](#Construct and Display Genric Tree)
    - [Properties](#Properties)
    - [Algorithm](#Algorithm)
    - [Time Complexity](#Complexity)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)

# Construct and Display Genric Tree
- Generic trees are a collection of nodes where each node is a data structure that consists of records and a list of references to its children  (duplicate references are not allowed).  
- Unlike the linked list, each node stores the address of multiple nodes.
- Every node stores address of its children and the very first node’s address will be stored in a separate pointer called root.

# Properties
- Many children at every node.
- The number of nodes for each node is not known in advance.

# Algorithm
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
- For creatingtreee()
  O(n) ,where n is the number of node
- For display())
  O(n) ,where n is the number of node
### Advantages 

- Memory efficient – No extra links are required, hence a lot of memory is saved.
- Treated as binary trees – Since we are able to convert any generic tree to binary representation, we can treat all generic trees with a first child/next sibling representation as binary trees. Instead of left and right pointers, we just use firstChild and nextSibling.
- Many algorithms can be expressed more easily because it is just a binary tree.
- Each node is of fixed size no auxiliary array or vector is required.

### Disadvantages

- Memory Wastage – All the pointers are not required in all the cases. Hence, there is lot of memory wastage.
- Unknown number of children – The number of children for each node is not known in advance.