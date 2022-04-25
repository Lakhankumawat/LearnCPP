# Table of Content
 - [Binding In C++](#binding)
 - [Early Binding](#early)
 - [Late Binding](#late)
 
 <a name="binding"/>
 
# Binding In C++
```
The binding means the process of converting identifiers into addresses. 
For each variables and functions this binding is done. 
For functions it is matching the call with the right function definition by the compiler. 
The binding is done either at compile time or at runtime.
```
![cpp-binding](https://user-images.githubusercontent.com/84399701/164407761-e1b2a480-3715-4346-9f25-40ac8cc6a77b.png)


<a name="early"/>

## Early Binding

```
Early Binding (compile-time time polymorphism) 
As the name indicates, compiler (or linker) directly associate an address to the function call. 
It replaces the call with a machine language instruction that tells the mainframe to leap to the address of the function.
By default early binding happens in C++. 
```


<a name="late"/>

## Late Binding

```
Late Binding : (Run time polymorphism) 
In this, the compiler adds code that identifies the kind of object at runtime then matches the call with the right function definition. 
This can be achieved by declaring a virtual function.
```
