# Table of contents:
- [Trace and Normal of Matrix](trace-and-normal-of-matrix)
- [Sort an Array of 0s, 1s and 2s](sort-an-array-of-0s-1s-and-2s)

# Trace and Normal of Matrix
  - [Trace](#trace)
  - [Normal](#normal)
  - [Properties_of_trace_matrix](#properties-of-trace-matrix)
  - [Example](#example)
  - [Algorithim](#algorithim)
  - [Time complexity](#time-complexity)

## Trace:

The trace of a matrix A, defined by tr(A), is the sum of the diagonal elements of a matrix. Trace of a matrix is only possible for square matrix.

## Normal:

The normal of matrix is the sum of all the elements of a matrix and then the square root of sum.

## Properties of trace matrix:
```
 --> tr(A + B) = tr(A) +tr(B)
 --> tr(cA) = ctr(A)  ** c represents scalars
 --> tr(A) = tr(A^T)  ** T means transpose of matrix 
```
## Example: 

![image](https://user-images.githubusercontent.com/100208233/158046978-b535dc41-9ad6-4d5b-ad27-0580fa836415.png)

### Trace:

we have taken following as the elements of a matrix 
2 3 5
7 4 5
8 5 4

we have to add all the elements of the matrix and store it in sum variable,sum = 2+3+5+7+4+5+8+5+4 then we will find the square root of sum we get 6.55
so, normal of matrix = 6.55

### Normal:

Now we will first check the conditions for trace of matrix (i.e. row==column) then we will add all the diagonal elements 
trace = 2+4+4  so, trace of matrix = 10

## Algorithim:
```
1. Enter the order of a matrix (eg: 3X3 or 2X2 etc...)
2. Using loop enter the elements of a matrix .
3. Printing the elements of the matrix .
4. Finding the sum of all the elements of the matrix .
5. Then the square root of the sum using sqrt() to find the normal of the matrix and store it in variable normal.
6. Using the condition row == column we can find the sum of diagonal elements of a matrix , value of sum will be store in
 variable trace .
7. Print the value of normal and trace of a matrix .
```
## Time complexity:
```
Time complexity of trace of a matrix is n^2.
Time complexity of normal of a matrix is n^2.
```

<!-- Table of content -->

# Sort an Array of 0s, 1s and 2s
    - [1. Sort an Array of 0s, 1s and 2s](#1-sort-an-array-of-0s-1s-and-2s)
    - [Dutch National Flag Algorithm](#dutch-national-flag-algorithm)
    - [Properties](#properties)
    - [Sample Output](#sample-output)


## [1. Sort an Array of 0s, 1s and 2s](https://github.com/Lakhankumawat/LearnCPP/blob/main/A-Array/Sort_0_1_2.cpp)

![Snap](https://user-images.githubusercontent.com/53018678/156426951-61050466-bf4a-4685-be42-e81a5cf623cb.png)


> Given an array consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
<hr>

### Dutch National Flag Algorithm
```
begin sortArray(array)
   int low = 0
   int mid = 0
   int high = array.size() - 1

   while(mid <= high)
      if (array[mid] == 0)
         swap(array[low], array[mid])
         low++
         mid++
      else if (array[mid] == 1)
         mid++
      else
         swap(array[mid], array[high])
         high--
      end if
   end while

   return array

end sortArray
```
   <hr>

### Properties
* Time Complexity: O(n)
* Space Complexity: O(1)
* In-Place: Yes
* Stable: Yes

### Sample Output
![Snap2](https://user-images.githubusercontent.com/53018678/156428828-324bda09-356d-47dc-bfaa-793bae0a3dff.png)


<hr>

- For More Reference Please Check Out -> 
[Geeks For Geeks](https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/)


# Finding all subarrays




An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array). The base value is index 0 and the difference between the two indexes is the offset.

## Time complexity

- Insertion - O(n)
- Search - O(n)
- Deletion - O(n)
- Traverse - O(n)


## Space complexity

- Worst Case - O(n)

### Screenshots
![image](https://user-images.githubusercontent.com/81483787/158232078-d33fd3b9-63a3-4ad3-abe7-064b2508fcb7.png)
![image](https://user-images.githubusercontent.com/81483787/158232241-331db6d0-1b6d-4c55-aa4b-28f18154641c.png)

