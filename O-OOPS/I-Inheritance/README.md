# Table of Content

 - [Inheritance in C++](#inheritance-in-c++)
   - [Terms Explained](#terms-explained)
   - [Advantages of Inheritance](#advantages-of-inheritance)
   - [Disadvantages of Inheritance](#disadvantages-of-inheritance)


 - [Forms of Inheritance](#forms-of-inheritance)
   - [Single Inheritance](#single-inheritance)
   - [Multiple Inheritance](#multiple-inheritance)
   - [Hierarchical Inheritance](#hierarchical-inheritance)
   - [Multilevel Inheritance](#multilevel-inheritance)
   - [Hybrid Inheritance](#hybrid-inheritance)
   - 

## Inheritance in C++

In C++, inheritance is a process in which one object acquires all the properties and behaviors of its parent object automatically. In such way, you can reuse, extend or modify the attributes and behaviors which are defined in other class.<hr>

![image](https://user-images.githubusercontent.com/75986201/164527069-ee129246-bb61-4367-b32c-40380890acdc.png)


### Terms Explained
 **Base Class**:
     A base class is an existing class from which the other classes are determined and properties are inherited. It is also known as a superclass or parent      class.
     
     
     **Syntax**: Class base_classname{ … }
     
     
**Derived Class**:
    A derived class is a class that is constructed from a base class or an existing class. It has a tendency to acquire all the methods and properties of a base class. It is also known as a subclass or child class.
    
    
    **Syntax**: Class derived_classname : access_mode base_class_name { … }

### Advantages of Inheritance
1) Reusability is a very important feature of OOPs  
2) In C++ we can reuse a class and add additional features to it
3) Reusing classes saves time and money
4) Reusing already tested and debugged classes will save a lot of effort of developing and debugging the same thing again

### Disadvantages of Inheritance

1) Inherited functions work slower than normal function as there is indirection.
2) Improper use of inheritance may lead to wrong solutions.
3) Often, data members in the base class are left unused which may lead to memory wastage.
4) Inheritance increases the coupling between base class and derived class. A change in base class will affect all the child classes.

### Forms of Inheritance 

1) Single Inheritance
2) Multiple Inheritance
3) Hierarchical Inheritance
4) Multilevel Inheritance
5) Hybrid Inheritance



![image](https://user-images.githubusercontent.com/75986201/164524966-804e81ec-0346-4431-9ae2-dd6131df3399.png)

### Single Inheritance 

Single inheritance is a type of inheritance in which a derived class is inherited with only one base class.

![Single](https://user-images.githubusercontent.com/75986201/163713213-0003cadf-b331-41e4-9b0b-38910192d892.png)




 	

