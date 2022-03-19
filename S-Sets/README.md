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


# Properties:
 1. It is non-commutative 
   ` A × B != B × A`

 2. If `A × B = B × A then A = B`

 3. The cardinality of the Cartesian Product:
    The number of elements in ` A × B ` and is equal to the product of cardinality of both sets: ` |A × B| = |A| * |B|`

 4. ` A × B = {∅}, if either A = {∅} or B = {∅}  `

 # Pseduo code:
 1. Initialize Set A and B
 2. for i=0 to n:
      for j=0 to n:
        print `{A[i],B[j]}`

 - **Time Complexity** for finding Cartesian Product is n^2 
