# [Inversion Count](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/R-Recursion/Inversion_Count.cpp) 

Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, 
but if the array is sorted in the reverse order, the inversion count is the maximum. <br><br>
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j <br>
## Example
```
Input: arr[] = {8, 4, 2, 1}
Output: 6

Explanation: Given array has six inversions:
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).


Input: arr[] = {3, 1, 2}
Output: 2

Explanation: Given array has two inversions:
(3, 1), (3, 2) 
```
# [Quick Sort](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/R-Recursion/QuickSort.cpp)

Quicksort is a divide and conquer algorithm. Select a random pivot, put it in its correct position, and sort the left and right part recursively. 
There are many different versions of quickSort that pick pivot in different ways: 
1.	Always pick first element as pivot.
2.	Always pick last element as pivot (implemented)
3.	Pick a random element as pivot.
4.	Pick median as pivot.

Technically, quick sort follows the below steps: \
Step 1 − Make any element as pivot \
Step 2 − Partition the array on the basis of pivot \
Step 3 − Apply quick sort on left partition recursively \
Step 4 − Apply quick sort on right partition recursively 

## Example:
![image](https://user-images.githubusercontent.com/62667818/161125194-3613bc6f-5e94-44ed-aa96-a36e0514957a.png)

### Algorithm:
```
/**
* The main function that implements quick sort.
* @Parameters: array, starting index and ending index
*/
quickSort(arr[], start, end)
{
    if (low < high)
    {
        // pivot_index is partitioning index, arr[pivot_index] is now at correct place in sorted array
        pivot_index = partition(arr, start, end);

        quickSort(arr, start, pivot_index - 1);  // Before pivot_index
        quickSort(arr, pivot_index + 1, end); // After pivot_index
    }
}
```


```
/**
* The function selects the last element as pivot element, places that pivot element correctly in the array in such a way that 
  all the elements to the left of the pivot are lesser than the pivot and all the elements to the right of pivot are greater than it.
* @Parameters: array, starting index and ending index
* @Returns: index of pivot element after placing it correctly in sorted array
*/

partition (arr[], start, end)
{
    // pivot - Element at right most position
    pivot = arr[end];  
    i = (start - 1);  // Index of smaller element
    for (j = start; j <= end-1; j++)
    {
        // If current element is smaller than the pivot, swap the element with pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return (i + 1);
}
```
### Properties:
- Time Complexities: \
  **Best Case: O(n logn)**, the best case occurs when the partition process always picks the middle element as pivot. \
  **Average Case: O(n logn)**, it occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. \
  **Worst Case: O(n^2)**, the worst case occurs when the partition process always picks greatest or smallest element as pivot. 

- Space Complexity: \
  The space complexity for quicksort is **O(log n)**

# [Replace PI](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/R-Recursion/Replace_%CF%80.cpp)

Recursive program to replace all occurrences of pi with 3.14 in a given string
## Examples: 
```
Input : str = “pippppiiiipi” 
Output : 3.14ppp3.14iii3.14

Input : str = “pip” 
Output : 3.14p

Input : str = “xpix” 
Output : x3.14x
```


# [Tower of Hanoi](https://github.com/bhumikatewary/LearnCPP/blob/ddd6b1e51cecd18d72f76f303cefe7f341f3092f/R-Recursion/TowerofHanoi.cpp)

Tower of Hanoi is a mathematical game or puzzle involving three sticks and a number of different discs, <br>
which can slip on any stick/rod. The paradox begins with discs embedded in the same object in a declining size(descending order), <br>
the smallest at the top, thus almost showing a conical shape.

Here are three simple rules:
1. Only one disk can be moved at a time.
2. Each movement involves taking a disk above one of the stacks and placing it on top of another stack. <br>
 In other words, the disk can only be moved if it is the highest disk in the stack.
3. No larger disk can be placed on a smaller disk.

![Tower-of-Hanoi](https://4.bp.blogspot.com/-MiMl_ZKCkKs/Vnk3SyI2D5I/AAAAAAAAAy0/iqw84ovEbGM/s1600/Tower-Of-Hanoi-2-disk.png)
## Example
```
Input : 2
Output : Disk 1 moved from X to Y
         Disk 2 moved from X to Z
         Disk 1 moved from Y to Z
         
Explanation:          
Taking the example for 2 disks :
Let rod 1 = 'X', rod 2 = 'Y', rod 3 = 'Z'.

Step 1 : Shift first disk from 'X' to 'Y'.
Step 2 : Shift second disk from 'X' to 'Z'.
Step 3 : Shift first disk from 'Y' to 'Z'.

The pattern here is :
Shift 'n-1' disks from 'X' to 'Y'.
Shift last disk (nth) from 'X' to 'Y'.
Shift 'n-1' disks from 'Y' to 'Z'.
```

### Algorithm

```
START
Procedure Hanoi(disk, source, destination, auxillary)

   IF disk == 1, THEN
      move disk from source to destination             
   ELSE
      Hanoi(disk - 1, source, auxillary, destination)     // Step 1
      move disk from source to destination                // Step 2
      Hanoi(disk - 1, auxillary, destination, source)     // Step 3
   END IF
   
END Procedure
STOP
```

### Properties

- Time Complexity : O(n)
- Space Complexity : O(n)

### Advantages

- The Tower of Hanoi puzzle is sensitive to previous damage and malfunction. The level of complexity can be easily
 increased or decreased with additional discs.

### Disadvantage

- The Hanoi Tower cannot be used independently to understand and evaluate higher brain functions.



