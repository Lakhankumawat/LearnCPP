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


# Diamond Problem in Inheritance

- [INTRODUCTION](#introduction)
- [DIAMOND PROBLEM](#diamond-problem)
- [OUTPUT OF DIAMOND INHERITANCE](#output-of-diamond-inheritance)
- [SOLUTION](#solution-of-diamond-problem)
- [OUTPUT OF SOLVED PROBLEM](#output-of-solved-problem)

# Introduction
The Diamond Problem is an ambiguity that arises in multiple inheritance when two-parent classes inherit from the same grandparent class, and both parent classes are inherited by a single child class. This is illustrated in the diagram below:

![Inheritance1](https://user-images.githubusercontent.com/87706725/168796785-4124aa2d-42d5-40b2-8132-a4b9e003b01b.png)

Here, we have a class Child inheriting from classes B and C. These two classes, in turn, inherit class A.

# [Diamond Problem](O-OOPS/diamondInheritance.cpp)
Child Class(D) inherits the traits of class A twice—once from B and again from C. This gives rise to ambiguity since the compiler fails to understand which way to go.
Here, the A class constructor is called twice: once when the B class object is created and next when the C class object is created. The properties of the A class are inherited twice, giving rise to ambiguity.

# Output of Diamond Inheritance
On creating an object of Sub-child Class D, we get the following output:

![Diamond1](https://user-images.githubusercontent.com/87706725/168798184-ee79cfdd-567f-492b-9e99-e5a609dc0642.PNG)


Here the constructor of class A is called twice. Thus giving rise to ambiguity.

# Solution of Diamond Problem
The solution to the diamond problem is to use the "virtual" keyword. We will make the two parent classes (who inherit from the same grandparent class) into virtual classes in order to avoid two copies of the grandparent class in the child class.
Here we have used the virtual keyword when classes B and C inherit the A class. This is usually called “virtual inheritance," which guarantees that only a single instance of the inherited class (in this case, the A class) is passed on.

![Inheritance2](https://user-images.githubusercontent.com/87706725/168802641-f0e9b7e4-9824-43a4-adbb-8b16193e8057.png)

# Output of Solved Problem
After Using the "virtual" keyword, the Diamond Problem is Solved.

![Diamond2](https://user-images.githubusercontent.com/87706725/168799944-8b2a6427-5aba-4909-9c7b-f196c2a17d4f.PNG)


Here you can see that the class A constructor is called only once.
