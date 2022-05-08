# Table of content
- [Word Wrap Problem](#word-wrap-Problem)
    - [Algorithm](#algorithm)
    - [Time Complexity](#time-complexity)
    - [Space Complexity](#space-complexity)
 


## Word Wrap Problem

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
