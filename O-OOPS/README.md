
# Table of Contents

- [Constructors and destructors in C++](#constructors-and-destructors-in-c++)
- [Diamond Problem in Inheritance](#diamond-problem-in-inheritance)


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


# [Diamond Problem in Inheritance](https://github.com/Lakhankumawat/LearnCPP/pull/1460)

- [Introduction](#introduction)
- [Problem Statement](#diamond-problem-statement)
- [Example](#example-of-diamond-inheritance)
- [Solution](#solution-of-diamond-problem)
- [Algorithm](#algorithm)
- [Advantages](#advantages)
- [Disadvantages](#disadvantages)
- [Time Complexity](#time-complexity)


### Introduction
The Diamond Problem is an ambiguity that arises in multiple inheritance when two-parent classes inherit from the same grandparent class, and both parent classes are inherited by a single child class.This scenario gives rise to a diamond-shaped inheritance graph and is famously called “The Diamond Problem.”


### Diamond Problem Statement
Child Class(D) inherits the traits of class A twice—once from B and again from C. This gives rise to ambiguity since the compiler fails to understand which way to go.
Here, the A class constructor is called twice: once when the B class object is created and next when the C class object is created. The properties of the A class are inherited twice, giving rise to ambiguity.


### Example of Diamond Inheritance

![Inheritance1](https://user-images.githubusercontent.com/87706725/168796785-4124aa2d-42d5-40b2-8132-a4b9e003b01b.png)


### Solution of Diamond Problem
The solution to the diamond problem is to use the "virtual" keyword. We will make the two parent classes (who inherit from the same grandparent class) into virtual classes in order to avoid two copies of the grandparent class in the child class.
Here we have used the virtual keyword when classes B and C inherit the A class. This is usually called “virtual inheritance," which guarantees that only a single instance of the inherited class (in this case, the A class) is passed on.

![Inheritance2](https://user-images.githubusercontent.com/87706725/168802641-f0e9b7e4-9824-43a4-adbb-8b16193e8057.png)

### Algorithm

* 1<sup>st</sup> START OF THE PROGRAM
* 2<sup>nd</sup> Create a parent class A & a constructor of that class such that it only prints "Constructor A.
* 3<sup>rd</sup> Now, create two child classes of A i.e B and C & make sure that their visibility mode is public. Also create their constructor which doesn't take any arguments,just prints "Constructor B" & "Constructor C".
                                A
                              /   \
                             B     C
* 4<sup>th</sup> Use the "virtual" keyword when B & C class inherit A class. With the use of "virtual" keyword, the base class i.e class A is virtually connected to class D. Thus,it creates only single instance of virtual base class & prevents it from inheriting multiple times.
* 5<sup>th</sup> Create an Object of class D. 
* 6<sup>th</sup> Now, as we have created object,then the constructors will be called one by one according to their inheritance.
* 7<sup>th</sup> Thus, by using the virtual keyword, problem of multiple inheritance is solved.
* 8<sup>th</sup> STOP 


### Advantages

1. By using "virtual" keyword , when two superclasses of a class have a common base class,then constructor is called only once. This resolves the ambiguity.

### Disadvantages

1. The disadvantage of Diamond inheritance is that,it leads to a lot of confusion when two base classes implement a method with same name.

### Time Complexity

* **Best Case Time Complexity is** O(1)
* **Worst Case Time Complexity is** O(1)
