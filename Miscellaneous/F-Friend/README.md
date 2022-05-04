# Table of Contents
- [friend in C++](#friend)
- [friend Declarations](#declarations)
  - [friend function](#ffunction)
  - [Class members as friend](#fclass)
  
 # friend in C++ <a name="friend"/>
 In some cases, granting member-level access to functions that are not members of a class or to all members of a separate class is more convenient. Only the class implementer has the ability to declare its friends are. A function or a class cannot declare that it is a friend of any class. In a class definition, use the friend keyword with the name of a non-member function or other class to grant it access to your class private and protected members. A type parameter can be declared as a friend in a template definition.
 
 # friend Declarations <a name="declarations">
 If you declare a friend function that was not previously declared, that function is exported to the enclosing nonclass scope.

Functions declared in a friend declaration are treated as if they had been declared using the ``extern`` keyword. For more information, see <a href="https://docs.microsoft.com/en-us/cpp/cpp/extern-cpp?view=msvc-170"> extern.</a>

Although functions with global scope can be declared as friends prior to their prototypes, member functions cannot be declared as friends before the appearance of their complete class declaration. The following code shows why this fails:
```
class ForwardDeclared;   // Class name is known.
class HasFriends
{
    friend int ForwardDeclared::IsAFriend();   // C2039 error expected
};
```

The preceding example enters the class name `ForwardDeclared` into scope, but the complete declaration — specifically, the portion that declares the function `IsAFriend` — is not known. Therefore, the ``friend`` declaration in class ``HasFriends`` generates an error.

Starting in C++11, there are two forms of friend declarations for a class:
```
friend class F;
friend F;
```

The first form introduces a new class F if no existing class by that name was found in the innermost namespace. <b>C++11</b>: The second form does not introduce a new class; it can be used when the class has already been declared, and it must be used when declaring a template type parameter or a typedef as a friend.

Use `friend class F` when the referenced type has not yet been declared:
```
namespace NS
{
    class M
    {
        friend class F;  // Introduces F but doesn't define it
    };
}
```
In the following example, `friend F` refers to the F class that is declared outside the scope of NS.
```
class F {};
namespace NS
{
    class M
    {
        friend F;  // OK
    };
}
```
Use `friend F` to declare a template parameter as a friend:
```
template <typename T>
class my_class
{
    friend T;
    //...
};
```
Use `friend F` to declare a typedef as friend:
```
class Foo {};
typedef Foo F;

class G
{
    friend F; // OK
    friend class F // Error C2371 -- redefinition
};
```
To declare two classes that are friends of one another, the entire second class must be specified as a friend of the first class. The reason for this restriction is that the compiler has enough information to declare individual friend functions only at the point where the second class is declared.

```diff
! Note
 Although the entire second class must be a friend to the first class, 
 you can select which functions in the first class will be friends of the second class. 
```
## friend function <a name="ffunction"/>
A friend function is a function that is not a member of a class but has access to the class's private and protected members. Friend functions are not considered class members; they are normal external functions that are given special access privileges. Friends are not in the class's scope, and they are not called using the member-selection operators (. and ->) unless they are members of another class. A friend function is declared by the class that is granting access. The friend declaration can be placed anywhere in the class declaration. It is not affected by the access control keywords.
Example : <a href="https://github.com/Lakhankumawat/LearnCPP/blob/main/Miscellaneous/F-Friend/FriendFunction.cpp">FriendFunction.cpp</a>

## Class members as friends <a name="fclass">
A friend class is a class all of whose member functions are friend functions of a class, that is, whose member functions have access to the other class's private and protected members. Syntax:
```
friend class A;
```
Example : <a href="https://github.com/Lakhankumawat/LearnCPP/blob/main/Miscellaneous/F-Friend/FriendClass.cpp">FriendClass.cpp</a> 

Friendship is not mutual unless explicitly specified as such.

