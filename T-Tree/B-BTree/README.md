#  B-Tree

## Table of content
- [Description](#description)
- [Algorithm](#algorithm)
- [Time Analysis for B-Tree](#Time-Analysis-for-B-Tree)
- [Applications and Drawbakcs](#Applications-and-Drawbakcs)
- [Output](#output)

## Description
<img width="717" alt="Screenshot 2022-03-07 at 9 40 51 AM" src="https://user-images.githubusercontent.com/93306058/156966549-99206681-3c63-4f8c-bc92-d6c055822cd8.png">
<hr>
A B-tree is a tree data structure that keeps data sorted and permits logarithmic amortised searches, insertions, and deletions. It is optimised for systems that read and write huge blocks of data, unlike self-balancing binary search trees.

B-tree nodes have much more than two children, which is one of its most important qualities.
More than one element can be found in a B-tree node.
The B-tree rules are defined as follows: A positive constant number named MINIMUM is utilised in every B-tree to decide how many elements are retained at a single node.

- Rule 1: The root can only have one element (or none if it also has no children); every other node must have at least MINIMUM items.
- Rule 2: A node's maximum number of elements is twice its MINIMUM value.
- Rule 3: Each B-tree node's elements are stored in a partially populated array, sorted from smallest (at index 0) to largest (at index 1). (at the final used position of the array).
- Rule 4: There are always one more subtrees below a nonleaf node than there are items in the node.
0 subtrees, 1 subtree,...
- Rule 5: An element at index I is more than all the elements in the node's subtree number I and an element at index I is less than all the elements in the node's subtree number I + 1.
- Rule 6: In a B-tree, every leaf has the same depth. As a result, a B-tree avoids the issue of an unbalanced tree.

## Algorithm
### Search
B-TREE-SEARCH takes a pointer to a subtree's root node x and a key k to search for in that subtree as input. As a result, the top-level call is of the form B-TREE-SEARCH (root[T], k). B-TREE-SEARCH produces the ordered pair (y,i) consisting of a node y and an index I such that keyi[y] = k if k is in the B-tree. Otherwise, NIL will be returned.

### Insert
Inserting a key k into a B-tree T of height h is done in a single pass down the tree, requiring O(h) disk accesses. The CPU time required is O(th) = O(t logt n). The B-TREE-INSERT procedure uses B-TREE-SPLIT-CHILD to guarantee that the recursion never descends to a full node.

Inserting a key into a B-tree is far more difficult than it is to insert a key into a binary search tree. Splitting a full node y (with 2t - 1 keys) around its median key keyt[y] into two nodes with t - 1 keys each is a fundamental procedure utilised during insertion. The median key travels up into y's parent to indicate the dividing point between the two new trees; if y has no parent, the tree rises in height by one. Splitting is the process by which the tree develops.

A nonfull internal node x (assumed to be in main memory), an index I and a node y such that y = ci[x] is a full child of x are all inputs to the algorithm B-TREE-SPLIT-CHILD. The technique then divides this child in half and changes x to create an extra child.

## Time Analysis for B-Tree
Assume there are n elements in a B-tree, and M is the maximum number of children a node can have. What is the maximum depth to which the tree can grow? What is the bare minimum of the tree's depth?

The worst-case depth (maximum depth) of a B-tree is: logM/2 n.

The best-case depth (minimum depth) of a B-tree is: logM n.

Worst-Case Times for B-Trees:

Adding or removing an element in a B-tree with n elements is O(log n).
| Algorithm  | Time Complexity |
| ---------- | --------------- |
|   Search   |     O(log n)    |
|   Insert   |     O(log n)    |
|   Delete   |     O(log n)    |

## Applications and Drawbakcs 

1. It is used to access data stored on disc in huge databases.
2. B tree can greatly reduce the time it takes to search for data in a data source.
3. Multilevel indexing is possible with the indexing feature.
4. B-tree is also used by the majority of servers.

The difficulty of traversing the keys sequentially is B-worst tree's flaw.

## Output
<img width="1313" alt="Screenshot 2022-03-07 at 9 39 31 AM" src="https://user-images.githubusercontent.com/93306058/156966422-92795245-93ea-4c1b-afd8-b717c5c79456.png">
