# Table of contents
- [What are Templates?](#templates)
- [Ways of implementation?](#implementation)
  - [Function Template](#functionTemplate)
    - [Syntax of Function Template](#syntaxFunctionTemplate)
  - [Class Template](#classTemplate)
    - [Syntax of Class Template](#syntaxClassTemplate)
- [typename Vs. class keyword](#keyword)

# What are Templates? <a name="templates"/>

Templates are generic i.e independent of the data type.
Templates are primarily used to ensure code reuse and programme flexibility. 
We can simply write code that works with any data type by creating a simple function or class that takes data type as a parameter.

For instance, if we want a sorting algorithm to work for both numeric and character data types, 
we can simply write a function that takes the data type as an argument and implements the sorting technique.
The data can then be sorted based on the data type (type name) that is passed to the sorting algorithm. 
This eliminates the need to write ten algorithms for ten different data types.
As a result, templates can be used in applications where the code must be adaptable to multiple data types. 
Templates are also used in applications where reusability of code is a priority.

# Ways of Implementation <a name="implementation"/>

Templates can be implemented in two ways:

1. As a function template
2. As a class template

## Function Template <a name="functionTemplate"/>

A function template is similar to a regular function, with the exception that a regular function can only work with one data type, 
whereas a function template code can work with multiple data types.

While we can overload a regular function to work with different data types, 
function templates are always more convenient because we only have to write one program that works with all data types.

### Syntax of Function Template <a name="syntaxFunctionTemplate"/>

```
template<class T>
 T function_name(T args){

 ……

 //function body
 }
 ```
 Here, T stands for the template argument, which accepts a variety of data types, 
 and class is a keyword. We can also use 'typename' instead of the keyword class.

When a specific data data type is passed to function name, 
the compiler creates a copy of the function with this data type as an argument, and the function is executed.

## Class Template <a name="classTemplate"/>

We might need a class that is similar to all other aspects but only has different data types, as in function templates.
In this case, we can have different classes for different data types or different implementations within the same class for different data types. 
However, doing so will increase the size of our code.
Using a template class is the best solution for this. Template class is similar to function templates in terms of behaviour. 
When creating objects or calling member functions, we must pass the data type as a parameter to the class.

### Syntax of Class Template <a name="syntaxClassTemplate"/>

```
 template <class T>
 class className{

 …..

 public:
                             T memVar;
                             T memFunction(T args);
 };
```
T is used as a placeholder for the data type in the above definition. T is also used as a placeholder for data types in the public members' memVar and memFunction.

<b>Once a template class is defined as above, we can create class objects as follows:</b>

```
className<int> classObejct1;
className<float> classObject2;
className<char> classObject3;
```

# typename Vs. class keyword <a name="keyword"/>

While declaring template class or function, we use one of the two keywords class or typename. 
These two words are semantically equivalent and can be used interchangeably.
But in some cases, we cannot use these words as equivalent. For Example, when we are using dependent datatypes in templates like “typedef”, 
we use typename instead of class.

Also, the class keyword must be used when we have to explicitly instantiate a template.
