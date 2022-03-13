### Table of contents:
- Trace and Normal of Matrix:
    -[Trace](#Trace)
    -[Normal](# Normal)
    -[Properties_of_trace_matrix](# Properties of trace matrix)
    -[Example](# Example)
    -[Algorithim](# Algorithim)


### Trace:

The trace of a matrix A, defined by tr(A), is the sum of the diagonal elements of a matrix. Trace of a matrix is only possible for square matrix.

### Normal:

The normal of matrix is the sum of all the elements of a matrix and then the square root of sum.

### Properties of trace matrix: 

 --> tr(A + B) = tr(A) +tr(B)
 --> tr(cA) = ctr(A)  ** c represents scalars
 --> tr(A) = tr(A^T)  ** T means transpose of matrix 

### Example: 

![image](https://user-images.githubusercontent.com/100208233/158046978-b535dc41-9ad6-4d5b-ad27-0580fa836415.png)

  # Trace :
we have taken following as the elements of a matrix 
2 3 5
7 4 5
8 5 4

we have to add all the elements of the matrix and store it in sum variable,sum = 2+3+5+7+4+5+8+5+4,then we will find the square root of sum we get 6.55
so, normal of matrix = 6.55.

 # Normal:
Now we will first check the conditions for trace of matrix (i.e. row==column) then we will add all the diagonal elements 
trace = 2+4+4  so, trace of matrix = 10

### Algorithim:

1. Enter the order of a matrix (eg: 3X3 or 2X2 etc...)
2. Using loop enter the elements of a matrix .
3. Printing the elements of the matrix .
4. Finding the sum of all the elements of the matrix .
5. Then the square root of the sum using sqrt() to find the normal of the matrix and store it in variable normal.
6. Using the condition row == column we can find the sum of diagonal elements of a matrix , value of sum will be store in
 variable trace .
7. Print the value of normal and trace of a matrix .