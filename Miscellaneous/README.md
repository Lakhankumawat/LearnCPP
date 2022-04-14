

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
