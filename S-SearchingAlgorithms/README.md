
<!-- Table of content -->
# Table of content
- [Searching Algorithms](#searching-algorithms)
 - [classification :](#classification-)
   -  [Linear Search](#linear-search)
       - [Code](#code)
       - [Properties](#properties)
       - [Advantages](#advantages)
       - [Disadvantage](#disadvantage)
   -  [Binary Search](#binary-search)
        - [Explanation](#explanation)
       -  [Code](#desc)
        - [Properties](#binarysearchproperties)
        - [Advantages](#advantagesofbinarysearch)
        - [Disadvantage](#disadvantageofbinarysearch)

# Searching Algorithms

- searching is the process of finding an item with specified properties from a
collection of items. The items may be stored as records in a database, simple data elements in
arrays or they may be elements of other search spaces.
- There are certain ways of organizing the data that improves the searching process.
### Classification :

- Generally There are two categories of searching.
 - a)Sequential Search b) Interval Search:
- The Example of Sequential Search is :-(Linear Search).
- The Example of  Interval Search is  :- (Binary Search).

## Linear Search

- Start from the zero index of array and one by one compare Search Element(X) with each element of arr[].
-  If Search Element(X) matches with an element of the arr[], return the index.
-  If Search Element(X) doesn’t match with any of elements, then return -1.
<!-- image to help better explain the concept -->

![linear_search](https://user-images.githubusercontent.com/88760648/158869345-bce5e75c-57f8-4604-9c5e-f57650c3dfdb.gif)
n
## Some More Example
![linearsearchalgorithim](https://user-images.githubusercontent.com/88760648/158868400-013fdfd5-0acf-4653-bc57-ed79572c08a6.jpeg)
<!-- citation : [Here](https://www.tutorialspoint.com/data_structures_algorithms/linear_search_algorithm.htm)  -->

<!-- citation : [Here](https://thecleverprogrammer.com/2020/09/10/linear-search-algorithm-with-python/)  -->

### Code

```

// C++ code to linearly search x in arr[]. If search ELement (x)
// is present then return its Index, otherwise
// return -1
#include <iostream>
using namespace std;

int search(int arr[], int n, int searchkey)
{
	
	for (int i = 0; i < n; i++)
		if (arr[i] == searchkey)
			return i;
	return -1;
}

// Driver code
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int searchkey; // = 10;
    cin>> searchkey;
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, searchkey);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}


```
### Properties

- Time Complexity : O(n)
- Space Complexity : O(1)
- It has a very simple implementation.

### Advantages

- The list does not need to sorted

### Disadvantage

- Inversely, slow searching of big lists.


## Binary Search
- Binary search algorithm finds a given element in a list of elements with O(log n) time complexity where n is total number of elements in the list.
- Binary search is applied only on monotonic functions,values should either be in increasing order or decreasing order. 
- Binary search can not be used for a list of elements arranged in random order. 

<a name="explanation"></a>
##  Explanation
- This search process starts comparing the search element with the middle element in the list. If both are matched, then the result is "element found and we return   the index". 
- Otherwise, we check whether the search element is smaller or larger than the middle element in the list, then we decide which part we should search.
- If the search element is smaller, then we repeat the same process for the left sublist of the middle element.
- If the search element is larger, then we repeat the same process for the right sublist of the middle element. 
- We repeat this process until we find the search element in the list or until we left with a sublist of only one element.
-  And if that element also doesn't match with the search element, then the result is "Element not found in the list".

### middle = lowerBound + ( upperBound - lowerBound ) / 2
    why we are calculating the middle index this way, we can just simply add the lower and higher index and divide it by 2.
     middle = ( lowerBound +  upperBound ) / 2
But if we calculate the middle index like this it fails for larger values of int variables low and high. Specifically,
it fails if the sum of low and high is greater than the maximum positive int value(2^31 – 1 ).

## Example :

<img src="https://user-images.githubusercontent.com/88760648/159125786-794de973-96ce-478b-bbc9-f2e477f27bc4.png" width="400" height="400">
<!-- citation : [Here](http://www.btechsmartclass.com/data_structures/binary-search.html)  -->
<a name="desc"></a>

##  Code

```
   A ← sorted array
   n ← size of array
   x ← value to be searched

   Set lowerBound = 1
   Set upperBound = n 

   while x not found
      if upperBound < lowerBound 
         EXIT: x does not exists.
   
      set middle = lowerBound + ( upperBound - lowerBound ) / 2
      
      if A[midPoint] < x
         set lowerBound = midPoint + 1
         
      if A[midPoint] > x
         set upperBound = midPoint - 1 

      if A[midPoint] = x 
         EXIT: x found at location midPoint
   end while
   
end procedure
```

<a name="binarysearchproperties"></a>
### Properties
- Time Complexity : O(log n)
- Space complexity : O(1)

<a name="advantagesofbinarysearch"></a>
### Advantages
- It is great to search through large sorted arrays.
- It has a simple implementation.

<a name="disadvantageofbinarysearch"></a>
### Disadvantage
- The biggest problem with a binary search is that you can only use this if the data is sorted into an order.

<a name="#difference"></a>

