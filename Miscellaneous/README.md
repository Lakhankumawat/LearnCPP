## Exception Handling in C++
Exceptions are the run-time interupts or we say the cases which are not defined and encounters during its execution.

### Two types Exceptions

1. Synchronous
2. Asynchronous
   This is archieved by specialized keywords that are:

- Try :- It represents the block of code that throw the exception or we say it tell that when the exception error.
- Catch :- Represents a block of code that is executed when a particular exception is thrown.
- throw :- Used to throw an exception. Also used list the exceptions that a function throws.

### Why Exception Handling?

These are the reasons for which we should use exception handling:

- Seperation of Error handling code from normal code.
- Functions/methods can handle any exceptions they choose.
- Grouping of Error Types.

### Try and Catch

- Try statements allows you to define a block of code that test error while executed.
- Throw keyword will throw the exception when the exception arises.
- Catch keyword will allows you do define what to do when exception arises.

### Special features of exception handling

- There is a special catch block which will accepts all types of exceptions that are thrown.

```c++
try{
    throw 01;
}
catch(...){
    cout<<"Exception Arises";
}
```

- Implicit type conversion doesn’t happen for primitive types.

```cpp
try{
    throw 'a';
}
catch(int x){
    cout<<"Int type exception Caught";
}

catch(...){
    cout<<"Default";
}
```

- If any exception is thrown and there is not catch block then the program terminates abnormally.

```cpp
try{
    throw 'a';
}
catch(int x){
  cout<<"Exception arises";
}
```

- A derived class exception always be in caught before a base class exception.

### Types Catch Block

1. Int Catch
2. Char Catch
3. Stirng Catch
4. double Catch
5. Universal Catch (As Stated second point of Special features)
