## [1. Sort an Array of 0s, 1s and 2s](https://github.com/PriyanshuSaxena2612/LearnCPP/blob/WorkOnBit/A-Array/Sort_0_1_2.cpp)

![Snap](https://user-images.githubusercontent.com/53018678/156426951-61050466-bf4a-4685-be42-e81a5cf623cb.png)


Given an array A[] consisting 0s, 1s and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then all 1s and all 2s in last.
<hr>

## Dutch National Flag Algorithm

1. Keep three indices low = 1, mid = 1 and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).
2. Traverse the array from start to end and mid is less than high. (Loop counter is i)
3. If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
4. If the element is 1 then update mid = mid + 1
5. If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed
6. Print the array.
   <hr>
   
> ### My OUTPUT
![Snap2](https://user-images.githubusercontent.com/53018678/156428828-324bda09-356d-47dc-bfaa-793bae0a3dff.png)


<hr>

- For More Reference Please Check Out -> 
[Geeks For Geeks](https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/)