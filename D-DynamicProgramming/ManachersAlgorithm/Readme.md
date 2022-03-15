
# Manacher's Algorithm

- [Manacher's Algorithm](#manachers-algorithm)
  - [Problem](#problem)
  - [Example](#example)
  - [Explanation Of Algorithm](#explanation-of-algorithm)
  - [Complexities](#complexities)


## Problem
Problem Statement : Given a string "s", return the length of longest palindromic substring in "s".
## Example
```C++
Example 1:
Input: s = "babad"
Output: 3

Example 2:
Input: s = "abacabacabb"
Output: 9
```
## Explanation Of Algorithm
- So we have given an string of N length and we have to return the length of longest palindromic Substring in this given string , But ```HOW ?```
- As You Saw in the further approaches of the same problem ***What We are Doing ?*** we are iterating over all characters and checking the substring which leads to **O(N^2).**
- Here ```MANACHER's ALGORITHM``` helps to reduce those number of checks and solve it in *Linear Time* and *Constant Space*.
- While Reading the Explantion Make sure to Take a Dry Run and Keep in mind that what these Variables Do.
> 1.left<br>
2.right<br>
3.center <br>
4.mirrorOfCurrIndex <br>5. maxLengthForEachIndex
```C++
//Main Function
int manacherAlgo(string s, int left, int right, int center, vector<int> &maxLengthForEachIndex)
{}
```

<details>
<summary>For More Explaination</summary>

  > Here  I have explained each and everything With comments in the Code.

[```Full Explanation```](ManachersAlgorithm.cpp)


</details>

## Complexities
```C++
Time Complexity - O(N) , //where N is the length of the given string
Space Complexity - O(1), //since we haven't used any space
```