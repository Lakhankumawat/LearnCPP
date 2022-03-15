#### How are Min/Max Heaps represented?

A Min/Max heap is typically represented as an array.

Arr[0] Returns the root node.
Arr[(i-1)/2] Returns the parent node.
Arr[(2*i)+1] Returns the left child node.
Arr[(2*i)+2] Returns the right child node.

#### Time Complexity of Min/Max Heap
Get Max or Min Element

The Time Complexity of this operation is O(1).
Remove Max or Min Element

The time complexity of this operation is O(Log n) because we need to maintain the max/mix at their root node, which takes Log n operations.
Insert an Element

Time Complexity of this operation is O(Log n) because we insert the value at the end of the tree and traverse up to remove violated property of min/max heap.