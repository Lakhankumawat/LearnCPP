//SEGMENT TREE;

We start with a segment arr[0 . . . n-1]. and every time we divide the current segment into two halves(if it has not yet become a segment of length 1),
and then call the same procedure on both halves, and for each such segment, we store the sum in the corresponding node. 
All levels of the constructed segment tree will be completely filled except the last level. Also, the tree will be a Full Binary Tree because we always 
divide segments in two halves at every level. Since the constructed tree is always a full binary tree with n leaves, there will be n-1 internal nodes. 
So the total number of nodes will be 2*n – 1. Note that this does not include dummy nodes.

Query for Sum of given range :--
Once the tree is constructed, how to get the sum using the constructed segment tree. The following is the algorithm to get the sum of elements.  

int getSum(node, l, r) 
{
   if the range of the node is within l and r
        return value in the node
   else if the range of the node is completely outside l and r
        return 0
   else
    return getSum(node's left child, l, r) + 
           getSum(node's right child, l, r)
}

Update a value 
Like tree construction and query operations, the update can also be done recursively. We are given an index which needs to be updated.
Let diff be the value to be added. We start from the root of the segment tree and add diff to all nodes which have given index in their range.
If a node doesn’t have a given index in its range, we don’t make any changes to that node.

Time Complexity: 
Time Complexity for tree construction is O(n). There are total 2n-1 nodes, and value of every node is calculated only once in tree construction.
Time complexity to query is O(Logn). To query a sum, we process at most four nodes at every level and number of levels is O(Logn). 
The time complexity of update is also O(Logn). To update a leaf value, we process one node at every level and number of levels is O(Logn).
