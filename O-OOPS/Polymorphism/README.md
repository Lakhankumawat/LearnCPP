# POLYMORPHISM
- It's a feature of Object Oriented Programming, Polymorphism means "many forms".
- It occurs when we have many classes that are related to each other by inheritance
- when a single Entity has different meaning according to different context.
- - - 

####  IN C++ POLYMORPHISM CAN BE IMPLEMENTED IN THREE WAYS
  
- Function Overloading (compile time polymorphism)
- Operator Overloading (compile time polymorphism)
- Overriding,Virtual Function (Run time polymorphism)

- - -
## 1. Function Overloading/Function Polymorphism
 when one function name is overloaded with multiple definition and all can be resolved at compile time , it is known as Function Overloading.

 ☀``` In C++ all function must have unique Signature```

Let's Look at one Example how Function Polymorphism works
  > Function Signature : function_name(Argument type)

  > Function Prototype : returntype function_name(argument type)

```cpp
#include<iostream>
#include<conio>
class demo
{
    private:
    int length,bredth,radius;
    public:
    void area(int l)  //>>>>>>>>>>1
    {
        //for area of square
    }
    void area(int l,int b) //>>>>>>>>>>>2
    {
        //for area of rectangle
    }

};

int main()
{                                                  
    demo shape;                                        
    shape.area(20);   // area funtion 1 will be binded--
    shape.area(5,6); //area function 2 will be binded


}

```


>>>So from above example it is clear that how the Polymorphism could be of great use

### But why we use same name?
in C++ or any OOP language it is considered as a best practice to use polymorphism for the functions performing simillar tasks 
- - -
💡``` How compiler binds the fucntion call with the correct definition ?```
>How Function Overloading is resolved.

- When Compiler looks at the program and the fucntion call ,then on the basis of fucntion name it searches for how many definition for the particular function name is available in the program
- Then all the definition becomes candidate for the called function
- After candidate is shortlisted , then binding is done according to the following rules

>>1️⃣ Exact Match

>>2️⃣Type Promotion

>>3️⃣ Type Conversion

---

## 2. Operator Overloading
We have two types of data types one the primitives and other the non primitive.
the operators available like  + , * , - , / , == , % ......etc. are are predefined to perform operation on pritive data types like int, float,char...etc. To use these operators for non primitve data types like the classes and structures we need to explicitly invoke the custome definition.

```That is Defining an operator for non-primitive types is called Operator Overloading.```

``` 
 ⚠ we can Overload Only those operators in C++ which are valid in C language
  However there are few operators in C language which cannot be overloaded like 
  sizeof , ?: , # , :: , etc....
```
Example:
```cpp
#include<iostream>
class complex
{
    int real,imaginary;
    public:
    void set(int a,int b)
    {
        this->real=a;
        this->imaginary=b;
    }
    void view()
    {
        cout<<real<<"+"<<imaginary<<"i";
    }
//overloading + operator for adding 2 objects of complex class

complex operator +(complex c)
{
    complex temp;
    temp.real=this->real+c.real;
    temp.imaginary=this->imaginary+c.imaginary;
    return temp;
}

};

int main()
{
    complex c1,c2,c3;
    c1.set(2,3);
    c2.set(4,5);
    c3=c1+c2;
    c3.view();
}

```

>>>In the above example it's clearly shown how exactly + operator is overloaded for adding two complex numbers.
The same way other operators can also be overloaded.

---
## 3. Function Overriding
Function overriding in C++ is a feature that allows us to use a function in the child class that is already present in its parent class.  The child class inherits all the data members, and the member functions present in the parent class. If you wish to override any functionality in the child class, then you can implement function overriding. Function overriding means creating a newer version of the parent class function in the child class.
>In function Overridind the function prototype will be same but definition will be diffferent 

Let's look upon an Example
```cpp
#include<iostream>

class A
{
    public:
    void f1()<----------|
    {-------}           |        
    void f2()<- - - - --|- - - --
    {-------}           |       |
};                      |<------|-------- Function Overriding 
class B:public A        |       |
{                       |       |<---Function hiding
    void f1()<----------.       |
    {***********}               |
    void f2(int x)<-------------
    {#############}
};
int main()
{
    B obj;
    obj.f1(); //will bind f1 of B class
    obj.f2(); //will show error(why?)
    obj.f2(6);//will bind f2 of B;
}

```
- the above example demonstrates how function overriding looks like , but why obj.f2() will show error regardless of the fact that B inherits all the members of class A.

This is because of the early binding concept that only looks upon the function name, This issue is further resolved by the concept of late binding i.e. by using "Virtual Function".

💡```Virtual Function: function prefixed with virtual keyword used for achieving late binding,as pointer of parent class pointing to child class and calling to any overriden function , the parent class version is binded instead of the required one . this is also called the problem of early binding.```

example:
```cpp
#include<iostream>
class A
{
    public:
    virtual void fun1(){}-------|
    void fun2(){}               |
};                              |  
class B:public A                |
{                               |
    public:                     |
    void fun1(){}---------------|
    void f2(int x){}
};
int main()
{
    A *obj;
    obj=new A;
    obj->fun1();
    delete obj;
    obj=new B;
    obj->fun1();   ❎A ✅B
}
```

>In late binding type of                                  pointer is not
checked to whom the pointer is pointing is checked.

❤So this was all about Polymorphism in C++
   ```Thankyou```


