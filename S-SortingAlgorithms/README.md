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
