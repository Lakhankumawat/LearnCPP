
# [Search element in rotated sorted array](https://leetcode.com/problems/search-in-rotated-sorted-array/)

### Naive Approach
Use Linear Search to check if the element is present in the array or not. 

Time Complexity: ` O(n) `  where n is size of the array
Space Complexity: ` O(1) `

### Optimal Approach
Since, it is given that the array is sorted, we will solve this problem using Binary Search.

Consider this array:- arr= [4,5,6,7,0,1,2]   n=7, element=1

Suppose, we are standing on index 1.

![image](https://user-images.githubusercontent.com/99183334/159004776-0feeaff8-b5e3-46d9-a1ed-f43207dd3c1a.png)

Now, if we carefully observe the left half is sorted and the right half is unsorted.

![image](https://user-images.githubusercontent.com/99183334/159002873-831d0bfc-d6f7-48b5-9e68-ac8abe9c0237.png)

Similarly, if we look at index 4, the left half is unsorted and the right half is sorted.

![image](https://user-images.githubusercontent.com/99183334/159003631-2488cd15-3214-46bb-b9de-27f112da7c93.png)

Therefore, if we are standing on any index, either the left half is sorted or the right half is sorted.

Case 1: Check if mid is equal to the element `arr[mid]==element` . If yes, then `return mid`
Case 2a: Check if the left half of the array is sorted `arr[low]<=arr[mid]`.
        Now, check if the element lies in the left sorted half `element>=arr[low] && element< arr[mid]`
            i)If yes, then search in left sorted half `high=mid-1`
            ii) else, the element must lie in the right unsorted half `low=mid+1`
Case 2b: The right half of the array must be sorted .
        Now, check if the element lies in the right sorted half `element>arr[mid] && element<= arr[high]`
            i)If yes, then search in right sorted half `low=mid+1`
            ii)else, the element must lie in the left unsorted half `high=mid-1`



Time Complexity: ` O(log n) `  where n is size of the array
Space Complexity: ` O(1) `
