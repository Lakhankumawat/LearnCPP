<!-- Table of content -->
# Table of content
- [1.Fractional KnapSack](#OPEN-this-link-below-for-a-deatiled-summary-of-above-greedy-algorithms-✨)
- [2.Job Scheduling](#OPEN-this-link-below-for-a-deatiled-summary-of-above-greedy-algorithms-✨)
- [3.Busyman Problem](#OPEN-this-link-below-for-a-deatiled-summary-of-above-greedy-algorithms-✨)
- [Optimal Merge Pattern](#Optimal-Merge-Pattern)
    - [Implementation](OptimalMergePattern.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
- [Huffman Coding](#Huffman-Coding)
    - [Implementation](HuffmanCoding.cpp)
    - [Huffman Coding Algorithm](#huffman-coding-algorithm)
    - [Time Complexity](#Time-Complexity)
    - [Advantage](#advantage)
    - [Disadvantage](#disadvantage)


## OPEN this link below for a deatiled summary of above greedy algorithms ✨
[1.Fractional KnapSack](https://github.com/Lakhankumawat/LearnCPP/files/6333157/1906055_CS4403.pdf) 
<br>
 [2.Job Scheduling](https://github.com/Lakhankumawat/LearnCPP/files/6333157/1906055_CS4403.pdf) 
<br>
[3.Busyman Problem](https://www.spoj.com/problems/BUSYMAN/)


## Optimal Merge Pattern

- Optimal merging of two or more sorted files to make them a single file in minimum computations is called optical merge pattern
<!-- image to help better explain the concept -->
![Optimal-Merge-Pattern](https://i.pinimg.com/originals/ff/49/1a/ff491a0837b96115aab5c27926c42792.png)


### Algorithm

* Initialize total_computation=0
* creating minheap (insertin files size)
* merge untill priority queue is not empty
* store the weight of two smallest files in variables lweight ,rweight and pop them from the queue
* add their weights ,increase the total_computation with their weight and push it to queue as new node
* return count

### Properties

- O(files_pq.top)  =  O(1)
- O(files_pq.push)  =   O(logn)
- T(n) = (n – 1) * logn = O(nlogn) , where n is the total number of files

### Advantages

- Less number of computation rerqired.


## Huffman Coding

- Huffman coding is a method of data compression that is independent of its data type. In which more common event is represented by shorter code and less common event is represent longer code.
<!-- image to help better explain the concept -->
![Huffman-Coding](https://ds055uzetaobb.cloudfront.net/image_optimizer/7d429535d4035498e71eb0b5402a1c301ecfa131.jpg)
Huffman coding :
A : 11
B : 10
C : 01
D : 00

Huffman Coding have two main steps -
1. Creating a huffman tree from input characters.
2. Huffman tree traversal and assigning codes to characters.

### Huffman Coding Algorithm

* creating minheap (insertin frquency)
* merge untill priority queue is not empty
* while minheap is not empty 
* extrtact two minimum frequency from minheap assign first to left and second to right .
* for all the non used node. 
* assign the sum of these two to the newnode and make them its left and right child.
* display the code
* if null then return
* if root is used then print data an code
* call display for left and rigjht node

### Time Complexity

-  O(nlogn) , where n is the total number of symbols

### Advantage

- uses less storage for fequently occurring characters .

### Disadvantage

- Require two passes over the input (one to compute frequency and one for coding ) thus encoding is slow.