# Table of Contents 
- [Hash Table](#hash-table)
- [Hash Table for Customer Details](#hash-table-for-customer-details)

## Hash Table

![image](https://www.tutorialspoint.com/data_structures_algorithms/images/hash_function.jpg)

- Hash Table is a data structure which stores data in an associative manner. In a hash table, data is stored in an array format, where each data value has its own unique index value. Access of data becomes very fast if we know the index of the desired data.
- Thus, it becomes a data structure in which insertion and search operations are very fast irrespective of the size of the data. Hash Table uses an array as a storage medium and uses hash technique to generate an index where an element is to be inserted or is to be located from.


## Hash Table for Customer Details 

- If we want to store the customer details and want to search them in well manner, we can use a hash table and linear hashing.
- We take customer details like customer name, customer id, and customer phone.
- We create a Hash table for customers then insert the data based on the hash key.
- During a searching, we can search them based on the hash key only.
- If two keys point to same location, then we use Linear probe resolution method for resolving collision.

<img src = "https://khalilstemmler.com/img/blog/data-structures/hash-tables/hash-table.png" width = "600" height="500">

### Linear Probe Resolution Method :

- Linear probing is a scheme in computer programming for resolving collisions in hash tables, data structures for maintaining a collection of key–value pairs and looking up the value associated with a given key.
- Along with quadratic probing and double hashing, linear probing is a form of open addressing. In these schemes, each cell of a hash table stores a single key–value pair. When the hash function causes a collision by mapping a new key to a cell of the hash table that is already occupied by another key, linear probing searches the table for the closest following free location and inserts the new key there.

### Features 

- The Inserting and Searching in the hash table is very easy compared to other data structures.
- There is very less chance of collision especially when we use linear probe.

### Pseudo code

- Inserting a Entry :

1) Generate a hash key for a entry
2) If the place pointed by hash key is empty,
    Insert a data at that position
3) Else,
    Loop until we get a empty position
4) If, there is no empty location print hash table full

- Searching a entry

1) Generate a hash key for given key
2) If the location pointed by hash key is empty,
    return -1
3) If that location contains desired key,
    return position
4) else, loop until we get desired key
5) If the key is not found
    return -1
    
- Displaying a hash table

1) Loop(until last position)
2) If the position contains data,
    print data
3) else,
    print no hash entry
4) end loop

### Time complexity

```
- Searching : O(1)
- Insering : O(1)
```    
### Advantages :

- Hash table is very useful when we have huge amount of data
- Searching a data in a table is very fast.

### Disadvantages : 

- Only limited entries in a Hash table
- If collision occurs, we must take care of it.
