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
