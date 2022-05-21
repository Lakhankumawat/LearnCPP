## Check for Valid BST:

### Description:
We will be Given a Tree, we have to check that the given tree is BST or not? 
**Conditions for Valid BST -** For every parent Node present in the tree must have Left Subtree with lower values and right Subtree with higher values.
 <br><br>

![](https://media.geeksforgeeks.org/wp-content/uploads/BSTSearch.png)

### Approach:
For Every Node We have to check that all values present in Left-Subtree will be less than parent and all node values present at right of parent are greater than parent.

### Algorithm:
- For every Node We take a certain valid range and between that range node value will be lie to fullfill to be Valid BST
 Initial Range of Parent/Root Node is taken as 
 ```[INT_MIN, INT_MAX]```

- For every **Left Child** the range will be  ```[INT_MIN, parent->data]```
- For every **Right Child** the range will be 
 ```[parent->data, INT_MAX]```
- During Recursion if any Node disagreed these Condition retuen false .

![validBST](https://user-images.githubusercontent.com/77873383/164070536-557900b0-8054-4c5a-a0f8-6a534f9ff141.png)


### Pseudo Code :
```cpp
bool validBST(Node*root, long minVal,long maxVal){
    if(root==NULL)return true; //empty Tree is valid
    if(root->data>=maxVal or root->data<=minVal)return false;

    return valid(root->left,minVal,root->data)and valid(root->right,root->data,maxVal);//1st Left recursion Then right 
}
```
### Time & Space Complexity:
- Time Complexity : O(N)
- Space Complexity : O(1)
