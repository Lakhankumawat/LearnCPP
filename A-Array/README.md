<!-- Table of content -->
# Table of content
- [Table of content](#table-of-content)
  - [1. Sort an Array of 0s, 1s and 2s](#1-sort-an-array-of-0s-1s-and-2s)
    - [Dutch National Flag Algorithm](#dutch-national-flag-algorithm)
    - [Properties](#properties)
    - [Sample Output](#sample-output)
  - [2. Insertion of an element in an Array](#2-insertion-of-an-element-in-an-array)
    - [Properties](#properties-1)
  - [3. Traversing an Array](#3-traversing-an-array)
    - [Properties](#properties-2)


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

## 2. Insertion of an element in an Array

To insert an element in an array at kth position, we follow these steps --

1. Enter the number of elements in an array to be taken.
2. Enter the values of all its elements.
3. Get the element value which needs to be inserted.
4. Get the position value.
5. Check whether the position value is valid or not.
6. If it is valid,
      Shift all the elements from the last index to position index by 1 position to the right.
      Insert the new element in arr[position]
7. Otherwise,
   Invalid Position

### Properties
* Time Complexity at Worst Case: O(n)
* Time Complexity at Best Case: O(1)
* Space Complexity: O(1)

## 3. Traversing an Array

To traverse an array or elements of an array, we follow these steps --

1. Enter the number of elements in an array to be taken.
2. Enter the values of all its elements.
3. [Initialization] Set I = LB   (I is Counter Variable)
4. Repeat Step 5 and Step 6 while I  < = UB
5. [ processing ] Process the A[I] element
6. [ Increment the counter ] I = I + 1
   [ End of the loop]
7. Exit 

### Properties
* Time Complexity: O(n)
* Space Complexity: O(1)