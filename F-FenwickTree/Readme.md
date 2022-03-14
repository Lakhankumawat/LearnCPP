
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






# K Query


We know by now, that BIT can be used to support following two operations:

1) *Query(i)* — queries element at position i.

2) *Update(i, j, d)* — adds d to the elements from i to j.

Some people call this "range update, single query", what we would like to accomplish is "range Update, range Query".

1) *RangeQuery(i, j)* — returns the sum from i to j.

2) *RangeUpdate(i, j, d)* — adds d to the elements from i to j.

![Intro](https://miro.medium.com/max/1400/1*RZgpomELnq40ZoL2Ykbrew.png)


## Approach Used

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
 




## Time Complexity

#### Update Operation

Let’s see how to construct this tree and then we will come back to querying the tree for prefix sums. BIT[] is an array of size = 1 + the size of the given array a[] on which we need to perform operations. Initially all values in BIT[] are equal to 0. Then we call update() operation for each element of given array to construct the Binary Indexed Tree. The update() operation is discussed below.

```

void update(int idx, int val) //add "val" at "idx"
{
    for(; idx <= n; idx += idx&-idx)
          BIT[idx] += val;
}

```

Its okay if you are unable to understand how the above update() function works. Let’s take an example and try to understand it.

Suppose we call update(13, 2).

Here we see from the above figure that indices 13, 14, 16 cover index 13 and thus we need to add 2 to them also.

Initially idx is 13, we update BIT[13]

    BIT[13] += 2;
Now isolate the last set bit of idx = 13(1101) and add that to idx , i.e. idx += idx&(-idx)

Last bit is of x = 13(1101) is 1 which we add to idx, then idx = 13+1 = 14, we update BIT[14]

    BIT[14] += 2;
Now 14 is 1110, isolate last bit and add to 14, x becomes 14+2 = 16(10000), we update BIT[16]

    BIT[16] += 2;
In this way, when an update() operation is performed on index x we update all the indices of BIT[] which cover index x and maintain the BIT[].

If we look at the for loop in update() operation, we can see that the loop runs at most the number of bits in index idx which is restricted to be less or equal to n (the size of the given array), so we can say that the update operation takes at most **O(log2(n)) time**.

#### Query Operation


```
int query(int idx)      //returns the sum of first idx elements in given array a[]
{
     int sum = 0;
     for(; idx > 0; idx -= idx&-idx)
         sum += BIT[idx];
     return sum;
}
```
Suppose we call query(14), initially sum = 0

idx is 14(1110) we add BIT[14] to our sum variable, thus sum = BIT[14] = (a[14] + a[13])

we add BIT[12] to our sum variable, thus sum = BIT[14] + BIT[12] = (a[14] + a[13]) + (a[12] + … + a[9])

again we isolate last set bit from x = 12(1100) and subtract it from x


we add BIT[8] to our sum variable, thus

sum = BIT[14] + BIT[12] + BIT[8] = (a[14] + a[13]) + (a[12] + … + a[9]) + (a[8] + … + a[1])

once again we isolate last set bit from x = 8(1000) and subtract it from x


since x = 0, the for loop breaks and we return the prefix sum.

Talking about complexity, again we can see that the loop iterates at most the number of bits in x which will be at most n(the size of the given array). Thus the *query operation takes **O(log2(n)) time**.


