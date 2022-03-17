# Table of Contents
* [Explanation](#explanation)  
* [Time Complexity](#time-complexity-of-min-max-heap)  

-[k-largest Elements in an Array](#k-largest-elements)
## Explanation  

### How are Min/Max Heaps represented?

A Min/Max heap is typically represented as an array.

Arr[0] Returns the root node.  
Arr[(i-1)/2] Returns the parent node.  
Arr[(2*i)+1] Returns the left child node.  
Arr[(2*i)+2] Returns the right child node.  
![Min-Max-Heap](https://user-images.githubusercontent.com/78564629/158753758-355eeb78-412a-48cd-a747-18211717d0fe.png)  

### Time Complexity of Min Max Heap
**Get Max or Min Element**  
The Time Complexity of this operation is O(1).  

**Remove Max or Min Element**  
The time complexity of this operation is O(Log n) because we need to maintain the max/min at their root node, which takes Log n operations.  

**Insert an Element**  
Time Complexity of this operation is O(Log n) because we insert the value at the end of the tree and traverse up to remove violated property of min/max heap.  


# K Largest Elements
-[Problem Statment](#problem-statement)  
-[Sample in/op](#sample-input)  
-[Time Complexity](#time-complexity)
### Problem Statement
Given an array Arr of N positive integers, find K largest elements from the array. The output elements should be printed in decreasing order.  
#### Sample input
```
N = 6, K = 3  
Arr[] = {1, 2, 7, 3, 9, 19}  
```
**Sample output**  
```
[19, 9, 7]  
```
### EXPLANATION with pseudo code
```
            priority_queue <int, vector<int>, greater<int> > minHeap ;   // created a min Heap
	    for(int i=0 ; i<n ; i++)                // traverse through the array
	    {
	        minHeap.push(arr[i]);               // push it into min Heap
	        while(minHeap.size() > k)     // delete the root soon when the min Heap size exceeds k
	        {
	            minHeap.pop() ;
	        }
	    }
      
	    // Now its your choice to show in output the way you want
	    
            int size = minHeap.size() ;
	    vector<int> v(size) ;
	    int index= size-1; 
	    while(!minHeap.empty())
	    {
	        v[index--] = minHeap.top() ;
	        minHeap.pop() ;
	    }
	    
	    return v; 
```

### Time Complexity
###### Time Complexity:  
#### O(k*log(k) + (n-k)*log(k))  without sorted output
#### O(k*log(k) + (n-k)*log(k) + k*log(k)) with sorted output
