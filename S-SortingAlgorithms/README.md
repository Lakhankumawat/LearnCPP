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
  - [Shell Sort](#shell-sort)

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

## Shell Sort

- Sorting array by breaking it down into a number of smaller subarrays.
- Not necessary lists of contiguous elements.
- Instead, shell sort algorithm uses increment gap, to create the array of elements that are “gap” elements apart.
<!-- image to help better explain the concept -->
![ShellSort](https://user-images.githubusercontent.com/66736704/156896138-2758e5cc-69c4-4021-a572-839f119b3f71.png)

<!-- For extra information : [Here](https://www.programiz.com/dsa/shell-sort#:~:text=Shell%20sort%20is%20a%20generalized,based%20on%20the%20sequence%20used.)  -->

### Algorithm


```

shellSort(array, size)
  for interval i <- size/2n down to 1
    for each interval "i" in array
        sort all the elements at interval "i"
end shellSort

```

### Properties

- Best Complexity: O(nlog n)
- Worst Complexity: O(n2)
- Average Complexity: O(nlog n)
- Space Complexity: O(1)
- Stability: No

### Advantages

# Shell sort is used when:

- Calling a stack is overhead. uClibc library uses this sort.
- Recursion exceeds a limit. bzip2 compressor uses it.
- Insertion sort does not perform well when the close elements are far apart. Shell sort helps in reducing the distance between the close elements. Thus, there will be less number of swappings to be performed.


---
