#  Set & Unordered_set:
- ## Set in C++ :
Each element is unique in set and elements are stored in sorted order. Value of elements cann't be modified once it's inserted but removal and adding new value is possible

- ### Functions in Set-->
1. begin() = return iterator to 1st element to the set.
2. end() = return iterator to last element to the set.
3. size() = return number of elements stored in set.
4. insert(X)= insert new element 'X' in sorted position
5. find(key)= return iterator pointing to the element 'key'
6. empty() = bool function return true if set is empty
             either return false.
---

- ## Unordered Set :
  Unique keys are only allowed . unordered_set is implemented  using hash table where keys are hashed into indices of hash table, so it's not possible to maintain sorted order.

- ### Functions in Set-->
1. begin() = return iterator to 1st element to the set.
2. end() = return iterator to last element to the set.
3. size() = return number of elements stored in set.
4. insert(X)= insert new element 'X' in unordered_set
5. find(key)= return iterator pointing to the element 'key'
6. empty() = bool function return true if set is empty
             either return false.

---
### Difference between Set & unordered_set :

1. Set is ordered sequence of unique keys , but unordered_set is not sorted sequence .
2. Time complexity in set functions are almost O(log n) but in unordered_set is O(1).
