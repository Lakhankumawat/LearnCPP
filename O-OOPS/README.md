# Contructors and destructors in C++ 

- [CONSTRUCTORS](#constructors)
    - [Default Constructors](#default-constructors)
    - [Parameterized Constructors](#parameterized-constructors)
    - [Copy Constructors](#copy-constructors)
- [DESTRUCTORS](#destructors)


# CONSTRUCTORS

- Constructors are used to initialise the objects of a class. 
- It has the same name as the class name.


### Default Constructors

- A default constructor is a constructor which does not have any parameters and return type. It is created by the compiler even if we dont create it manually.


### Parameterized Constructors

- A contructor in which we can pass arguments to initialise the object. - A parameterized contructor is created just like a normal function.


### Copy Contructors

- A copy constructor is simply, creating a copy of an object of a class or initialising an object using another object of the same class.
- It is used to pass the object by value to any function. BUT the copy contructor function takes its argument by reference because otherwise every time a copy constructor is called it will call a copy constructor and this will go so on without terminating.


# DESTRUCTORS

- It is a function to destroy the object created. It is called automatically when the object goes out of scope or is explicitly deleted.
- But sometimes when we use dynamic allocation to allocate a memory we have to manually create a destructor function and use a delete operator in it to avoid memory leaks.

# [Operator Overloading:](https://www.geeksforgeeks.org/operator-overloading-c/) <br>

<img src="https://i1.wp.com/www.topjavatutorial.com/wp-content/uploads/2016/02/operator-overloading.png?w=597&ssl=1">
<p>All Mathematical Operators (Arithmetic, relational, logical, etc...) are implemented by default to operate on primitive data types, such as: int & float.</p>

<p>By default, they will not work on a user-defined class, therefore, we have to implement them ourselves for this class. This was done for the <b>string</b> class to allow the usage of the addition operator to concatenate strings.</p>
<p>Overloading an Operator is useful to customize the use of this operator to suit the developer's needs for the class, <b>such as:</b> Overloading the <b>addition</b> operator to add complex numbers by adding their real and imaginary parts separately. Or Overloading the <b>Insertion</b> Operator to print multiple attributes at once, as follows:</p>

```
ComplexNumber n1 = "3+4i";
ComplexNumber n2 = "2+7i";
cout<<n1+n2;
```
<p><br>By default, this will not work, but by overloading the addition <b>(+)</b> operator to suit the addition of complex numbers, n1+n2 will be evaluated correctly, and by overloading the Insertion (<<) Operator, both real and imaginary attributes will be displayed correctly.</p>


# Table of Contents
- [Binary Operators](#binary-operators)
    - [Properties](#properties)
    - [Example](#example)
    - [Output](#output)

### The most common types of Operators to be Oveloaded:
1) Binary Operators</em> (+, -, *, /)
2) Unary Operators (++, --, !)
3) Relational Operators (>, <, ==, !=)
4) Insertion and Extraction Operators (<<, >>)
5) Other Operators ([ ], typecasts)
<hr>

# Binary Operators

<p>Binary Operators, such as addition, subtraction, multiplication, and division
<br>Perform an arithmetic operation on two Objects</p>

##### Properties

* A binary Operator requires <b>two objects</b>
* A binary Operator returns the same type as its parameters

##### Example
``int x = 2;``<br>
``int y = 3;``<br>
``int z = x + y;``

<br>
<hr>
