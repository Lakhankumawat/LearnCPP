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
 - [Access Modifiers In Inheritance](#access-modifiers-in-inheritance)
   - [Public Access Modifier](#public-access-modifier)
   - [Private Access Modifier](#private-access-modifier)
   - [Protected Access Modifier](#public-access-modifier)
   - [ Summary ](#summary)
   
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

### Access Modifiers In Inheritance

In C++ inheritance, we can derive a child class from the base class in different access modes. For example,

     class Base {
    .... ... ....
    };

    class Derived : public Base {
    .... ... ....
    };
Notice the keyword **public** in the code.
This means that we have created a derived class from the base class in public mode. Alternatively, we can also derive classes in **protected or private modes**.

These 3 keywords (public, protected, and private) are known as **access specifiers in C++ inheritance**.

### Public Access Modifier

Public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
(Meaning of Protected members will be cleared later in this section)

**Accessibility in public Inheritance**

| Accessibility |	private members |	protected members	| public members |
|---------------|-----------------|-------------------|----------------|
|  Base Class   |      Yes        |       Yes         |     Yes        |
| Derived Class |      No         |       Yes         |     Yes        |


### Private Access Modifier

As we know, private members cannot be directly accessed from outside the class. Therefore, private members cannot be inherited from the base class. But, in private mode both protected as well as public members of the base class get inherited as private members in the derived class.

**Accessibility in Private Inheritance**
| Accessibility |	private members |	         Protected members                 |           Public members                 |
|---------------|-----------------|--------------------------------------------|------------------------------------------|
|  Base Class   |      Yes        |       Yes                                  |            Yes                           |
| Derived Class |      No         |       Yes(inherited as private variables)  |     Yes(inherited as private variables)  |


### Protected Access Modifier

Protected access modifier is similar to that of private access modifiers, the difference is that the class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class. In this case, private members remain not inherited while both the protected as well as public members of the base class will get inherited as protected members in the derived class.

**Accessibility in protected Inheritance**

| Accessibility |	private members |	         Protected members                 |           Public members                       |
|---------------|-----------------|--------------------------------------------|------------------------------------------------|
|  Base Class   |      Yes        |       Yes                                  |            Yes                                 |
| Derived Class |      No         |        Yes                                 |           Yes(inherited as protected members)  |

### Summary
![image](https://user-images.githubusercontent.com/75986201/164960641-9ecc1809-1627-4355-9416-7eb7d2898d01.png)
