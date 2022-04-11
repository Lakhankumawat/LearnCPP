#  Juggler Sequence :
- [Juggler Sequence](#juggler-sequence)
  - [Problems](#problems)
  - [Algorithm](#algorithm)
  - [Time Complexity and Space Complexity](#time-complexity-and-space-complexity)

# Juggler Sequence :
Juggler Sequence is a series of integer number in which the first term starts with a positive integer number a and the remaining terms are generated from the immediate previous term using the below recurrence relation : 
![quicklatex com-0d2326af0f44e3f68f466125175e15e2_l3](https://user-images.githubusercontent.com/31670657/161595243-073b5b74-a6d2-4370-b59c-af5cd96cd77f.svg)

### Problems
 ```
  Input: N = 9 
  Output: 9, 27, 140, 11, 36, 6, 2, 1 
  We start with 9 and use above formula to get next terms.

 ```

### Algorithm
```
Using Iterative approach:
- print the first term.
- calculate terms until last term is not 1 using while loop.
- check if previous term is even or odd.
- calculate next term then print it.
Using Recursive approach:
- Output the value of N.
- If N has reached 1 end the recursion.
- Otherwise, follow the formula based on the number being odd or even and call
  the recursive function on the newly derived number.

```

### Time Complexity and Space Complexity

**Time Complexity**: O(n).

**Space Complexity**: O(1).