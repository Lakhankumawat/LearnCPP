<!-- Table of content -->
# Table of content
- [Table of content](#table-of-content)
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

<hr>

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
