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
- [Buy Maximum Stocks if i stocks can be bought on i-th day](#buy-maximum-stocks-if-i-stocks-can-be-bought-on-ith-day)
    - [Algorithm](#algorithm)
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

## Buy Maximum Stocks if i stocks can be bought on i-th day

- In a stock market, there is a product with its infinite stocks. The stock prices are given for N days, where arr[i] denotes the price of the stock on the ith day. 
- There is a rule that a customer can buy at most i stock on the ith day. If the customer has an amount of k amount of money initially, find out the maximum number of stocks a customer can buy. 
- For example, for 3 days the price of a stock is given as 7, 10, 4. You can buy 1 stock worth 7 rs on day 1, 2 stocks worth 10 rs each on day 2 and 3 stock worth 4 rs each on day 3.

<!-- image to help better explain the concept -->
<img src="https://user-images.githubusercontent.com/98539013/170832323-6262fe06-e901-4960-9da0-bdea83f192ba.jpeg" width="400" height="300" />


### Algorithm

* The idea is to use the greedy approach.
* First take the inputs from the user.
* Pass the inputs through the function buyMaxStocks
* Now we make pair of product cost and number of the day.
* Next we will sort the vector pair.
* Thus, we will calculate the maximum number of stock count.
* Then, we will finally return the result.

### Time Complexity
```
- O(NlogN).
```

### Advantage

- Solutions to smaller instances of the problem can be straightforward and easy to understand.

### Disadvantage

- Sometimes the algorithms fail to find the globally optimal solution because they do not consider all the data. The choice made by a greedy algorithm may depend on choices it has made so far, but it is not aware of future choices it could make.