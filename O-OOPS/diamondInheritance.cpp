//                                                                           LearnCPP
//                                                                DIAMOND PROBLEM in INHERITANCE #1459

//**************************************  START OF THE PROGRAM  ******************************************************

// Header File Used

#include <iostream>

using namespace std;

// Creating a Parent Class A
//--------------------------------A-------------------------------------------
class A
{
    // Public so that any class can access constructor of class A
public:
    // Creating a constructor for class A
    A()
    {
        cout << "Constructor A" << endl;
    }
};
//---------------------------------A------------------------------------------

// Creating a Child Class of A i.e B
//---------------------------------B------------------------------------------------------------------

// Class A is made virtual base/parent class of by using "virtual" keyword in all it's child classes

class B : virtual public A // visibility mode is public
{
public:
    // Creating a constructor for class B
    B()
    {
        cout << "Constructor B" << endl;
    }
};
//---------------------------------B------------------------------------------------------------------

// Creating another Child Class of A i.e C
//---------------------------------C------------------------------------------------------------------
// Class A is made virtual base/parent class of by using "virtual" keyword in all it's child classes

class C : virtual public A // visibility mode is public
{
public:
    // Creating a constructor for class C
    C()
    {
        cout << "Constructor C" << endl;
    }
};
//---------------------------------C------------------------------------------------------------------

// Creating a Child Class of B & C i.e D (D has 2 parent class)

//---------------------------------D------------------------------------------------------------------

class D : public B, public C
{
public:
    // Creating a constructor for class D
    D()
    {
        cout << "Constructor D" << endl;
    }
};
//---------------------------------D------------------------------------------------------------------

//##################################### MAIN FUNCTION ##################################################

int main()
{
    // Object of sub-child class D is created
    D obj;

    return 0;
}
//**************************************  END OF THE PROGRAM  ******************************************************

//------------------------------------------ ! ! THANK YOU ! ! -------------------------------------------------------------