<!-- follow the template of Bubble Sort, add the respective heading in Table of content -->


<!-- Table of content -->
# Table of content
- [Dynamic Programming](#dynamic-programming)
  - [Recursive vs Dynamic Programming Approach](#recursive-vs-dynamic-programming-approach)
  - [Algorithm](#algorithm)
  - [Properties](#properties)
  - [Advantages](#advantages)
  - [Disadvantages](#disadvantage)
  - [Problems](#problems)

# Dynamic Programming :
Dynamic Programming is mainly an optimization over simple recursion.
Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming.
The basic idea is to simply store the results of  the subproblems, so that we do not have to compute it again and again them when needed later. 
This simple optimization reduces time complexities from exponential to polynomial. 


### Recursive vs Dynamic Programming Approach :







### Algorithm

#### Recursive:
```
int fibo(n)
  if n<=1
    return n;
  else
    fibo(n-1) + fibo(n-2);
```


#### Dynamic Programming:
```
f[0]=0;
f[1]=1;

for i=2 to n
  f[i]=f[i-1]+f[i-2];

return f[n];
```

### Properties

- Overlapping Subproblems
- Optimal Substructure

### Advantages

- As it is a recursive programming technique, it reduces the line code.
- One of the major advantages of using dynamic programming is it speeds up the processing as we use previously calculated references.

### Disadvantage

- It takes a lot of memory to store the calculated result of every subproblem without ensuring if the stored value will be utilized or not.
- In DP, functions are called recursively. Stack memory keeps increasing.

### Problems
 ```
 Given an array and a sum. Find if there is a subsequence present in the array with the given sum or not.
 ```
 ```
 Solution Link: 
 ```
---


