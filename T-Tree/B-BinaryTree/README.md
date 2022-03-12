#**Convert a Binary Tree into its Mirror Tree**

Mirror of a Tree: Mirror of a Binary Tree T is another Binary Tree M(T) with left and right children of all non-leaf nodes interchanged. 

![Screenshot (235)](https://user-images.githubusercontent.com/81473660/157376212-b8ea84cc-0778-4968-bb22-9b1f54a5ea34.png)

**EXAMPLE 1**




![Screenshot (239)](https://user-images.githubusercontent.com/81473660/157790817-35f0fda1-a3eb-4349-849c-7e0f04f292a6.png)

**EXAMPLE 2**




![Screenshot (241)](https://user-images.githubusercontent.com/81473660/157790974-73606599-4f61-460f-8d83-f506c47bfba2.png)



##**Algorithm**

(1) Mirror the left-subtree    i.e., Mirror(left-subtree)

(2) Mirror the right-subtree  i.e., Mirror(right-subtree)

(3)  Swap left and right subtrees.



**Given the representation of program :** 

![Screenshot (233)](https://user-images.githubusercontent.com/81473660/157375594-cc2fbb46-6ee3-4136-a88a-fc4195f0ad76.png)


**Time Complexity:** O(n)  
**Auxiliary Space:** O(HEIGHT OF TREE)
