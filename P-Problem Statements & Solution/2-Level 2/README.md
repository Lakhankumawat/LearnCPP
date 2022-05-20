
# Table of Contents:-
- [Word Wrap Problem](#word-wrap-problem)
    - [Problem Statement](#problem-statement)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Space Complexity](#space-complexity)
- [Aggressive Cows](#aggressive-cows)
   - [Problem Statement](#problem-statement-1)
   - [Explanation of Problem Statement](#explanation-of-problem-statement-with-a-test-case)
   - [Approach](#approach)
   - [Algorithm](#algorithm-1)
   - [Time Complexity](#time-complexity-1)




## Word Wrap Problem

#### Problem Statement

- Given ‘n’ words of various lengths, and a limit on the number of characters that can be put in one line .
- Assume each word has length less than the width of line(w)
- You have to arrange these given words in such a way that:

  - Each word is separated by a space character.
  - You need to put as many as words in every line.
  - You can not spilt the words and put them in next line.
  - Extra spaces includes spaces put at the end of every line except the last line.
  - Example for Extra spaces: Let take an array A={aaa, bbb, cc, dddd} and length of line=6.
  
  ![wwp](https://user-images.githubusercontent.com/76229635/167290207-01928ec7-1e65-4f1b-b00c-599bb1b4fca1.jpg)




### Algorithm

- Begin word wrap function
- Let take an array containing words 'A' and width of line 'w', given by user.
- Word size as "ws", it is an array(ws[]) containing word size of 'A' on respective indices.
- Using two Matrix e[][] for extra spaces, l[][] for line cost.
- Using two arrays t[] for total cost, s[] for solution.
- Loop-1: calculate the Extra spaces in single line.
- Loop-2: calculate the line cost with the extra spaces found.
- Loop-3: calculate the minimum solution.
- Print using solution.
- End Word wrap function


### Time Complexity
```
- O(n^2)
- Time complexity: n^2 is coming from nested-loops, as outer loop runs from 1 to n and inner loop runs from 1 to n(approx), therefore it turn out to be O(n * n).
``` 
### Space Complexity
```
- O(n^2)
- Here extra space is a 2D array which is of space size (n * n), therefore it becomes O(n * n).
``` 


## Aggressive Cows 

### Problem Statement
There is a new barn with N stalls and C number of cows. The stalls are located on a straight line with positions x1,x2,...,xN. We have to assign the cows to the stalls, is such that the minimum distance between any two of them is as large as possible. We have to find largest minimum distance.

### Explanation of Problem Statement with a test case
Let's say we have 5 stalls and 3 cows. The stalls are place as [1,2,4,8,9]. We will try to place 3 cows in stalls and find minimum distances from these configurations.

![image](https://user-images.githubusercontent.com/92020810/162578422-e2f52ce4-cecc-4253-9718-1aa3d205d6d6.png)
many such configurations are possible. For above shown configurations, maximum or largest minimum distance is 3. This is what we have to do. Hope you understand... else try out some more configurations on your own :)

### Approach
* We can try out to find all possible configurations via which cows can be placed in given number of stalls. This would be a recursive solution with exponential time complexity. Can we reduce it?
* We increase the range of minimum distance between two cows and place them according. This would take n^2 solution. Umm seems better because we reduced our solution from exponential to polynomial solution. Can we improve more?
* From above solution, we can see that we are alloting cows to stalls from pre-defining the minimum distance between the two cows. So, we are basically making use of range for distances. This range will be in sorted increasing order. This gives us hint to use of binary search. 

### Algorithm
``` 
  Sort the given array.
  low = 1, high = last element of the array
  while(low<=high):
    mid = (low+high)/2
    for i in array:
      if mid is valid minimum distance for allocating cows in stalls
        low = mid+1
      else 
        high = mid-1
  return high
```
### Time Complexity
For sorting, it takes Nlog(N). For our algorithm, log(N) for binary search and N for checking if cows can be allocated or not. So total time complexity is Nlog(N).
