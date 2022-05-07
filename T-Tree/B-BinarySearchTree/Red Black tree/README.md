Red-Black tree is a self-balancing binary search tree in which each node contains an extra bit for denoting the color of the node, either red or black.

A red-black tree satisfies the following properties:

1. Every node is colored, either red or black.
2. The root is black.
3. Every leaf (NIL) is black.
4. If a red node has children then, the children are always black.
5. For each node, any simple path from this node to any of its descendant leaf has the same black-depth (the number of black nodes).


An example of a red-black tree is:
![image](https://user-images.githubusercontent.com/77603501/167234741-97d7cdd0-2ad1-42d8-80fa-66ad1cf4bd79.png)

## Insertion of a node in a Red Black Tree
1. Check whether tree is Empty.
2. If tree is Empty then insert the newNode as Root node with color Black and exit from the operation.
3. If tree is not Empty then insert the newNode as a leaf node with Red color.
4. If the parent of newNode is Black then exit from the operation.
5. If the parent of newNode is Red then check the color of parent node's sibling of newNode.
6. If it is Black or NULL node then make a suitable Rotation and Recolor it.
7. If it is Red colored node then perform Recolor and Recheck it. Repeat the same until tree becomes Red Black Tree.

## Deletion of a node in a Red Black tree
1. Perform standard Binary Search Tree delete. Now we only need to handle cases where a node is leaf or has one child. 

Let v be the node to be deleted and u be the child that replaces v 


2) Simple Case: 
    - If either u or v is red, we mark the replaced child as black (No change in black height).


3) If Both u and v are Black.

    1. Color u as double black. Now the task reduces to convert this double black to single black.

    2. Do following while the current node u is double black and it is not root. Let sibling of node be s.

        - (a): If sibling s is black and at least one of sibling’s children is red, perform rotation(s).
            
            Let the red child of s be r. This case can be divided in four subcases depending upon positions of s and r.

            - (i) Left Left Case (s is left child of its parent and r is left child of s or both children of s are red). This is mirror of right right case shown in below diagram.

            - (ii) Left Right Case (s is left child of its parent and r is right child). This is mirror of right left case shown in below diagram.

            - (iii) Right Right Case (s is right child of its parent and r is right child of s or both children of s are red)

            - (iv) Right Left Case (s is right child of its parent and r is left child of s)

        - (b): If sibling is black and its both children are black, perform recoloring, and recur for the parent if parent is black.

        - (c): If sibling is red, perform a rotation to move old sibling up, recolor the old sibling and parent. The new sibling is always black. This mainly converts the tree to black sibling case (by rotation) and leads to case (a) or (b). This case can be divided in two subcases.

            - (i) Left Case (s is left child of its parent). This is mirror of right right case shown in below diagram. We right rotate the parent p.

            - (ii) Right Case (s is right child of its parent). We left rotate the parent p.

    3. If u is root, make it single black and return (Black height of complete tree reduces by 1).

## Searching a node in a Red Black tree

1. Perform a binary search on the records in the current node.
2. If a record with the search key is found, then return that record.
3. If the current node is a leaf node and the key is not found, then report an unsuccessful search.
4. Otherwise, follow the proper branch and repeat the process.

## Space and Time Complexity

Average and Worst case time complexity: O(log n)

Average and Worst case Space complexity: O(n)

## Advantages of Red Black Trees

1. Red-black trees are self-balancing so these operations are guaranteed to be O(log(n));
2. Particularly useful when inserts and/or deletes are relatively frequent.

## Disadvantages of Red Black Trees

1. Relatively complicated to implement because of all the operation edge cases;
2. AVL trees offer better performance,if you plan to only build the tree once and then only perform read operations. 

3. Because B-trees can have a variable number of children, they are typically preferred over red-black trees for indexing and storing a large amount of information on disk.


