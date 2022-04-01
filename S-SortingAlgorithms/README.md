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
   - [Radix Sort](#radix-sort)
       -  [Algorithm](#algorithmofradixSort)
       - [Properties](#radixSortproperties)
       - [Advantages](#advantagesofradixSort)
       - [Disadvantage](#disadvantageofradixSort)
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


## Quick Sort



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
    
## Radix Sort
-The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit. Radix sort uses counting sort as a subroutine to sort.
    
 Pass 1:
In the first pass, the list is sorted on the basis of the digits at 0's place.
![image](https://user-images.githubusercontent.com/94166841/161282973-dede55cd-1c37-4be6-bc94-a2bbee33c54e.png)

    
Pass 2:
In this pass, the list is sorted on the basis of the next significant digits (i.e., digits at 10th place).

![image](https://user-images.githubusercontent.com/94166841/161280875-f7d1ba84-52de-4cb6-aa57-84d69641759f.png)
    
Pass 3:
In this pass, the list is sorted on the basis of the next significant digits (i.e., digits at 100th place).
![image](https://user-images.githubusercontent.com/94166841/161281067-c1df95a6-2cde-4929-a0cc-46810b63b72e.png)
    
The array elements after sorting are:
![image](https://user-images.githubusercontent.com/94166841/161281158-384c2b63-9ce0-4eda-b3b0-6721e16f9015.png)
    
 <a name="algorithmofradixSort"></a>
    
### Algorithm
   radixSort(arr)  
max = largest element in the given array  
d = number of digits in the largest element (or, max)  
Now, create d buckets of size 0 - 9  
for i -> 0 to d  
sort the array elements using counting sort (or any stable sort) according to the digits at  
the ith place  

<a name="radixSortproperties"></a>

### Properties

- Time Complexity :
  - Worst case time	: O(nk)
  - Best case time : O(n+k)
  - Average case time : O(nk)
- Auxillary Space : O(n+k)
- In-place : No
- Stable : Yes

<a name="advantagesofradixSort"></a>
    
### Advantages

 - Fast when the keys are short i.e. when the range of the array elements is less.
 - Used in suffix array constuction algorithms like Manber's algorithm and DC3 algorithm.
    
 <a name="disadvantageofradixSort"></a>
### Disadvantage

- Since Radix Sort depends on digits or letters, Radix Sort is much less flexible than other sorts. Hence , for every different type of data it needs to be rewritten.
- The constant for Radix sort is greater compared to other sorting algorithms.
- It takes more space compared to Quicksort which is inplace sorting.
