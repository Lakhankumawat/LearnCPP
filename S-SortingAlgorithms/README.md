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

# [Iterative merge sort](geeksforgeeks.org/iterative-merge-sort/)

![MergeSort](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png)

It uses bottom up approach and unlike recursive approach it doesn't uses auxiliary stack.

# Algorithm
1. We do bottom up approach ie, start from 2 element sized array (we know that 1 element sized array is already sorted). 
2. Also the key point is that since we don’t know how to divide the array exactly as in top down approach, where the 2 element sized array may be of size sequence 2,1,2,2,1…we in bottom up approach assume the array was divided exactly by powers of 2 (n/2,n/4….etc) for an array size of powers of 2, ex: n=2,4,8,16. 
3. So for other input sizes such as 5, 7, 11 we will have remaining sublist that didn’t go into the power of 2 width at each level as we keep on merging and go upwards, this unmerged sublist which is of size that is not exact power of 2, will remain isolated till the final merge. 
4. To merge this unmerged list at final merge we need to force the mid to be at the start of unmerged list so that it is a candidate for merge. 

# Output
![output](https://user-images.githubusercontent.com/76995136/156413137-24f1e7ba-07e7-4722-a1df-b70e392b01b2.png)


