<!-- follow the template of Bubble Sort, add the respective heading in Table of content -->


<!-- Table of content -->
# Table of content
- [Sorting Algorithms](#sorting-algorithms)
    - [Terms explained :](#terms-explained-)
  - [Bubble Sort](#bubble-sort)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)
  - [Insertion Sort](#insertion-sort)
  - [Merge Sort](#merge-sort)
  - [Quick Sort](#quick-sort)

# Sorting Algorithms

- Sorting basically refers to rearranging a collection of data into ascending or descending order.
- It is helpful when we have to perform searching faster, or to identify similar items.
- Some algorithms make use of sorting as a key subroutine.

### Terms explained :

- In place: If only constant memory is required other than the input array.
- Stable : If the order of identical elements in the array is retained.
- Make sure to understand the difference between increasing and non-decreasing order.



## Bubble Sort

- It repeatedly loops through the array elements to be sorted and compares each pair of adjacent items and swaps them if they are not in order.
-  A point to note : After every n^th iteration, the n^th largest element reaches at its right place (if sorting in ascending order)
-  We can find if an array is sorted or not using bubble sort in one iteration itself.
<!-- image to help better explain the concept -->
![bubble-sort](https://user-images.githubusercontent.com/60391776/156492281-316f0a5c-e21f-4328-ac03-90b0bc47413c.png)
<!-- citation : [Here](https://www.productplan.com/glossary/bubble-sort/)  -->


### Algorithm

```

begin BubbleSort(array)
    for all items in array
        if array[i]>array[i+1]
            swap(array[i],array[i+1])
        end if
    end for

    return array

end BubbleSort

```

### Properties

- Time Complexity : O(n^2)
- Auxillary Space : O(1)
- In-place : Yes
- Stable : Yes

### Advantages

- Can be useful to sort nearly-sorted arrays.

### Disadvantage

- Too slow and impractical in most cases.

---


## Insertion Sort

---

## Merge Sort

---

## Quick Sort

---


## Counting Sort

- Counting sort is a special sorting algorithm that sorts the multiple elements without performing any comparison. It counts the number of occurences of the various elements .This counting can be stored in a temporary array in which elements are marked as indexes and count of their occurences stored as values of the array .
<!-- image to help better explain the concept -->
![counting-sort](https://cdn.programiz.com/cdn/farfuture/tcfjQdeYwL_jETOCPZxNjIXbysRrb7MaG6PwO2MzHnM/mtime:1582112622/sites/tutorial2program/files/Counting-sort-4_1.png)
<!-- citation : [Here](https://www.programiz.com/dsa/counting-sort)  -->


### Algorithm

```

begin countSort(arr, n)
    declare a count array of max range 256.
    mark all elements of the count array as 0.

    Run a for loop from i:=0 to i:=n-1 :
      compute the count of every element present in the array and store it at ith position of the count array.
    
    Run a for loop from i=1 to 256 :
      Convert the count array to prefix sum array by cummulative addding of previous elements.

    declare an output array of size n for storing the sorted sequence.

    Run a for loop from j:=n-1 to 0 :
      Insert the elments in the output using the count and original array, and Decrease  the count of each element restored by 1.

    Finally run a loop from i:=0 to i:=n-1 :
      Copy the values of output array into the original array.

  [end of program]
```

### Properties

- Time Complexity :
  - Worst case time	: O(n)
  - Best case time : O(n)
  - Average case time : O(n)
- Auxillary Space : O(n)
- In-place : No
- Stable : Yes

### Advantages

- Linear time sorting technique, making it faster than comparison based algorithms.

### Disadvantage

- Works for restricted inputs only for a certain range and takes extra space.