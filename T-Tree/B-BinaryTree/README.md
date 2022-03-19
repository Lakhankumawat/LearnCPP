<!-- follow the template of Bubble Sort, add the respective heading in Table of content -->


<!-- Table of content -->
# Table of content
- Height of the binary tree

# Binary Tree:

- A tree whose elements have at most 2 children is called a binary tree. 
- Each element of a binary tree can have only 2 children, we name them the left and right child.



## Height of the binary tree

-  The height of a binary tree is equal to the largest number of edges from the root to the most distant leaf node.


### Algorithm

```
begin height(root)
If node is NULL 
  then return 0
Else 
  If left child and right child nodes are NULL 
    return 1
Else 
  take two integers let 'l' and 'r' to store value of left child and right child recursively
  by using formula:
    height_of_a_tree = 1 + (which-one is bigger from 'l' & 'r')
 end height
```

### Output:
1.
```
100
  \
   120
      \
      130
         \
         140
            \
            150
              \
              160
                 \
                 170
```
Height of tree: 7

![o_p5](https://user-images.githubusercontent.com/76229635/158337847-c0be85a6-d577-47ed-a347-dba09652e8e6.png)

2.
```
                 100
           /              \
        30                150
     /    \             /      \
  20       50          122      188
```
Height of tree: 3

![o_p4](https://user-images.githubusercontent.com/76229635/158338061-5043a09d-70ef-449c-adbe-79117bc3ce4f.png)

### Properties

- Time Complexity :
  - Worst case time	: O(n)
