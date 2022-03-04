# String Trie

Implementation of the TRIE data structure to store strings.

Problem:

Given an array of N strings, and an array of Q queries, check for each query if it
it present in the array or not.

Why we Used Trie

We know we can do this using two loops one for the strings array and one for the queries 
but its time complexity will be O(N*N) and for very large test cases it will not work

So in case of Trie The time complexity for inserting and searching are O(Key_size)

Let use see how

Whenever we search or insert a string we only iterate over that string and make
required operations according to if current char of string is present or not

So Trie reduce our complexity from O(N*N) to O (key_size) where key size is the length
of string to be inserted or searched

Example

...

Inserted Strings [ "code", "coder", "C++","GSSOC", "girlscript", "LearnCPP"]
Strings to be Searched [ "coder", "codes", "C++", "GSSoc", "LearnCPP" ]




```
# Integer Trie

Implementation of the TRIE data structure to store non-negative integers.

Assume integer has 32-bit representation.

Time complexity

Insertion : O(1)

In Case of Non Negative Numbers we have to check only 32 bits to insert a number
So Time Complexity will be O(32) that is equivalent to constant Time

Searching : O(1)

It is same as insertion we only have to check atmax 32 bits in case of searching to
check if a number is present or not So O(32) if equivalent to constant
```
Example

...

Inserted Array [ 22, 10, 2, 8, 5, 3 ]
Array to be Searched [ 1, 2, 5, 10, 25, 0 ]