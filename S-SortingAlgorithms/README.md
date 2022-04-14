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
       
  - [Bucket Sort](#bucket-sort)
       - [Algorithm](#bucketsortAlgo)
       - [Properties](#bucketsortProperties)
       - [Advantages](#bucketsortAdvantages)
       - [Disadvantages](#bucketsortDisadvantages)

  - [Radix Sort] (#Radix-sort)
      - [Algorithm] (#RadixsortAlgo)
      - [Properties] (RadixSortProperties)
      - [Advantages] (#RadixSortadvantages)
      - [Disadvantages] (#radixsortDisadvantages)
   
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

### Algorithm
<a name="#RadixSort algorithm"></a>
    
Radix sort is the linear sorting algorithm that is used for integers. The process of radix sort can be understood as a grouping approach.
Wherein, the algorithm sorts the elements by first grouping the individual digits of the same place value. Then, sort the elements according to their increasing/decreasing order.
 And the process continues until we find the sorted list.
To implement Radix Sort in C++:

The Radix sort algorithm works by ordering each digit from least significant to most significant -  

1. Sort the array by least significant digit (1s place) in the given array

2. Then Sort the array according to the next least significant digit (2s place)

3. Finally Sort the array according to the next least significant digit (3s place)

Radix-Sort(A, d)
       for j = 1 to d do
            int count[10] = {0};
            for i = 0 to n do
                count[key of(A[i]) in pass j]++
            for k = 1 to 10 do
                count[k] = count[k] + count[k-1]
            for i = n-1 downto 0 do
                result[ count[key of(A[i])] ] = A[j]
                count[key of(A[i])]--
            for i=0 to n do
                A[i] = result[i]
       end for(j)
 end func 


### Properties
<a name="#RadixsortProperties"></a>

- Time Complexity: 
  - `Worst Case Complexity: O(n^2)`
     - In radix sort, the worst case is when all elements have the same number of digits except one, which has a significantly large number of digits. 
     -If the number of digits in the largest element equals n, the runtime is O.(n2).
    
  - `Best Case Complexity: O(a*n)`
     - When all elements have the same number of digits, the best-case scenario occurs. O(a(n+b)) is the best-case time complexity. If b equals O(n), the time complexity is O. (a*n).
     - Or when there is no sorting required, i.e. the array is already sorted.

  - `Average Case Complexity: O(p*(n+d))`
     - It occurs when the array elements are in jumbled order that is not properly ascending and not properly descending. The average case time complexity of Radix sort is θ(nk).

- `Space Complexity: O(n+k)`
  - Radix sort employs Counting sort, which uses auxiliary arrays of sizes n and k, where n is the number of elements in the input array and k is the largest element among the dth place elements (ones, tens, hundreds, and so on) of the input array. 
  - Hence, the Radix sort has a space complexity of (n+k).

- `Stability of Radix Sort Algorithm`

  - Radix Sort algorithm is a stable sorting subroutine-based integer sorting algorithm. It is a sorting algorithm that does not use comparisons to sort a collection of integers. It classifies keys based on individual digits with the same significant position and value.

  ### Advantages
<a name="#RadixsortAdvantages"></a>
    
 - When the keys are short its fast, i.e. when the array element range is small.
 - Used in suffix arrays construction algorithms such as Manber's and the DC3 algorithm.
 - Radix Sort is a stable sort because it maintains the relative order of elements with equal values.
    
### Disadvantages
<a name="#RadixsortDisadvantages"></a>

 - The Radix Sort algorithm is less flexible than other sorts because it is based on digits or letters. As a result, for each different type of data, it must be rewritten.
 - Radix sort has a higher constant than other sorting algorithms.
 - It takes up more space than Quicksort, which is used for in-place sorting.
 - Radix sort may be slower than other sorting algorithms such as merge sort and Quicksort if the operations are inefficient. These operations include sub-inset lists and delete functions, as well as the process of isolating the desired digits.
 - Because it is based on digits or letters, the radix sort is less flexible than other sorts. If the data type must be rewritten, so must the Radix sort.


 ### Algorithm
<a name="#Pancake Sorting algorithm"></a>
    
Pancake sort is a sorting algorithm in which the only allowed operation is to "flip" one end of the list. It is inplace but not stable.
Pancake sort is called so because it resembles sorting pancakes on a plate with a spatula, where you can only use the spatula to flip some of the top pancakes in the plate.
Unlike most sorting algorithms that try to minimize the number of comparisons required to perform the sort, it tries to sort the array in minimum reversals.
To implement Pancake Sort in C++:

The Pancake sorting algorithm works by finding the maximum element in the sequence and placing it at the end, and reduce the size of the sequence by one.  

1. Write a function flip(Arr, i) that reverses the order of the first i elements in the array arr.

2. Write a function pancakeSort(Arr) that sorts and returns the input array. You are allowed to use only the function flip in order to make changes in the array.


Radix-Sort(A, d)
       for j = 1 to d do
            int count[10] = {0};
            for i = 0 to n do
                count[key of(A[i]) in pass j]++
            for k = 1 to 10 do
                count[k] = count[k] + count[k-1]
            for i = n-1 downto 0 do
                result[ count[key of(A[i])] ] = A[j]
                count[key of(A[i])]--
            for i=0 to n do
                A[i] = result[i]
       end for(j)
 end func 


 ### Properties
<a name="#Pancake sortProperties"></a>

- Time Complexity: 
  - `Worst Case Complexity: O(n^2)`
     - The worst-case occurs when the elements are alternating small and large elements. A total of 2n-3 flips are required. The number of flips required is of the order of O(n). The worst-case time complexity is [Big O]: O(n2). 
     -If the number of digits in the largest element equals n, the runtime is O.(n2).
    
  - `Best Case Complexity: O(n)`
     - The best-case occurs when the array is already sorted, and no flips are required. The best-case time complexity is [Big Omega]: O(n).
     - Or when there is no sorting required, i.e. the array is already sorted.

  - `Average Case Complexity: O(n^2)`
     - It can be calculated by counting the number of loops. There are a total of two loops of n iterations making complexity: n*n = n2.

  - `Space Complexity: O(n)`
  - For each round of iteration, at most, we would add two pancake flips. Therefore, the maximal number of pancake flips needed would be 2*N.
  - As a result, the space complexity of the algorithm is O(N). 

