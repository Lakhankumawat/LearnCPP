# Table of content

- [Divide and Conquer Algorithm](#divide-and-conquer-algorithm)
   - [Pow(x,n)](#Pow(x,n))
      - [Algorithm](#algorithm)
      - [Time Complexity](#time-complexity)
      - [Space Complexity](#space-complexity)
     
   - [Merge Sort](#merge-sort)
      - [Algorithm](#algorithm)
      - [Time Complexity](#time-complexity)
      - [Space Complexity](#space-complexity)
      - [Advantages](#advantages)
      - [Disadvantages](#disadvantages)


# Divide and Conquer Algorithm

- A divide and conquer algorithm is a strategy of solving a large problem by:
- Breaking the problem into smaller sub-problems.
- Solving the sub-problems.
- Combining them to get the desired output.

## Pow(x,n)

- Pow function takes x as number input and n as power input
- It return power value of the two input that is equal to x^n

![ss2](https://user-images.githubusercontent.com/75080313/170106563-6acc84b6-0b84-492f-b932-f7efd2eac8e3.png)

### Algorithm
- Call Pow(x,n) function and pass x and n.
- Where, x is a number and n is the power.
- Recursively, call Pow(x,n) function x is a number and n is a power.
- BASE CASE- when n==0 simply return 1.
- if n is a factor of 2 the return (x^(n/2))^2 value.
- if n is not a factor of 2 then return (x^(n/2))^2*x value.

### Time Complexity
```
- O(log(n))
```

### Space Complexity
```
- O(1)
```


## Merge Sort

- Merge Sort is one of the most popular sorting algorithms that is based on the principle of Divide and Conquer Algorithm.
- Using the Divide and Conquer technique, we divide a problem into subproblems. When the solution to each subproblem is ready, we 'combine' the results from the subproblems to solve the main problem.
- We had to sort an array arr. A subproblem would be to sort a sub-section of this array starting at index l and ending at index r, denoted as arr[l..r].

![Screenshot (637)](https://user-images.githubusercontent.com/98539013/169039682-0e5bcddd-e9ae-4a2c-800a-4f4f36d5857c.png)

### Algorithm
- Call mergesort function and pass arr , l and r.
- Where, l and r defines from where to where we wants to sort.
- Find mid, and divide array from l to mid and mid+1 to r.
- Recursively, call merge sort function to merge it.
- BASE CASE- when l>=r simply return.
- Call merge function to merge the sorted array.
- Make temp array to compare elements of the divided array and arrange in the sorted manner.
- Traverse the temp array and compare elements and sort them accordingly.
- Finally make sure all elements have added to the array and the sorting is done.


### Time Complexity
```
- O(nlogn).
```

### Space Complexity
```
- O(n), since we need temporary as well.
```

### Advantages

- Merge sort accesses data sequentially and the need of random access is low.
- Useful in sorting linked list in O(nlogn) time.

### Disadvantages

- Other sortING algorithms are faster than merge sort for smaller tasks.
- Memory requirement is more as we were creating temporary arrays.
- It travels to all the process even though array is already sorted.
