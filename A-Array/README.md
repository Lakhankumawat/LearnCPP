
#  Reversing of Array

# [REVERSE1]
 ## ALGORITHM

1.Take input the size of the array and the elements of the array.
 2.Consider a function reverse1 which takes the parameters-the array(say arr) and the size of the array(say n).
 3.Inside the function, a new array (with the array size of the first array, arr) is initialized. The array arr[] is iterated from the first element, and each element of array arr[] is placed in the new array from the back, i.e., the new array is iterated from its last element.
 4.In this way, all the elements of the array arr[] are placed reversely in the new array.
 5.Further, we can iterate through the new array from the beginning and print the elements of the array.

 ## PROPERTIES
 Time-complexity-->O(n)
 Space-complexity-->O(n)

 ## EXAMPLES
1->Input : 1, 2, 3, 4, 5
 Output :5, 4, 3, 2, 1

2->Input :  10, 20, 30, 40
 Output : 40, 30, 20, 10



 # [Reverse2]

 ## ALGORITHM
 The reverse2 method uses a similar code for the inputting and printing of the array. However, we don’t create a new array like the above method. Instead, we reverse the original array itself. In this method, we swap the elements of the array. The first element is swapped with the last element. The second element is swapped with the last but one element and so on. 
 For instance, consider array [1, 2, 3, …., n-2, n-1, n]. We swap 1 with n, 2 with n-1, 3 with n-2 and further. 

## PROPERTIES
Time-complexity-->O(n)
 Space-complexity-->O(1)

 ## EXAMPLES
 1->Input : 1, 2, 3, 4, 5
 Output :5, 4, 3, 2, 1

 2->Input :  10, 20, 30, 40
 Output : 40, 30, 20, 10
