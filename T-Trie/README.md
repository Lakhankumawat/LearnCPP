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
