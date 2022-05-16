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
       -  [Algorithm](#algorithmofinsertionSort)
       - [Properties](#insertionSortproperties)
       - [Advantages](#advantagesofinsertionSort)
       - [Disadvantage](#disadvantageofinsertionSort)
  - [Quick Sort](#quick-sort)
       -  [Algorithm](#algorithmofquickSort)
       - [Properties](#quickSortproperties)
       - [Advantages](#advantagesofquickSort)
       - [Disadvantage](#disadvantageofquickSort)

  - [Merge Sort](#merge-sort)
       -  [Algorithm](#algorithmofmergeSort)
       - [Properties](#mergeSortproperties)
       - [Advantages](#advantagesofmergeSort)
       - [Disadvantage](#disadvantageofmergeSort)
      
  - [Counting Sort](#counting-sort)
       -  [Algorithm](#algorithmofcountingSort)
       - [Properties](#countingSortproperties)
       - [Advantages](#advantagesofcountingSort)
       - [Disadvantage](#disadvantageofcountingSort)  
  - [Bucket Sort](#bucket-sort)
       - [Algorithm](#bucketsortAlgo)
       - [Properties](#bucketsortProperties)
       - [Advantages](#bucketsortAdvantages)
       - [Disadvantages](#bucketsortDisadvantages)

   - [DNF Sort](#dnf-sort)
     -  [Algorithm](#algorithm-6)
     - [Properties](#properties-6)
     - [Advantages](#advantages-6)
     - [Disadvantage](#disadvantage-4)

  - [Cycle Sort](#cycle-sort)
     - [Algorithm](#CycleSortAlgorithm)
     - [Properties](#CycleSortProperties)
     - [Advantages](#CycleSortAdvantages)
     - [Disadvantage](#CycleSortDisadvantages)
     -[PracticeProblems](#CycleSortpractice-problems)

  - [Radix Sort](#Radix-sort)
     - [Algorithm](#RadixSortAlgorithm)
     - [Properties](#RadixSortProperties)
     - [Advantages](#RadixSortAdvantages)
     - [Disadvantage](#RadixSortDisadvantages)
 
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
- Insertion sort is a simple and efficient comparison sort.
- In this algorithm, each iteration removes an element from the input data and inserts it into the     
  correctposition in the list being sorted.
- The choice of the element being removed from the input is random and this process is repeated until
  all input elements have gone through. 
  
 <p align="center">
<img src="https://user-images.githubusercontent.com/88760648/159166514-e50c6fc3-7e40-4707-9b07-0eb52456027e.png" width="500" height="500">
    <!-- citation : [Here](https://www.crio.do/blog/insertion-sort/)  -->
<a name="algorithmofinsertionSort"></a>

## Algorithm
- If the element is the first element, assume that it is already sorted. Return 1.
- Pick the next element, and store it separately in a key.
- Now, compare the key with all elements in the sorted array.
- If the element in the sorted array is smaller than the current element, then move to the next element.
  Else, shift greater elements in the array towards the right.
- Insert the value.
- Repeat until the array is sorted.

```
    void InsertionSort(int A[], int n) {
        int i, j, v;
        for (i = 1; i <= n - 1; i++) {
          v=A[i];
           j= i;
          while (A[j-1]>v && j >= 1) {
            A[j] = A[j-1];
             j--;
            }
              A[j] = v;
            }
     }
```
<a name="insertionSortproperties"></a>

## Properties
- Time Complexity: O(n^2) 
- Space Complexity: O(1)
 - In-place : Yes
- Stable : Yes

<a name="advantagesofinsertionSort"></a>

## Advantages
- Simple implementation
- Efficient for small data
- Practically more efficient than selection and bubble sorts, even though all of them
  have O(n^2) worst case complexity

<a name="disadvantageofinsertionSort"></a>

## Disadvantage

- Insertion sort is inefficient against more extensive data sets.

---
## Quick Sort
    
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

### Example:
![image](https://user-images.githubusercontent.com/62667818/161125194-3613bc6f-5e94-44ed-aa96-a36e0514957a.png)

<a name="algorithmofquickSort"></a>
### Algorithm:
```
/**
* The main function that implements quick sort.
* @Parameters: array, starting index and ending index
*/
quickSort(arr[], start, end)
{
    if (start < end)
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
 <a name="quickSortproperties"></a>                          
### Properties
- Time Complexities: 
  - **Best Case: O(n logn)**, the best case occurs when the partition process always picks the middle element as pivot. 
  - **Average Case: O(n logn)**, it occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. 
  - **Worst Case: O(n^2)**, the worst case occurs when the partition process always picks greatest or smallest element as pivot. 

- Space Complexity: \
  The space complexity for quicksort is **O(log n)**
    
- Stable: No
- InPlace : Yes

   
<a name="advantagesofquickSort"></a>
### Advantages
 - Fast and efficient
 - On the average it runs very fast, even faster than Merge Sort.
    
    
 <a name="disadvantageofquickSort"></a>
### Disadvantage
 - Its running time can differ depending on the contents of the array
    
---

## Merge Sort

Like QuickSort, Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves. The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one. 

 <!--image to help better understanding of the concept-->
 
![image](https://user-images.githubusercontent.com/91210199/159164125-247a8fbb-2d4b-4ea4-9416-5f61939521b9.png)

 <a name="algorithmofmergeSort"></a>
    
 ### Algorithm
 ```
  MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = l+ (r-l)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
  ```           
  <a name="mergeSortproperties"></a>
    
  ### Properties 
  ```
   1)Time complexity = O(nlogn)
   2)Space Complexity - O(n)
   3)Stable - Yes
   4) In place = no
   ```
  <a name="advantagesofmergeSort"></a>
    
   ### Advantages
   
   Merge sort is the very effiecent algorithm as compared to all the other sorting algorithms and is widely used in order to sort linked lists ,stacks etc.
    
  <a name="disadvantageofmergeSort"></a>
    
   ### Disadavantages
    - Slower as compared to all the other algorithms for smaller tasks
    - Requires the usage of additional memory space for additional array
    


## Counting Sort

- Counting sort is a special sorting algorithm that sorts the multiple elements without performing any comparison. It counts the number of occurences of the various elements .This counting can be stored in a temporary array in which elements are marked as indexes and count of their occurences stored as values of the array .
<!-- image to help better explain the concept -->
![counting-sort](https://cdn.programiz.com/cdn/farfuture/tcfjQdeYwL_jETOCPZxNjIXbysRrb7MaG6PwO2MzHnM/mtime:1582112622/sites/tutorial2program/files/Counting-sort-4_1.png)
<!-- citation : [Here](https://www.programiz.com/dsa/counting-sort)  -->

 <a name="algorithmofcountingSort"></a>
    
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
 <a name="countingSortproperties"></a>

### Properties

- Time Complexity :
  - Worst case time	: O(n)
  - Best case time : O(n)
  - Average case time : O(n)
- Auxillary Space : O(n)
- In-place : No
- Stable : Yes

<a name="advantagesofcountingSort"></a>
    
### Advantages

 -  Linear time sorting technique, making it faster than comparison based algorithms.
    
 <a name="disadvantageofcountingSort"></a>
### Disadvantage

- Works for restricted inputs only for a certain range and takes extra space.


=======
## Bucket Sort
<a name="#bucket-sort"></a>
    
- Bucket Sort is a sorting algorithm that divides the unsorted array elements into several groups called buckets. Each bucket is then sorted by using any of the suitable sorting algorithms or recursively applying the same bucket algorithm.

- Finally, the sorted buckets are combined to form a final sorted array.
    
- In [BucketSort.cpp Program](./BucketSort.cpp), the underlying sorting technique is Insertion Sort. 
    
- Bucket Sort is useful when:
    
    - inputs are scattered within a range. 
    
    - floating point numbers are taken as inputs. 

![Bucket_2](https://user-images.githubusercontent.com/80174214/161367542-0588c6fd-e2a7-4f39-a281-cc801ad48d0f.png)

### Algorithm
<a name="#bucketsortAlgo"></a>
    
The process of bucket sort can be understood as a scatter-gather approach.
Here, elements are first scattered into buckets then the elements in each bucket are sorted.
Finally, the elements are gathered in order.
To implement Bucket Sort in C++:

1. Create an array of size 10 to input elements to sort.

2. Create a self-referential structure Node with data member to hold array element and a pointer to refer to the next node.
   
3. Create buckets of Node double pointer type and allocate memory to them according to the capacity assigned to each bucket.
    
4. Initialize the empty buckets to NULL by taking a loop.
    
5. Retrieve the bucket index corresponding to each array element by dividing the element value with bucket capacity, i.e., 10.

6. Using bucket index and a loop, insert array elements to the buckets of matching range.
    
7. Now that the buckets contain unsorted elements, Insertion Sort is applied on each bucket to sort them. Refer to [Insertion Sort Algorithm](#algorithmofinsertionSort).
    
8. Combine the sorted buckets and put them back on the original input array to form a sorted array.

```
    
  bucketSort()
  
    create N buckets each of which can hold a range of values
    
    for all the buckets
      initialize each bucket with 0 values
 
    for all the buckets
      put elements into buckets matching the range
  
    for all the buckets 
      sort elements in each bucket
  
    gather elements from each bucket

    end bucketSort
    
```
<!-- citation: [Here](https://www.programiz.com/dsa/bucket-sort)-->
    
### Properties
<a name="#bucketsortProperties"></a>

- Time Complexity: 
  - `Worst Case Complexity: O(n^2)`
     - When there are elements of close range in the array, they are likely to be placed in the same bucket. This may result in some buckets having more number of elements than others.
     - It makes the complexity depend on the sorting algorithm used to sort the elements of the bucket.
The complexity becomes even worse when the elements are in reverse order. If insertion sort is used to sort elements of the bucket, then the time complexity becomes O(n^2).
    
  - `Best Case Complexity: O(n+k)`
     - It occurs when the elements are uniformly distributed in the buckets with a nearly equal number of elements in each bucket.
     - The complexity becomes even better if the elements inside the buckets are already sorted.
     - If insertion sort is used to sort elements of a bucket then the overall complexity in the best case will be linear ie. O(n+k). 
     - O(n) is the complexity for making the buckets and O(k) is the complexity for sorting the elements of the bucket using algorithms having linear time complexity at the best case.

  - `Average Case Complexity: O(n)`
     - It occurs when the elements are distributed randomly in the array. Even if the elements are not distributed uniformly, bucket sort runs in linear time. It holds true until the sum of the squares of the bucket sizes is linear in the total number of elements.
    
- `Space Complexity: O(n+k)`

- `Stable: Depends on the underlying sorting algorithm`
    
  - In case of [BucketSort.cpp](./BucketSort.cpp), the underlying sorting algorithm, that is, Insertion Sort is stable, hence Bucket Sort is also stable. 
    
- `In-place: No`
    

### Advantages
<a name="#bucketsortAdvantages"></a>
    
- Bucket sort allows each bucket to be processed independently. As a result, you’ll frequently need to sort much smaller arrays as a secondary step after sorting the main array.

- For already sorted input values, it is also seen that Bucket Sort is faster than Radix Sort.

- Bucket sort also has the advantage of being able to be used as an external sorting algorithm. If you need to sort a list that is too large to fit in memory, you may stream it through RAM, split the contents into buckets saved in external files, and then sort each file separately in RAM.
    
### Disadvantages
<a name="#bucketsortDisadvantages"></a>
    
- The problem is that if the buckets are distributed incorrectly, you may wind up spending a lot of extra effort for no or very little gain. As a result, bucket sort works best when the data is more or less evenly distributed, or when there is a smart technique to pick the buckets given a fast set of heuristics based on the input array.

- Can’t apply it to all data types since a suitable bucketing technique is required. Bucket sort’s efficiency is dependent on the distribution of the input values, thus it’s not worth it if your data are closely grouped.In many situations, you might achieve greater performance by using a specialized sorting algorithm like radix sort, counting sort, or burst sort instead of bucket sort.

- Bucket sort’s performance is determined by the number of buckets used, which may need some additional performance adjustment when compared to other algorithms.

    
## DNF Sort

DNF Sort (Dutch National Flag Sorting) , This is the sorting method which is specially designed for only the array which contain numbers `0's` `1's` and `2's` only.
    
![image](https://user-images.githubusercontent.com/86917304/166096608-225a0941-cc06-47a2-a67d-df45a15797b0.png)


### Algorithm

1. Initialize the `low = 0` , `mid = 0` and `high = size - 1`.
2. Traverse the array from starting to last till mid is less than equal to high.
3. If the element is 0 then swap the element with the element at index low and increase low and mid by 1.
4. If the element is 1 then increase mid by 1.
5. If the element is 2 then swap the element with the element at index high and decrease the high by 1.

- **Approach**

  **The Array is divided into four Sections**

  - `a[1 to low-1]` for zeroes and as repect to flag (red in Dutch Flag).
  - `a[low to mid-1]` for ones and as repect to flag (white).
  - `a[mid to high]` no change.
  - `a[high+1 to n(size)]` for twos and as respect to flag (blue).

### Properties

- Time Complexities
  - Worst case time : O(n)
  - Best case time : O(n)
  - Average case time : O(n)
- Auxillary Space : O(1)
- In-place : No
- Stable : Yes

### Advantages

- The DNF algorithm can be extended to four, or even more colours.
- Can we used as an alternative to find two different elements `a1` and `a2` , from the array `a` such that `a1<a2`.

### Disadvantage

- Problem was restricted by allowing the inspection of the color of each element only once.

-----------



### Cycle Sort

- Cycle sort is a comparison based sorting algorithm which forces array to be factored into the number of cycles where each of them can be rotated to produce a sorted array.
- It is an in-place and unstable sorting algorithm.

- It is optimal in terms of number of memory writes. It minimizes the number of memory writes to sort. Each value is either written zero times, if it’s already in its correct position, or written one time to its correct position.

- It is based on the idea that array to be sorted can be divided into cycles. Cycles can be visualized as a graph. We have n nodes and an edge directed from node i to node j if the element at i-th index must be present at j-th index in the sorted array.

Here, array elements: {30, 20, 10, 40, 60, 50}
![cycle-sort working image](https://user-images.githubusercontent.com/84588360/168461077-f38dc4b5-83b1-4549-9df8-1aaf57364e3b.png)

# CycleSortAlgorithm

### Algorithm

- An array of n distinct elements is to be considered.

- An element a is given, index of a can be calculated by counting the number of elements that are smaller than a.

- If the element is found to be at its correct position, simply leave it as it is.

- Otherwise, find the correct position of a by counting the total number of elements that are less than a. where it must be present in the sorted array. The other element b which is replaced is to be moved to its correct position. This process continues until we got an element at the original position of a.

### Pseudocode

    Begin
    for start := 0 to n – 2 do
    item := arr[start]
    pos := start
    for i := start + 1 to n-1 do
      if arr[i] < item then
         pos:= pos+1
    done

    if pos = start then
        ignore lower part, go for next iteration
    while item = arr[pos] do
        pos := pos+1
    done

    if pos != start then
        swap arr[pos] with item
    while pos != start do
        pos := start
        for i := start + 1 to n-1 do
               if arr[i] < item then
                    pos:= pos+1
        done

        while item = arr[pos]
               pos := pos +1
        if item != arr[pos]
               swap arr[pos] and item
       done
      done
    End

# CycleSortProperties

### Properties
- Time Complexity: O(n^2) 
- Space Complexity: O(1)
- In-place : Yes
- Stable : No

# CycleSortAdvantages

### Advantages

- Cycle Sort offers the advantage of little or no additional storage.

- It is an in-place sorting Algorithm.

- It is optimal in terms of number of memory writes. It makes minimum number of writes to the memory and hence efficient when array is stored in EEPROM or Flash. Unlike nearly every other sort (Quick , insertion , merge sort), items are never written elsewhere in the array simply to push them out of the way of the action. Each value is either written zero times, if it's already in its correct position, or written one time to its correct position.This matches the minimal number of overwrites required for a completed in-place sort.

# CycleSortDisadvantages

### Disadvantage
- It is not mostly used because it has more time complexity (i.e O(n^2)) than any other comparison sorting algorithm.

# CycleSortpractice-problems

### Link to practice problems
[CycleSort practice problems](https://github.com/kunal-kushwaha/DSA-Bootcamp-Java/blob/main/assignments/07-sorting.md)

--------
--------


# Radix Sort

- Radix sort is a non-comparison-based sorting algorithm.It avoids comparison by creating and categorizing elements based on their radix.
- For elements with more than one significant digit, it repeats the bucketing process for each digit while preserving the previous step's ordering until all digits have been considered.
- The word radix, by definition, refers to the base or the number of unique digits used to represent numbers. In radix sort, we sort the elements by processing them in multiple passes, digit by digit.
- Each pass sorts elements according to the digits in a particular place value, using a stable sorting algorithm (usually counting sort as a subroutine). It can be implemented to start the sorting from the least significant digit (LSD) or the most significant digit (MSD). 
- The number of passes required to fully sort the elements is equal to the number of place values (digits) present in the largest element among all the input elements to be sorted. These passes continue to run for each place value until the sorting is done. 

# Radix-sort

![Radix sort working snippet](https://user-images.githubusercontent.com/84588360/168561310-52dfca38-33d3-4bcd-943b-fdbac31af87a.png)

# Algorithm

- ***Step 1*** – Take input array and find maximum number in the array
- ***Step 2*** – Create a for expression that loops d times, where d = number of digits in the largest element (maxim)
- ***Step 3*** – For the first place value, call counting sort, jump place value by 10 to move to the next significant digit.
- ***Step 4*** – Continue step 3 for all place values (finish all d passes).
- ***Step 5*** – Display the updated, sorted array.
- ***Step 6*** – Exit.
 
# RadixSortAlgorithm

**Example :**

    Assume the input array is:
    10,21,17,34,44,11,654,123

    Based on the algorithm, we will sort the input array according to the one's digit (least significant digit).
    0: 10
    1: 21 11
    2:
    3: 123
    4: 34 44 654
    5:
    6:
    7: 17
    8:
    9:

    So, the array becomes 10,21,11,123,24,44,654,17
    Now, we'll sort according to the ten's digit:
    0:
    1: 10 11 17
    2: 21 123
    3: 34
    4: 44
    5: 654
    6:
    7:
    8:
    9:

    Now, the array becomes : 10,11,17,21,123,34,44,654
    Finally , we sort according to the hundred's digit (most significant digit):
    0: 010 011 017 021 034 044
    1: 123
    2:
    3:
    4:
    5:
    6: 654
    7:
    8:
    9:

    The array becomes : 10,11,17,21,34,44,123,654 which is sorted. This is how the algorithm works.
  
  **Animated Illustration**
  
https://user-images.githubusercontent.com/84588360/168647326-0d773672-f505-4c84-a329-a9ddaf55105e.mp4

*Source:* https://www.crio.do/blog/top-10-sorting-algorithms/


# Pseudocode

**Radix Sort Pseudocode RadixSort(arr[], length) –**

- ***Step 1.*** An input array is taken & consider its length as– arr[length]
- ***Step 2.*** Maximum element from this array is obtained
- ***Step 3.*** n = GetMaximum(arr, length)
- ***Step 4.*** Counting sort is called x times based on the no of digits in the max number n.
- for (int div = 1; n/div > 0; div *= 10)
- ***Step 5.*** CountingSort(arr, length, div)

**Counting Sort Pseudocode CountingSort(arr[], length, div) –**

- ***Step 1.*** arr[length] is taken

- ***Step 2.*** Output array called – opt[length] is created

- ***Step 3.*** Range taken - (or no of unique elements. Default value 10 in our case)

- ***Step 4.*** count array called – count[range] is created & all the values are initialized to 0
-     for(int i=0 to i<range)
-     count[i] = 0

- ***Step 5.*** Each element is counted & are placed in the count[] array
-     for(int i = 0 to i<length)
-     count[ (arr[i]/div)%10 ]++;

- ***Step 6.*** count[] array is modified to store previous counts (cumulative)
-     or(int i = 1 to i < range)
-     count[i] += count[i – 1];

- ***Step 7.*** Elements are placed from input array arr[] to opt array opt[] using this count[] array that has the actual positions of elements
-     for(int i=0 to i<length)
-     opt[count[ (arr[i]/div)%10 ] – 1] = arr[i]
-     count[ (arr[i]/div)%10 ]–-

- ***Step 8.*** Sorted values are transferred from opt[] array to input array arr[]
-     for(i=0 to i<length)
-     arr[i] = opt[i] 


# RadixSortProperties

# Properties

- **Time Complexity:**  For worst-, best- and average-case scenario is O(d*(n+b)). 

  Here, 

  - d is the number of digits in the maximum number
  - O(n+b) is the time complexity of counting sort, where b is the base of the number system used.
  - The complexity of counting sort is O(n+b) because there are four for loops, three of them iterating n times, one iterating b times  — O(3n+b) or O(n+b). 
  - The time complexity for radix sort is O(d*(n+b)) because counting sort is called d times.
- **Space Complexity:**  O(n+b)
- **In-place :** No
*NOTE:* Binary MSD radix sort, also called binary quicksort, can be implemented in-place by splitting the input array into two bins - the 0s bin and the 1s bin.*
- **Stable** : Yes


# Advantages

- Radix Sort is a stable sort because it maintains the relative order of elements with equal values.
- Fast when the keys are short, i.e. when the array element range is small.
- Used in suffix arrays construction algorithms such as Manber's and the DC3 algorithm.

# RadixSortAdvantages


# Disadvantages

- Radix sort may be slower than other sorting algorithms such as merge sort and Quicksort if the operations are inefficient. These operations include sub-inset lists and delete functions, as well as the process of isolating the desired digits.
- The Radix Sort algorithm is less flexible than other sorts because it is based on digits or letters. As a result, for each different type of data, it must be rewritten.
- Radix sort has a higher constant than other sorting algorithms.
- It takes up more space than Quicksort, which is used for in-place sorting.
- Because it is based on digits or letters, the radix sort is less flexible than other sorts. If the data type must be rewritten, so must the Radix sort.

# RadixSortDisadvantages

-----------------------
-----------------------

