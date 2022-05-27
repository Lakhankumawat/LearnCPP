

## Lambda Functions
Lambda expressions allow us to write a function in hassle free manner or we say function in a single line . In these functions we only write short snippets of code specially as `Comparitor Function` in STL sort function.

### How to define lambda function

- Expression have the 4 things to define lambda function

1. capture clause
2. parameters
3. return type
4. defination of method

Often return type in lambda function is determined by compiler only . But in complex cases like in conditional statement , compiler is not able to figure out that what's return type so in that case we have to specify return type.

### Why to use Lambda expressions

lambda functions are more power than an ordinary function by having access to variables from the enclosing in it's scope. We can capture the variable in three ways that are given below:

1. Capture by reference
2. Capture by value
3. Capture by value & reference (mixed capture) \
   **Syntax used for capturing variables:**

- `[&]` : Here all external variable are capture by reference.
- `[=]` : In this all external variable are capture by value.
- `[a, &b]` : Here a is capture by value and b is capture by reference.

Note :- lambda function with empty capture clause `[ ]` can access only those variable which are local.


## Exception Handling in Cpp

Exceptions are the run-time interupts or we say the cases which are not defined and encounters during its execution.

### Two types Exceptions

1. Synchronous
2. Asynchronous
   This is archieved by specialized keywords that are:

- Try :- It represents the block of code that throw the exception or we say it tell that when the exception error.
- Catch :- Represents a block of code that is executed when a particular exception is thrown.
- throw :- Used to throw an exception. Also used list the exceptions that a function throws.

### Why Exception Handling?

These are the reasons for which we should use exception handling:

- Seperation of Error handling code from normal code.
- Functions/methods can handle any exceptions they choose.
- Grouping of Error Types.

### Try and Catch

- Try statements allows you to define a block of code that test error while executed.
- Throw keyword will throw the exception when the exception arises.
- Catch keyword will allows you do define what to do when exception arises.

### Special features of exception handling

- There is a special catch block which will accepts all types of exceptions that are thrown.

```c++
try{
    throw 01;
}
catch(...){
    cout<<"Exception Arises";
}
```

- Implicit type conversion doesn’t happen for primitive types.

```cpp
try{
    throw 'a';
}
catch(int x){
    cout<<"Int type exception Caught";
}

catch(...){
    cout<<"Default";
}
```

- If any exception is thrown and there is not catch block then the program terminates abnormally.

```cpp
try{
    throw 'a';
}
catch(int x){
  cout<<"Exception arises";
}
```

- A derived class exception always be in caught before a base class exception.

### Types Catch Block

1. Int Catch
2. Char Catch
3. Stirng Catch
4. double Catch
5. Universal Catch (As Stated second point of Special features)

---

## Catalan Number

The Catalan numbers are the special type of numbers which are defined as a sequence of natural numbers that occur in various counting problems , generally involving recursively defined objects.

![58374aa2b2e2c016a5b313e2bbd59940a2e1a5f9](https://user-images.githubusercontent.com/86917304/169381272-a9b6afe0-5cea-4447-b8db-e3688d1f4eb1.jpg)

### Calculations

There are two formulas for the Catalan numbers:

- Recursive : The recurrence formula can be easily deduced from the problem of the correct bracket sequence.

![image](https://user-images.githubusercontent.com/86917304/169523760-1eda6c2f-8900-49a3-b9d4-fe567d71af64.png)

- Analytical : The formula can be easily concluded from the problem of the monotonic paths in square grid. The total number of monotonic paths in the lattice size of `n x n` is given by `(2n / n)`.

![image](https://user-images.githubusercontent.com/86917304/169523868-d77e610e-6d7c-4fe4-a75e-19126b398105.png)

- Binomial Coefficient : We can use formula which is defined below to find the catalan number in `O(N)` time complexity.

![image](https://user-images.githubusercontent.com/86917304/169525112-e43aa376-7941-42b1-b345-9cd0a69b78b2.png)

### Complexites

- Recursive :
  - Time Complexity : `O(N)`
  - Space Complexity : `O(N)`
- Dynamic Programming :
  - Time Complexity : `O(N^2)`
  - Space Complexity : `O(N)`
- Binomial Coeffcient :
  - Time Complexity : `O(N)`
  - Space Complexity : `O(N)`

### Applications

1. Number of ways to connect the points on a circle disjoint chords. This is similar to point 3 above.
2. Number of ways to form a “mountain ranges” with n upstrokes and n down-strokes that all stay above the original line.The mountain range interpretation is that the mountains will never go below the horizon.
3. Count the number of expressions containing n pairs of parentheses which are correctly matched. For n = 3, possible expressions are ((())), ()(()), ()()(), (())(), (()()).
4. Count the number of possible Binary Search Trees with n keys (See this)
5. Count the number of full binary trees (A rooted binary tree is full if every vertex has either two children or no children) with n+1 leaves.
6. Given a number n, return the number of ways you can draw n chords in a circle with 2 x n points such that no 2 chords intersect.
