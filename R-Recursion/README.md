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

Tower of Hanoi is a mathematical game or puzzle involving three sticks and a number of different discs, <br>
which can slip on any stick/rod. The paradox begins with discs embedded in the same object in a declining size(descending order), <br>
the smallest at the top, thus almost showing a conical shape.

Here are three simple rules:
1. Only one disk can be moved at a time.
2. Each movement involves taking a disk above one of the stacks and placing it on top of another stack. <br>
 In other words, the disk can only be moved if it is the highest disk in the stack.
3. No larger disk can be placed on a smaller disk.

![Tower-of-Hanoi](https://4.bp.blogspot.com/-MiMl_ZKCkKs/Vnk3SyI2D5I/AAAAAAAAAy0/iqw84ovEbGM/s1600/Tower-Of-Hanoi-2-disk.png)
## Example
```
Input : 2
Output : Disk 1 moved from X to Y
         Disk 2 moved from X to Z
         Disk 1 moved from Y to Z
         
Explanation:          
Taking the example for 2 disks :
Let rod 1 = 'X', rod 2 = 'Y', rod 3 = 'Z'.

Step 1 : Shift first disk from 'X' to 'Y'.
Step 2 : Shift second disk from 'X' to 'Z'.
Step 3 : Shift first disk from 'Y' to 'Z'.

The pattern here is :
Shift 'n-1' disks from 'X' to 'Y'.
Shift last disk (nth) from 'X' to 'Y'.
Shift 'n-1' disks from 'Y' to 'Z'.
```

### Algorithm

```
START
Procedure Hanoi(disk, source, destination, auxillary)

   IF disk == 1, THEN
      move disk from source to destination             
   ELSE
      Hanoi(disk - 1, source, auxillary, destination)     // Step 1
      move disk from source to destination                // Step 2
      Hanoi(disk - 1, auxillary, destination, source)     // Step 3
   END IF
   
END Procedure
STOP
```

### Properties

- Time Complexity : O(n)
- Space Complexity : O(n)

### Advantages

- The Tower of Hanoi puzzle is sensitive to previous damage and malfunction. The level of complexity can be easily
 increased or decreased with additional discs.

### Disadvantage

- The Hanoi Tower cannot be used independently to understand and evaluate higher brain functions.

# [Calculating GCD and LCM by Recursion](https://github.com/Arun9739/LearnCPP/blob/recursiveGCD/R-Recursion/Recursive_GCD_LCM.cpp)

## Brief explainaion about GCD and LCM :
The least common multiple (LCM) of two integers is the smallest positive integer that is a multiple of both. The greatest common divisor (GCD) of two integers is the largest positive integer dividing both. The product of the two numbers is the product of the LCM and the GCD.

## What is Recursion : 
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called as recursive function. Using recursive algorithm, certain problems can be solved quite easily. Examples of such problems are Towers of Hanoi (TOH), Inorder/Preorder/Postorder Tree Traversals, DFS of Graph, etc.

## Difference between iterative approach and recursive approach :
![](https://cdn-media-1.freecodecamp.org/images/1*QrQ5uFKIhK3jQSFYeRBIRg.png)

## Algorithm :
### Algorithm for GCD :

- Read two numbers a and b
- If(a is equal to 0) return b
- If(b is equal to 0) return a
- else return (b, a mod b)

### Algorithm for LCM

- Read two numbrs a and b
- return (a x b) / GCD(a, b)

## Time and Space Complexity
- Time Complexity: `O(n)`
- Space complexity: `O(n)`

## Advantages
 - The logic used by the program is simple to understand
 - time complexity of this program is less compared to other methods for finding GCD and LCM

 ## Disadvantages
 - As recursion uses stack, for large numbers, memory may become full due to stack full
