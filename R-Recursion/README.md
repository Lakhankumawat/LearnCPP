# [Inversion Count](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/R-Recursion/Inversion_Count.cpp) 

Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, 
but if the array is sorted in the reverse order, the inversion count is the maximum. <br><br>
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j <br>
## Example
```
Input: arr[] = {8, 4, 2, 1}
Output: 6

Explanation: Given array has six inversions:
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).


Input: arr[] = {3, 1, 2}
Output: 2

Explanation: Given array has two inversions:
(3, 1), (3, 2) 
```
# [Replace PI](https://github.com/Lakhankumawat/LearnCPP/blob/main/Day-100(Algorithms)/R-Recursion/Replace_%CF%80.cpp)

Recursive program to replace all occurrences of pi with 3.14 in a given string
## Examples: 
```
Input : str = “pippppiiiipi” 
Output : 3.14ppp3.14iii3.14

Input : str = “pip” 
Output : 3.14p

Input : str = “xpix” 
Output : x3.14x
```

# [Tower of Hanoi](https://github.com/bhumikatewary/LearnCPP/blob/ddd6b1e51cecd18d72f76f303cefe7f341f3092f/R-Recursion/TowerofHanoi.cpp)

The Tower of Hanoi is a mathematical game or puzzle consisting of three rods and a number of disks of various diameters, <br>
which can slide onto any rod. The puzzle begins with the disks stacked on one rod in order of decreasing size, <br>
the smallest at the top, thus approximating a conical shape.

Three simple rules are followed:
1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack.<br>
 In other words, a disk can only be moved if it is the uppermost disk on a stack.
3. No larger disk may be placed on top of a smaller disk.

![Tower-of-Hanoi](https://4.bp.blogspot.com/-MiMl_ZKCkKs/Vnk3SyI2D5I/AAAAAAAAAy0/iqw84ovEbGM/s1600/Tower-Of-Hanoi-2-disk.png)
## Example: 
```
Input : 2
Output : Disk 1 moved from A to B
         Disk 2 moved from A to C
         Disk 1 moved from B to C
         
Explanation:          
Take an example for 2 disks :
Let rod 1 = 'A', rod 2 = 'B', rod 3 = 'C'.

Step 1 : Shift first disk from 'A' to 'B'.
Step 2 : Shift second disk from 'A' to 'C'.
Step 3 : Shift first disk from 'B' to 'C'.

The pattern here is :
Shift 'n-1' disks from 'A' to 'B'.
Shift last disk from 'A' to 'C'.
Shift 'n-1' disks from 'B' to 'C'.
```

### Properties

- Time Complexity : O(n)
- Space Complexity : O(n)

### Advantages

- The Tower of Hanoi puzzle is sensitive to prefrontal damage and dysfunction. The puzzle’s difficulty level can easily be <br>
 increased or decreased with additional disks or pegs respectively

### Disadvantage

- The Tower of Hanoi cannot be used standalone to understand and assess executive functions of the brain. <br>
It can be difficult to employ individuals unable to cooperate with the process.


