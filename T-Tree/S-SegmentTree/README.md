## Segment Tree
A Segment Tree is a data structure that allows answering range queries over an array effectively, while still being flexible enough to allow modifying the array. This includes finding the sum of consecutive array elements a[l...r], or finding the minimum element in a such a range in O(log n)  time. Between answering such queries, the Segment Tree allows modifying the array by replacing one element, or even changing the elements of a whole subsegment (e.g. assigning all elements a[l...r]  to any value, or adding a value to all element in the subsegment).

![Visual Representation of a Segment Tree](https://cp-algorithms.com/data_structures/sum-segment-tree.png)


### Time Complexity
    Update -> O(log n) 
    Query -> O(log n)

### Space Complexity

    In the tree, each node stores the sum of the array elements in the range represented by the node.

    Base Leaves=n
    Height of the tree= ceil[log n]
    Total nodes=n*2-1
    Total nodes in the tree=n*2^(log n)

    Make the tree array of size 2*n-1
    The tree array is filled with the sum of the array elements in the range represented by the node.

### Filling the Tree Array
    The tree array is filled in the following way:
    1. The first n elements of the tree array are filled with the array elements.
    2. The next n-1 elements of the tree array are filled with the sum of the first n elements.
    3. The next n-2 elements of the tree array are filled with the sum of the first n-1 elements.
    4. The next n-3 elements of the tree array are filled with the sum of the first n-2 elements.
    5. And so on.

### Size of Tree
    Size of segment tree = 2*n-1
    
### Operations on a segment tree
    1. Update(i, val) => Given i and val, update the array element A[i] as A[i]+=val;
    2. Query(l, r) => Return the sum of the array elements in the range A[l...r];
    3. Build(arr, v, n) => Build the segment tree for the given array arr of size n.
    
    

