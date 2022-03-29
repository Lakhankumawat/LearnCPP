# LRU Cache Using Queue ->
---
> A **LRU Cache( Least Recently Used)** is used to organize items according to their frequency of uses.
It helps to identify Quickly Which item is used the least number of time in the Cache.

---

> ## Functions in LRU :


  1. **get(Key)**<br>
    If the Key is There in cache , return corresponding value , either return -1 .

  2. **put(key,value)** <br>
    If the chache is not overflown insert the {key,value} pairs , 
    either remove the LRU element pair from Cache and insert the new key-value pair. 
    ---
    
## Implementation :
> 1. **HashMap** : Hash is used to refer as key -address of related node as their value.
> 2. **Queue** : It is implemented as a Doubly Linked List. Queue Size== Cache Size .<br>
 **The Least Recently Used element is placed towards the rear end and most used is towards to fron end .**


---

> ## Costs : 
- Space Complexity -> O(n)
- Access Time -> O(1)
