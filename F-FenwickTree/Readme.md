
# Table Of Content

* [Fenwick Tree](#fenwick-tree)
    * [Description](#description)
    * [Implementations](#implementations)
    * [Notes](#note)
    * [K_Query](#k-query)
        *[Problem Statement](#problem-statement)
        *[Explanations](#explanation)
        * [Algorithm](#algorithm)
        * [Time Complexity](#time-complexity)
            * [Update Operation](#update-operation)
            * [Query Operation](#query-operation)
# Fenwick Tree


Fenwick tree is also called **Binary Indexed Tree**, or just BIT abbreviated.

![Intro](https://github.com/uhini0201/GSSoc-22-images/blob/main/output1.jpeg?raw=true)


## Description

__Fenwick Tree / Binary indexed tree (BIT)__ is a data structure used to process interval/range based queries. Compared to segment tree data structure, Fenwick tree uses less space and is simpler to implement.
One disadvantage of Fenwick tree is that it can be only used with an operation that is invertible.






## Implementations


The two important implementations of Fenwick Tree are:

* Least Significant Bit Operation
* Querying an Interval
* Updating array at index 

Fenwick tree is typically implemented as an array and is indexed using bits of integer keys. These integer keys fall in range [1...n], skipping 0.
Let ft[] be the array representing Fenwick tree. Then the element ft[i] is responsible for the range [(i - LSB(i) + 1) ... i].
This feature is used to build up the Fenwick tree and so it can be seen that Fenwick tree is a multi-way tree.

##### Note

**_The basic idea behind Fenwick tree is that since any integer can be represented as sum of powers of 2, we can represent cumulative frequencies as sum of non-overlapping sub-frequencies._**

![implement](https://i.stack.imgur.com/QcUPG.png)






## K Query

### Problem Statement

Given a sequence of n numbers a1, a2, ..., an and a number of k- queries. A k-query is a triple (i, j, k) (1 ≤ i ≤ j ≤ n). For each k-query (i, j, k), you have to return the number of elements greater than k in the subsequence ai, ai+1, ..., aj.
**Input Format**
Line 1: n (1 ≤ n ≤ 30000).

Line 2: n numbers a1, a2, ..., an (1 ≤ ai ≤ 10^9).

Line 3: q (1 ≤ q ≤ 200000), the number of k- queries.

In the next q lines, each line contains 3 numbers i, j, k representing a k-query (1 ≤ i ≤ j ≤ n, 1 ≤ k ≤ 10^9).
**Output Format**
For each k-query (i, j, k), print the number of elements greater than k in the subsequence ai, ai+1, ..., aj in a single line.
**Sample Input**
5
5 1 2 3 4
3
2 4 1
4 4 4
1 5 2 
**Sample Output**
2
0
3 

### Explanation

We know by now, that BIT can be used to support following two operations:

1) *Query(i)* — queries element at position i.

2) *Update(i, j, d)* — adds d to the elements from i to j.

Some people call this "range update, single query", what we would like to accomplish is "range Update, range Query".

1) *RangeQuery(i, j)* — returns the sum from i to j.

2) *RangeUpdate(i, j, d)* — adds d to the elements from i to j.

![Intro](https://miro.medium.com/max/1400/1*RZgpomELnq40ZoL2Ykbrew.png)


### Algorithm

An Efficient Approach is to solve the problem using offline queries and Fenwick Trees. Below are the steps: 
 

* First store all the array elements and the queries in the same array. For this, we can create a self-structure or class.
* Then sort the structural array in descending order ( in case of collision the query will come first then the array element).
* Process the whole array of structure again, but before that create another BIT array (Binary Indexed Tree) whose query( i ) function will return the count of all the elements which are present in the array till i’th index.
* Initially, fill the whole array with 0.
* Create an answer array, in which the answers of each query are stored.
* Process the array of structure.
* If it is an array element, then update the BIT array with +1 from the index of that element.
* If it is a query, then subtract the query(r) – query(l-1) and this will be the answer for that query which will be stored in answer array at the index corresponding to the query number.
* Finally output the answer array.
* The key observation here is that since the array of the structure has been sorted in descending order. Whenever we encounter any query only the elements which are greater than ‘k’ comprises the count in the BIT array which is the answer that is needed. 
* Below is the explanation of structure used in the program: 
 

>_**Pos**: stores the order of query. In case of array elements it is kept as 0. 
**L**: stores the starting index of the query’s subarray. In case of array elements it is also 0. 
**R**: stores the ending index of the query’s subarray. In case of array element it is used to store the position of element in the array. 
**Val**: store ‘k’ of the query and all the array elements._ 
 




### Time Complexity

* Update Operation - The update operation takes at most **O(log2(n)) time**.



* Query Operation - The query operation takes **O(log2(n)) time**.





## Advantages

1) This data structure is more space efficient, because while a segment tree required us to store N+N/2+N/4+...+1<2N values, we store only N values with a BIT, no increase from what we needed to just store the raw input.
## Disadvantages

1) The Fenwick tree structure works for addition because addition is invertible. It doesn't work for minimum, because as soon as you have a cell that's supposed to be the minimum of two or more inputs, you've lost information potentially.


