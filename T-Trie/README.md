# Trie

## Trie Implementation
- [Implementation](#trie-implementation)
- [Node Structure](#structure-of-trie-node)
- [Insertion](#inserting-in-a-trie)
- [Searching](#searching-in-a-trie)
- [Complexities](#time-and-space-complexity)
- [Applications](#application-of-trie)
- [Limitations](#limitations-of-trie)

## Count Prefix
- [Problem Explanation](#count-prefix)
- [Approach](#approach)
- [Method](#method)
- [Complexities](#time-and-space-complexity)

## Trie Implementation
**Trie** is an advance data structure , Trie is one of the data structure in which search can be opptimized till the `key Length`. Using Trie we can search any key using `O(M)` time (where M is maximum length of string) , But the catch here is that trie requires high storage which leads storage requirements as the limitations of it.

## Implementation of Trie
Impletation of Trie are divided into main three phases
1. Node Structuring
2. Inserting of Node
3. Searching of Node

### Structure of Trie Node

Each and every node of trie consists of the multiple branches and each branch represents character of string or we say **Key**. There also a bool flag which indicates the ending of any string or key.

```cpp
struct Node{
    Node*child[26];
    bool endofkey;
    Node(){
        endofkey=false;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};
```

### Inserting in a Trie

Inserting any key into the trie , The character in a key act as a index to the array children . If the key have new character or an existing key character , we need to construct **non-existing** key character and mark the end as the `true` to show the ending of string. \
If input key character is already **existing** in trie we simply mark last node of key as the end of the string means `true`.

### Searching in a Trie

Searching for a key is analogous to insert operation, still, we only compare the characters and move down. The hunt can terminate due to the end of a string or lack of key in the trie. However, also the crucial exists in the trie, If the endofkey field of the last knot is true. In the alternate case, the hunt terminates without examining all the characters of the key, since the key isn't present in the trie.

### Time and Space Complexity

- **Time Complexity :-** `O(M)` where _M_ is length of key string.
- **Space Complexity :-** `O(alphabet_size * key_length * N)` where _N_ is number of strings in trie.

### Application of Trie

1. Used in dictionary implementations.
2. Used in Hashing.
3. Used in Self Balancing BST (Binary Search Tree).

### Limitations of Trie

- The main disadvantage of tries is that they need a lot of memory for storing the strings or key.
- Each node have too many node pointers(equal to number of characters of the alphabet).

---

## Count Prefix
In this problem we have to count the number of words in a list of string with the given prefix using **trie**.

### Approach
For starting with the solution of statement we have to , take one thing in mind that a node in a trie should have these three parameters:
1. **child:-** This is used to connect or we say mapping from character to the next node of trie corresponding ot it.
2. **isWordEnd:-** This is simply a bool variable used to make end node of any word **unique**.
3. **countprefix:-** This will take account that at each node how many words are starting.

### Method
1. When we insert list of string in trie such that every string inserted that should be inserted as an individual trie node.
2. Side bt side while inserting we have to update all the fields in every node of the trie like the prefix count.
3. And for a given prefix, traverse the trie till we reach the last character of the given prefix and return the words that are starting.

### Time and Space Complexity
**Time Complexity:** `O(n*l)` where n = number of words inserted in Trie and l=length of longest word inserted in Trie.
**Space Complexity:-** `O(n+l)` where n = number of words inserted in Trie and l=length of longest word inserted in Trie.

---


