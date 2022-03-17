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




# [Tower Of Hanoi]

Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules: 

1->Only one disk can be moved at a time.
2->Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3->No disk may be placed on top of a smaller disk.


APPROACH

![approach](https://user-images.githubusercontent.com/100334178/158751782-95976bf3-c1d5-45c6-9a94-0f9cbbebdc97.png)

IMAGE

![image](https://user-images.githubusercontent.com/100334178/158751870-3ca284b3-0f8e-44a5-be94-41d4eaf24f39.png)

EXAMPLE

![example](https://user-images.githubusercontent.com/100334178/158751947-92d1ef97-5c62-4373-9068-3f1409033368.png)


ALGORITHM

![ALGORITHM](https://user-images.githubusercontent.com/100334178/158752356-32cf3154-6062-4633-9a66-23db69d5199d.png)

ADVANTAGE
The program of tower of hanoi gives us the simple solution of a very famous and complex problem with simple understanding with only few lines of codes.

DISADVANTAGE
This program has time-complexity-O(2^n) where n=number of disks,which is not so good because it will take much more time for giving us the solution of problem tower of hanoi.



