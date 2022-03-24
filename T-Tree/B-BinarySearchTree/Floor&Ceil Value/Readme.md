# Floor Value in Binary Seacrh Tree(BST)
___

> ## What is Floor Value in BST ?
```
Let suppose we are given a key , and we have to find floor value with respect of the key value , present int our BST.
```
**The greatest value present in BST which is just smaller than the key given is called Floor value**
___

# EXAMPLE =>
![image](https://user-images.githubusercontent.com/77873383/159840232-4f926f98-2c2e-4051-a01c-4cea440ff06c.png)


For the given BST , as shown above , if <br>

**1. key= 7 >> Floor value=6** <br>
**2. key= 12 >> Floor value=10**<br>
**1. key= 3 >> Floor value=2**

<br>

****By default if floor value not present in BST for the given Key, then Code will return -1 and if the node's value and key value is same then return node's value as Floor value .**

---

# Approach to find Floor Value in BST:
> A easy approach is to traverse the BST using any traversale method(Inorder or Preorder or Postorder) and keep updating  the closest smaller or same element.


```txt
 1. Start from root
 2. if root->data ==key return node's data as floor value
 3. else if root->data>key then floor value must be at left subtree, Go to root->left
 4. Else floor value must be at root's right subtree , Go to root->right
 5. If after traversal floor value is not found then return -1. 
```
---

# Time & Space Complexity :
> **Time Complexity :** O(h) for the traversal ,  [h is height of BST]<br>
**Space Complexity :** No extra/auxillary space required.
