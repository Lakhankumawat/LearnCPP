 
C++ is an Object Oriented Programming Language in nature and it boasts off various features. In this session we would be discussing how to implement Function Overloading And Function Overriding in C++.

# Following Pointers will be covered in this article,

![Overloading-and-overriding2](https://user-images.githubusercontent.com/97386407/158064821-9bc8a80f-b967-4003-861f-a86015888c60.jpg)

# Overloading:

The function name is the same but the parameters and returns type changes. Since we will get to know the difference between the overloaded functions during compile time, it is also called Compile time polymorphism.

# Overriding:

This is a feature of Object-Oriented Programming language where the function of the child class has the same name as the parent’s class function. As the overriding functionality comes into the picture once the object is declared and the functions are accessed using the objects; that is during the execution of code, this concept of overriding is also called run time polymorphism.



Moving on Function overloading and overriding in C++

![Overloading-and-Overriding-in-C](https://user-images.githubusercontent.com/97386407/158065006-de1d3f24-0b76-45e7-9e63-b403af4fbd64.jpg)

 
--------------------------------------------------------
 
# Function Overloading in C++
 
In C++, two or more functions can have the same name if the number and/or type of parameters are different, this is called function overloading. Thus, overloaded functions are functions that have the same name but different parameters.

However, if in two or more functions, only return type is different keeping number and type of parameters same, it is not considered function overloading. In this case, the compiler gives an error.

Function overloading is achieved during compile time. It is a form of compile time polymorphism.

- Examples of overloaded functions

      int add(int, int);

      int add(int, int, int); //number of parameters different

      double add(double, double); //type of parameters different
 
----------------------------------------------------

# Function Overriding in C++

When a member function of a base class is redefined in its derived class with the same parameters and return type, it is called function overriding in C++. Now, if we use an object of the derived class to call this function, the function defined in the derived class is invoked. The base class function is said to be overridden.

Function overriding is achieved during runtime. It is a form of runtime polymorphism.
- Example :

      Class a
      {

          public:

          virtual void display(){ cout << "hello"; }
      
      };

      Class b:public a
      {

         public: 

         void display(){ cout << "bye";}
       
      };

----------------------------------------------------

# Function Overloading VS Function Overriding:

![Screenshot (14)](https://user-images.githubusercontent.com/97386407/158065212-e420fa9e-8d6e-4269-abca-4ae359337658.png)


1. Inheritance           : Overriding of functions occurs when one class is inherited from another class. Overloading can occur without inheritance.

3. Function Signature    : Overloaded functions must differ in function signature ie either number of parameters or type of parameters should differ. In overriding, function signatures must be same.

5. Scope of functions    : Overridden functions are in different scopes; whereas overloaded functions are in same scope.

7. Behavior of functions : Overriding is needed when derived class function has to do some added or different job than the base class function. Overloading is used to have same name functions which behave differently depending upon parameters passed to them.

----------------------------------------------------

For more reference you can checkout the example code of function overloading and overriding in the repository.

# Websites for reference:-

1. [Geeks for geeks](https://www.geeksforgeeks.org/function-overloading-vs-function-overriding-in-cpp/)

2. [Techvidvan](https://techvidvan.com/tutorials/function-overloading-and-overriding-in-cpp/)

3. [Edureka](https://www.edureka.co/blog/function-overloading-and-overriding-in-cpp/)

4. [Beginnersbook](https://beginnersbook.com/2017/09/cpp-function-overloading-vs-function-overriding/)




