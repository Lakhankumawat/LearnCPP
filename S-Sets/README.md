# Table of Content 
- [Union of two sets](#union-of-two-sets)
- [Cartesian Product of two Set](#cartesian-product-of-two-set)
- [Intersection of two Set](#intersection-of-sets)
- [Find Kth distinct character from start of given String](#find-kth-distinct-character-from-start-of-given-string)
  - [Properties](#properties)
  - [Algorithm](#algorithm)
  - [Time Complexity](#time-complexity)
  - [Space Complexity](#space-complexity)
- [Sum of first k missing natural number in a given array](#sum-of-first-k-missing-natural-number-in-a-given-array)
  - [Problem Approach](#problem-approach)
  - [Time and Space Complexity](#time-and-space-complexity)

# Union of two sets
- The union of a two of sets is the set of all elements in the both the sets. It is one of the fundamental operations through which sets can be combined and related to each other. 
- A nullary union refers to a union of zero sets and it is by definition equal to the empty set.

- For example:
![image](https://user-images.githubusercontent.com/91279248/161617670-56260c6c-5931-4bc1-ba53-053216aa52d6.png)

## Properties 
1. Commutative Property	`A ∪ B = B ∪ A`
2. Associative Property	`(A ∪ B) ∪ C = A ∪ (B ∪ C)`
3. Idempotent Property	`A ∪ A = A`
4. Property of Ⲫ/ Identity Law	`A ∪ Ⲫ = A`
5. Property of Universal Set	`A ∪ U = U`

## Pseduo code
1. Input sets A and B 
2. Initialize a new set c
3. check if any element of A is getting repeated 
4. if yes then break the loop
5. else put the element in sets C
6. traverse through sets B 
7. if any element of B in C then break
8. else put it into sets C

**Time Complexity** is O(n^2)

# Cartesian Product of two Set

## Terms Explained:

Ordered Pair: It is when order of the two elements matter i.e. one element comes befor the other 
Eg: (4,5) != (5,4)

![image](https://user-images.githubusercontent.com/91279248/158008983-9d811305-29a0-4bba-b70b-8400163a40d6.png)

If A and B are two non-empty sets, then their Cartesian product A × B is the set of all ordered pair of elements from A and B.

       ```
       A × B = {(x, y) : x ∈ A, y ∈ B}
       ```

Suppose, if A and B are two non-empty sets, then the Cartesian product of two sets, A and set B is the set of all ordered pairs (a, b) such that a `∈A` and `b∈B` which is denoted as `A × B`.


## Properties:
 1. It is non-commutative 
   ` A × B != B × A`

 2. If `A × B = B × A then A = B`

 3. The cardinality of the Cartesian Product:
    The number of elements in ` A × B ` and is equal to the product of cardinality of both sets: ` |A × B| = |A| * |B|`

 4. ` A × B = {∅}, if either A = {∅} or B = {∅}  `

 ## Pseduo code:
 1. Initialize Set A and B
 2. for i=0 to n:
      for j=0 to n:
        print `{A[i],B[j]}`

 - **Time Complexity** for finding Cartesian Product is n^2 

---

# Intersection of sets

The intersection of two sets A and B is the set of all elements which are common in both sets as same in both A and B set , The intersection of A and B is denoted as `A ∩ B`.

- If Any of one set is empty then the intersection of set A and B is defined as `null or fi` and we can represent as `A ∩ B = φ` these sets are called **disjoint sets**.

![image](https://user-images.githubusercontent.com/86917304/168950618-3b5da193-ead6-4a94-a793-4d87de887924.png)

## Properties

- Commutative Law : `A ∩ B = B ∩ A`
- Associative law : `(A ∩ B) ∩ C = A ∩ (B ∩ C)`
- Law of φ and U : `φ ∩ A = φ, U ∩ A = A`
- Distributive law : `A ∩ (B U C) = (A ∩ B) U (A ∩ C)`
- Idempotent law : `A ∩ A = A`

## Pseudo Code
![image](https://user-images.githubusercontent.com/86917304/169095891-1a6d91dd-cf45-4f3d-be19-d49c58c63faf.png)

## Approach

- Firstly We sort both the array in _ascending order_.
- Then we traverse to both array with two pointer approach.
- If `a[i]==b[j]` then we print the element.
- If `a[i]<b[j]` then simply increase the `i` pointer.
- If `a[i]>b[j]` then we simply increase the `j` pointer.

## Complexites

- Time Complexity :- O(n+m)
- Space Complexity :- O(1)


# Find Kth distinct character from start of given String

- Given a string str of size N containing all possible characters including integers.Print Kth distinct character from the starting of the given string. 
- If K is more than number of distinct characters, print -1.
- Note: The uppercase and lowercase letters are considered different.

<img src="https://user-images.githubusercontent.com/98539013/170510201-bac36cdd-c133-4ba6-9bdc-d0acf560971e.png" width="750" height="400" />

## Properties

- Commutative Law : `A ∩ B = B ∩ A`
- Associative law : `(A ∩ B) ∩ C = A ∩ (B ∩ C)`
- Law of φ and U : `φ ∩ A = φ, U ∩ A = A`
- Distributive law : `A ∩ (B U C) = (A ∩ B) U (A ∩ C)`
- Idempotent law : `A ∩ A = A`

## Algorithm

- Taking the inputs from the user.
- Passing the string and k through the function- printKthDistinct.
- Then initialize the set- "uniqueEle".
- Traverse the string and put its elements in the set, till the size of set becomes  equal to k. 
- Finally output the last traversed element of the string.

## Time Complexity
```
- O(N*N).
```
## Space Complexity
```
- O(1).
```

# Sum of first k missing natural number in a given array

Given an array arr[] of size N and a number K, the task is to find the sum of the first K natural numbers that are not present in the given array.

<img src="https://user-images.githubusercontent.com/78517313/170889405-4b81f7cd-6b50-4a7e-bfe0-5da7d44eae58.PNG" />

## Properties:

- Commutative Law : `A ∩ B = B ∩ A`
- Associative law : `(A ∩ B) ∩ C = A ∩ (B ∩ C)`
- Law of φ and U : `φ ∩ A = φ, U ∩ A = A`
- Distributive law : `A ∩ (B U C) = (A ∩ B) U (A ∩ C)`
- Idempotent law : `A ∩ A = A`

## Problem Approach

- Taking the inputs from the user.
- Create a sorted set from array elements to remove all duplicates.
- Then for each positive numbers from
 starting in set:
 - Find count of numbers in between 2 positive numbers in the set
 - If the count is smaller than K, find the sum of numbers in between those 2 numbers in the set and reduce K by count
 - If the count is greater than K, find the sum of only K numbers from the previous positive number and reduce K to 0
- Return the sum

## Time and Space Complexity
```
- Time Complexity - O(N * logN)
- Space Complexity - O(N)
```
