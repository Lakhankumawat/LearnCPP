# Table of Content 
- [Union of two sets](#union-of-two-sets)
- [Intersection of two sets](#intersection-of-two-sets)
- [Cartesian Product of two Set](#cartesian-product-of-two-set)

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

# Intersection of two sets
- The intersection of sets can be denoted using the symbol ‘∩’. 
- The intersection of two sets A and B is the set of all those elements which are common to both A and B. Symbolically, we can represent the intersection of A and B as A ∩ B.

- For example:
![inter](https://user-images.githubusercontent.com/93239528/168460303-2b05d6c1-8708-4d93-859d-bdb6b7ef9238.png)


## Properties 
1. Commutative Property	`A ∩ B = B ∩ A`
2. Associative Property	`(A ∩ B) ∩ C = A ∩ (B ∩ C)`
3. Idempotent Property	`A ∩ A = A`
4. Property of Ⲫ/ Identity Law	`A ∩ Ⲫ = Ⲫ`
5. Property of Universal Set	`A ∩ U = A`

## Pseduo code
1) Initialize intersection I as empty.
2) Do following for every element x of first array
   a) If x is present in second array, then copy x to I.
4) Return I.


**Time Complexity** is O(mn)
where, m and n are number of elements in arr1[] and arr2[] respectively.


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
