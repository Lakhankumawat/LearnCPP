# Equal Sum Partition Problem

- [Problem Statement](#problem-statement)
    - [Examples](#examples)
- [Explanation](#explanation)
- [Complexity](#complexity)


# Problem Statement

Given two strings s1 and s2, you have to output the shortest length of the string that has both strings s1 and s2 as subsequences.

     > Note this question is a variation of LCS problem

## Examples
```
Input:   str1 = "AGGTAB",  str2 = "GXTXAYB"

Output:  9

String "AGXGTXAYB" has both string 
"AGGTAB" and "GXTXAYB" as subsequences.

```
# Explanation

- Consider two strings S1 and S2.
```
S1= A G G T A B
S2= G X T X A Y B
```
- We need to find a string that has both strings as subsequences and is shortest such string.

- Shortest Supersequence for above example would be AGGXTXAYB

- Here we observe that if there are multiple occurence of any alphabet between the two strings(s1 and s2) then we write it only once (i.e GTAB).

- Now we know that GTAB is the LCS of the two strings.

- So to find the total length we calculate the size of both the strings and subtract the LCS of the string to remove second occurences.
```
Length of SuperSubsequence = (Length of string S1 + Length of string S2) - LCS(string S1, string S2)
```
``` C++
Input: string s1
Input: string s2
     m=size of s1
     n=size of s2
     return m+n-LCS(a,b,m,n)
```
```
s1: AGGTAB  
s2: GXTXAYB
s1=6, s2= 7, LCS=4 

    Ans 6+7-4=9 
```
# Complexity
```
Time Complexity: O(m*n) 
Auxiliary Space: O(m*n) 
```
>Complexity here is mainly because of LCS function
