## Ceil Value in Binary Seacrh Tree(BST)
___

> ## What is Ceil Value in BST ?
```
Let suppose we are given a key , and we have to find Ceil value with respect of the key value , present int our BST.
```
**The Smallest value present in BST which is just greater or equal to the the key given is called Ceil value**
___
## EXAMPLE =>
![image](https://user-images.githubusercontent.com/77873383/159840232-4f926f98-2c2e-4051-a01c-4cea440ff06c.png)


For the given BST , as shown above , if <br>

**1. key= 7 >> Ceil value=7** <br>
**2. key= 12 >> Ceil value=13**<br>
**1. key= 5 >> Ceil value=6**

<br>

****By default if Ceil value not present in BST for the given Key, then Code will return -1 and if the node's value and key value is same then return node's value as Ceilvalue .**

---

## Approach to find Ceil Value in BST:
> A easy approach is to traverse the BST using any traversale method(Inorder or Preorder or Postorder) and keep updating  the closest Greater or same element.

```txt
 1. Start from root
 2. if root->data ==key return node's data as Ceil value
 3. else if root->data>key then Ceil value must be at left subtree, Go to root->left
 4. Else ceil value must be at root's right subtree , Go to root->right
 5. If after traversal Ceil value is not found then return -1. 
```
---

## Time & Space Complexity :
> **Time Complexity :** O(h) for the traversal ,  [h is height of BST]<br>
**Space Complexity :** No extra/auxillary space required.
